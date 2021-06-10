#include <iostream>
#include <fstream>
#include <sstream>
#include <stdio.h>
#include <vector>
#include <utility>
#include <map>
#include <string>
#include "TH1F.h"
#include "TH2F.h"
#include "TH3F.h"
#include "TTree.h"
#include "TChain.h"
#include "TFile.h"
#include "TMath.h"
#include "TSystem.h"
#include "TRandom.h"
#include "TLorentzVector.h"
#include "TRandom3.h"
#include "makeHisto.h"
#include "eem_Tree.h"
//#include "LumiReweightingStandAlone.h"

int main(int argc, char** argv) {

    using namespace std;
    myMap1 = new map<string, TH1F*>();
    myMap2 = new map<string, TH2F*>();
    string status_sample = *(argv + 1);
    bool isMC = false;
    bool isData = false;
    bool isEmbedded=false;
    if (status_sample.compare("mc") == 0) isMC = true;
    if (status_sample.compare("data") == 0) isData = true;
    if (status_sample.compare("embedded") == 0) isEmbedded = true;
    string out = *(argv + 2);
    string outname= out;
    TFile *fout = TFile::Open(outname.c_str(), "RECREATE");

    string in = *(argv + 3);
    string inname= in;
    TFile *fIn = TFile::Open(inname.c_str());

    int recoil=0;
    string recoilType = *(argv + 4);
    if (recoilType.compare("W") == 0)  recoil=1;
    if (recoilType.compare("Z") == 0)  recoil=2;

    string year_sample = *(argv + 5);
    int year=2018;
    if (year_sample.compare("2016") == 0) year=2016;
    if (year_sample.compare("2017") == 0) year=2017;

    TTree* treePtr = (TTree*) fIn->Get("eem/final/Ntuple");
    TH1F *evCounter = (TH1F*) fIn->Get("eem/eventCount");
    TH1F *evCounterW = (TH1F*) fIn->Get("eem/summedWeights");
    HTauTauTree_eem* tree = new HTauTauTree_eem (treePtr);

    TTree *Run_Tree = new TTree("eem_tree", "eem_tree");
    Run_Tree->SetDirectory(0);
    Run_Tree->Branch("run", &run, "run/I");
    Run_Tree->Branch("lumi", &lumi, "lumi/I");
    Run_Tree->Branch("evt", &evt, "evt/I");

    Run_Tree->Branch("npv", &npv, "npv/F");
    Run_Tree->Branch("npu", &npu, "npu/F");
    Run_Tree->Branch("amcatNLO_weight", &aMCatNLO_weight, "aMCatNLO_weight/F");

    Run_Tree->Branch("pt_1", &pt_1, "pt_1/F");
    Run_Tree->Branch("phi_1", &phi_1, "phi_1/F");
    Run_Tree->Branch("eta_1", &eta_1, "eta_1/F");
    Run_Tree->Branch("m_1", &m_1, "m_1/F");
    Run_Tree->Branch("e_1", &e_1, "e_1/F");
    Run_Tree->Branch("q_1", &q_1, "q_1/F");
    Run_Tree->Branch("iso_1", &iso_1, "iso_1/F");
    Run_Tree->Branch("eid80iso_1", &eid80iso_1, "eid80iso_1/F");
    Run_Tree->Branch("eid90iso_1", &eid90iso_1, "eid90iso_1/F");
    Run_Tree->Branch("eid80iso_2", &eid80iso_2, "eid80iso_2/F");
    Run_Tree->Branch("eid90iso_2", &eid90iso_2, "eid90iso_2/F");
    Run_Tree->Branch("eid80noiso_1", &eid80noiso_1, "eid80noiso_1/F");
    Run_Tree->Branch("eid90noiso_1", &eid90noiso_1, "eid90noiso_1/F");
    Run_Tree->Branch("eid80noiso_2", &eid80noiso_2, "eid80noiso_2/F");
    Run_Tree->Branch("eid90noiso_2", &eid90noiso_2, "eid90noiso_2/F");
    Run_Tree->Branch("id_m_medium_3", &id_m_medium_3, "id_m_medium_3/F");
    Run_Tree->Branch("pt_2", &pt_2, "pt_2/F");
    Run_Tree->Branch("phi_2", &phi_2, "phi_2/F");
    Run_Tree->Branch("eta_2", &eta_2, "eta_2/F");
    Run_Tree->Branch("m_2", &m_2, "m_2/F");
    Run_Tree->Branch("e_2", &e_2, "e_2/F");
    Run_Tree->Branch("q_2", &q_2, "q_2/F");
    Run_Tree->Branch("iso_2", &iso_2, "iso_2/F");
    Run_Tree->Branch("genpX", &genpX, "genpX/F");
    Run_Tree->Branch("genpY", &genpY, "genpY/F");
    Run_Tree->Branch("genpT", &genpT, "genpT/F");
    Run_Tree->Branch("genM", &genM, "genM/F");
    Run_Tree->Branch("vispX", &vispX, "vispX/F");
    Run_Tree->Branch("vispY", &vispY, "vispY/F");

    Run_Tree->Branch("passEle27", &passEle27, "passEle27/F");
    Run_Tree->Branch("matchEle27_1", &matchEle27_1, "matchEle27_1/F");
    Run_Tree->Branch("matchEle27_2", &matchEle27_2, "matchEle27_2/F");
    Run_Tree->Branch("filterEle27_1", &filterEle27_1, "filterEle27_1/F");
    Run_Tree->Branch("filterEle27_2", &filterEle27_2, "filterEle27_2/F");
    Run_Tree->Branch("passEle32", &passEle32, "passEle32/F");
    Run_Tree->Branch("matchEle32_1", &matchEle32_1, "matchEle32_1/F");
    Run_Tree->Branch("matchEle32_2", &matchEle32_2, "matchEle32_2/F");
    Run_Tree->Branch("filterEle32_1", &filterEle32_1, "filterEle32_1/F");
    Run_Tree->Branch("filterEle32_2", &filterEle32_2, "filterEle32_2/F");
    Run_Tree->Branch("passEle35", &passEle35, "passEle35/F");
    Run_Tree->Branch("matchEle35_1", &matchEle35_1, "matchEle35_1/F");
    Run_Tree->Branch("matchEle35_2", &matchEle35_2, "matchEle35_2/F");
    Run_Tree->Branch("filterEle35_1", &filterEle35_1, "filterEle35_1/F");
    Run_Tree->Branch("filterEle35_2", &filterEle35_2, "filterEle35_2/F");
    Run_Tree->Branch("passEle25", &passEle25, "passEle25/F");
    Run_Tree->Branch("matchEle25_1", &matchEle25_1, "matchEle25_1/F");
    Run_Tree->Branch("filterEle25_1", &filterEle25_1, "filterEle25_1/F");
    Run_Tree->Branch("matchEle25_2", &matchEle25_2, "matchEle25_2/F");
    Run_Tree->Branch("filterEle25_2", &filterEle25_2, "filterEle25_2/F");

    Run_Tree->Branch("pt_3", &pt_3, "pt_3/F");
    Run_Tree->Branch("phi_3", &phi_3, "phi_3/F");
    Run_Tree->Branch("eta_3", &eta_3, "eta_3/F");
    Run_Tree->Branch("m_3", &m_3, "m_3/F");
    Run_Tree->Branch("e_3", &e_3, "e_3/F");
    Run_Tree->Branch("q_3", &q_3, "q_3/F");
    Run_Tree->Branch("iso_3", &iso_3, "iso_3/F");

    Run_Tree->Branch("numGenJets", &numGenJets, "numGenJets/F");
    Run_Tree->Branch("pt_top1", &pt_top1, "pt_top1/F");
    Run_Tree->Branch("pt_top2", &pt_top2, "pt_top2/F");
    Run_Tree->Branch("genweight", &genweight, "genweight/F");

    Run_Tree->Branch("met", &met, "met/F");
    Run_Tree->Branch("metphi", &metphi, "metphi/F");

    Run_Tree->Branch("gen_match_1", &gen_match_1, "gen_match_1/I");
    Run_Tree->Branch("gen_match_2", &gen_match_2, "gen_match_2/I");
    Run_Tree->Branch("gen_match_3", &gen_match_3, "gen_match_3/I");

    Run_Tree->Branch("nbtag", &nbtag, "nbtag/I");
    Run_Tree->Branch("njets", &njets, "njets/I");

    Run_Tree->Branch("bpt_1", &bpt_1, "bpt_1/F");
    Run_Tree->Branch("beta_1", &beta_1, "beta_1/F");
    Run_Tree->Branch("bphi_1", &bphi_1, "bphi_1/F");
    Run_Tree->Branch("bcsv_1", &bcsv_1, "bcsv_1/F");
    Run_Tree->Branch("bflavor_1", &bflavor_1, "bflavor_1/F");
    Run_Tree->Branch("bpt_2", &bpt_2, "bpt_2/F");
    Run_Tree->Branch("beta_2", &beta_2, "beta_2/F");
    Run_Tree->Branch("bphi_2", &bphi_2, "bphi_2/F");
    Run_Tree->Branch("bcsv_2", &bcsv_2, "bcsv_2/F");
    Run_Tree->Branch("bflavor_2", &bflavor_2, "bflavor_2/F");

    int bestEntry=-1;
    ULong64_t evt_now=0;
    ULong64_t evt_before=-1;
    float lt_before=0;
    bool print=false;
    plotFill("nevents",0,9,0,9,evCounter->GetBinContent(1));
    plotFill("nevents",1,9,0,9,evCounterW->GetBinContent(1));
    for (int iEntry = 0; iEntry < tree->GetEntries() ; iEntry++)
    {
        float pu=1.0;
        tree->GetEntry(iEntry);
        bool print=false;
        if (iEntry % 1000 == 0) fprintf(stdout, "\r  Processed events: %8d ", iEntry);
        fflush(stdout);
        TLorentzVector dau1;
        TLorentzVector dau2;
        TLorentzVector dau3;
        dau1.SetPtEtaPhiM(tree->e1Pt,tree->e1Eta,tree->e1Phi,tree->e1Mass);
        dau2.SetPtEtaPhiM(tree->e2Pt,tree->e2Eta,tree->e2Phi,tree->e2Mass);
        dau3.SetPtEtaPhiM(tree->mPt,tree->mEta,tree->mPhi,tree->mMass);
        if (dau1.DeltaR(dau2)<0.3) continue;
        if (dau1.DeltaR(dau3)<0.3) continue;
        if (dau2.DeltaR(dau3)<0.3) continue;
	if (fabs(tree->mPVDXY)>0.045) continue;
        if (fabs(tree->mPVDZ)>0.2) continue;
        if (fabs(tree->e1PVDXY)>0.045) continue;
        if (fabs(tree->e1PVDZ)>0.2) continue;
        if (fabs(tree->e2PVDXY)>0.045) continue;
        if (fabs(tree->e2PVDZ)>0.2) continue;
	if (!tree->e1MVAIsoWP90 or !tree->e2MVAIsoWP90) continue;
        if (!tree->e1PassesConversionVeto or !tree->e2PassesConversionVeto) continue;
	if (tree->e1Charge*tree->e2Charge>0) continue;
	if ((dau1+dau2).M()>106 or (dau1+dau2).M()<76) continue;
        if (tree->e1RelPFIsoRho>0.15) continue;
        if (tree->e2RelPFIsoRho>0.15) continue;
	if (dau1.Pt()<25) continue;
        if (dau2.Pt()<9.5) continue;
        if (dau3.Pt()<9.5) continue;
        if (fabs(dau1.Eta())>2.5 or fabs(dau2.Eta())>2.5 or fabs(dau3.Eta())>2.4) continue;
	evt_now=tree->evt;
	if (tree->eVetoZTTp001dxyzR0>2) continue;
	if (tree->muVetoZTTp001dxyzR0>1) continue;
	if (evt_now!=evt_before){
	   lt_before=tree->mPt + tree->e1Pt + tree->e2Pt;
	}
        if (evt_now!=evt_before){
           if (bestEntry>-1)
              fillTree(Run_Tree,tree,bestEntry,recoil,isMC,year);
           bestEntry=iEntry;
	}
	if (evt_now==evt_before){
	   if (tree->mPt + tree->e1Pt + tree->e2Pt >lt_before+0.0001){
		bestEntry=iEntry;
	 	lt_before= tree->mPt + tree->e1Pt + tree->e2Pt;
	   }
	}
	evt_before=evt_now;
    }
    if (bestEntry>-1)
      fillTree(Run_Tree,tree,bestEntry,recoil,isMC,year);
    fout->cd();
    Run_Tree->Write();
    map<string, TH1F*>::const_iterator iMap1 = myMap1->begin();
    map<string, TH1F*>::const_iterator jMap1 = myMap1->end();
    for (; iMap1 != jMap1; ++iMap1)
        nplot1(iMap1->first)->Write();
    map<string, TH2F*>::const_iterator iMap2 = myMap2->begin();
    map<string, TH2F*>::const_iterator jMap2 = myMap2->end();
    for (; iMap2 != jMap2; ++iMap2)
        nplot2(iMap2->first)->Write();

    fout->Close();
    return 0;
}

