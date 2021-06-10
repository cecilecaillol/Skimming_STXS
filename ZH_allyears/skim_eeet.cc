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
#include "eeet_Tree.h"
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

    TTree* treePtr = (TTree*) fIn->Get("eeet/final/Ntuple");
    TH1F *evCounter = (TH1F*) fIn->Get("eeet/eventCount");
    TH1F *evCounterW = (TH1F*) fIn->Get("eeet/summedWeights");
    HTauTauTree_eeet* tree = new HTauTauTree_eeet (treePtr);

    TTree *Run_Tree = new TTree("eeet_tree", "eeet_tree");
    Run_Tree->SetDirectory(0);
    Run_Tree->Branch("run", &run, "run/I");
    Run_Tree->Branch("lumi", &lumi, "lumi/I");
    Run_Tree->Branch("evt", &evt, "evt/I");

    Run_Tree->Branch("metcov00", &metcov00, "metcov00/F");
    Run_Tree->Branch("metcov10", &metcov10, "metcov10/F");
    Run_Tree->Branch("metcov11", &metcov11, "metcov11/F");
    Run_Tree->Branch("metcov01", &metcov01, "metcov01/F");

    Run_Tree->Branch("passDoubleEle", &passDoubleEle, "passDoubleEle/F");
    Run_Tree->Branch("passEle27", &passEle27, "passEle27/F");
    Run_Tree->Branch("matchEle27_1", &matchEle27_1, "matchEle27_1/F");
    Run_Tree->Branch("filterEle27_1", &filterEle27_1, "filterEle27_1/F");
    Run_Tree->Branch("matchEle27_2", &matchEle27_2, "matchEle27_2/F");
    Run_Tree->Branch("filterEle27_2", &filterEle27_2, "filterEle27_2/F");
    Run_Tree->Branch("matchEle27_3", &matchEle27_3, "matchEle27_3/F");
    Run_Tree->Branch("filterEle27_3", &filterEle27_3, "filterEle27_3/F");
    Run_Tree->Branch("passEle32", &passEle32, "passEle32/F");
    Run_Tree->Branch("matchEle32_1", &matchEle32_1, "matchEle32_1/F");
    Run_Tree->Branch("filterEle32_1", &filterEle32_1, "filterEle32_1/F");
    Run_Tree->Branch("matchEle32_2", &matchEle32_2, "matchEle32_2/F");
    Run_Tree->Branch("filterEle32_2", &filterEle32_2, "filterEle32_2/F");
    Run_Tree->Branch("matchEle32_3", &matchEle32_3, "matchEle32_3/F");
    Run_Tree->Branch("filterEle32_3", &filterEle32_3, "filterEle32_3/F");
    Run_Tree->Branch("passEle35", &passEle35, "passEle35/F");
    Run_Tree->Branch("matchEle35_1", &matchEle35_1, "matchEle35_1/F");
    Run_Tree->Branch("filterEle35_1", &filterEle35_1, "filterEle35_1/F");
    Run_Tree->Branch("matchEle35_2", &matchEle35_2, "matchEle35_2/F");
    Run_Tree->Branch("filterEle35_2", &filterEle35_2, "filterEle35_2/F");
    Run_Tree->Branch("matchEle35_3", &matchEle35_3, "matchEle35_3/F");
    Run_Tree->Branch("filterEle35_3", &filterEle35_3, "filterEle35_3/F");
    Run_Tree->Branch("passEle25", &passEle25, "passEle25/F");
    Run_Tree->Branch("matchEle25_1", &matchEle25_1, "matchEle25_1/F");
    Run_Tree->Branch("filterEle25_1", &filterEle25_1, "filterEle25_1/F");
    Run_Tree->Branch("matchEle25_2", &matchEle25_2, "matchEle25_2/F");
    Run_Tree->Branch("filterEle25_2", &filterEle25_2, "filterEle25_2/F");
    Run_Tree->Branch("matchEle25_3", &matchEle25_3, "matchEle25_3/F");
    Run_Tree->Branch("filterEle25_3", &filterEle25_3, "filterEle25_3/F");

    Run_Tree->Branch("lheweight_muR0p5_muF0p5", &lheweight_muR0p5_muF0p5, "lheweight_muR0p5_muF0p5/F");
    Run_Tree->Branch("lheweight_muR0p5_muF1", &lheweight_muR0p5_muF1, "lheweight_muR0p5_muF1/F");
    Run_Tree->Branch("lheweight_muR0p5_muF2", &lheweight_muR0p5_muF2, "lheweight_muR0p5_muF2/F");
    Run_Tree->Branch("lheweight_muR1_muF0p5", &lheweight_muR1_muF0p5, "lheweight_muR1_muF0p5/F");
    Run_Tree->Branch("lheweight_muR1_muF2", &lheweight_muR1_muF2, "lheweight_muR1_muF2/F");
    Run_Tree->Branch("lheweight_muR2_muF0p5", &lheweight_muR2_muF0p5, "lheweight_muR2_muF0p5/F");
    Run_Tree->Branch("lheweight_muR2_muF1", &lheweight_muR2_muF1, "lheweight_muR2_muF1/F");
    Run_Tree->Branch("lheweight_muR2_muF2", &lheweight_muR2_muF2, "lheweight_muR2_muF2/F");

    Run_Tree->Branch("PythiaWeight_fsr_muR0p25", &PythiaWeight_fsr_muR0p25, "PythiaWeight_fsr_muR0p25/F");
    Run_Tree->Branch("PythiaWeight_fsr_muR0p5", &PythiaWeight_fsr_muR0p5, "PythiaWeight_fsr_muR0p5/F");
    Run_Tree->Branch("PythiaWeight_fsr_muR2", &PythiaWeight_fsr_muR2, "PythiaWeight_fsr_muR2/F");
    Run_Tree->Branch("PythiaWeight_fsr_muR4", &PythiaWeight_fsr_muR4, "PythiaWeight_fsr_muR4/F");
    Run_Tree->Branch("PythiaWeight_isr_muR0p25", &PythiaWeight_isr_muR0p25, "PythiaWeight_isr_muR0p25/F");
    Run_Tree->Branch("PythiaWeight_isr_muR0p5", &PythiaWeight_isr_muR0p5, "PythiaWeight_isr_muR0p5/F");
    Run_Tree->Branch("PythiaWeight_isr_muR2", &PythiaWeight_isr_muR2, "PythiaWeight_isr_muR2/F");
    Run_Tree->Branch("PythiaWeight_isr_muR4", &PythiaWeight_isr_muR4, "PythiaWeight_isr_muR4/F");

    Run_Tree->Branch("npv", &npv, "npv/F");
    Run_Tree->Branch("npu", &npu, "npu/F");
    Run_Tree->Branch("aMCatNLO_weight", &aMCatNLO_weight, "aMCatNLO_weight/F");

    Run_Tree->Branch("prefiring_weight", &prefiring_weight, "prefiring_weight/F");
    Run_Tree->Branch("prefiring_weight_up", &prefiring_weight_up, "prefiring_weight_up/F");
    Run_Tree->Branch("prefiring_weight_down", &prefiring_weight_down, "prefiring_weight_down/F");
    Run_Tree->Branch("bweight_2016", &bweight_2016, "bweight_2016/F");
    Run_Tree->Branch("bweight_2017", &bweight_2017, "bweight_2017/F");
    Run_Tree->Branch("bweight_2018", &bweight_2018, "bweight_2018/F");
    Run_Tree->Branch("bweight", &bweight, "bweight/F");

    Run_Tree->Branch("Rivet_VEta", &Rivet_VEta, "Rivet_VEta/F");
    Run_Tree->Branch("Rivet_VPt", &Rivet_VPt, "Rivet_VPt/F");
    Run_Tree->Branch("Rivet_errorCode", &Rivet_errorCode, "Rivet_errorCode/F");
    Run_Tree->Branch("Rivet_higgsEta", &Rivet_higgsEta, "Rivet_higgsEta/F");
    Run_Tree->Branch("Rivet_higgsPt", &Rivet_higgsPt, "Rivet_higgsPt/F");
    Run_Tree->Branch("Rivet_nJets25", &Rivet_nJets25, "Rivet_nJets25/F");
    Run_Tree->Branch("Rivet_nJets30", &Rivet_nJets30, "Rivet_nJets30/F");
    Run_Tree->Branch("Rivet_p4decay_VEta", &Rivet_p4decay_VEta, "Rivet_p4decay_VEta/F");
    Run_Tree->Branch("Rivet_p4decay_VPt", &Rivet_p4decay_VPt, "Rivet_p4decay_VPt/F");
    Run_Tree->Branch("Rivet_prodMode", &Rivet_prodMode, "Rivet_prodMode/F");
    Run_Tree->Branch("Rivet_stage0_cat", &Rivet_stage0_cat, "Rivet_stage0_cat/F");
    Run_Tree->Branch("Rivet_stage1_1_fine_cat_pTjet30GeV", &Rivet_stage1_1_fine_cat_pTjet30GeV, "Rivet_stage1_1_fine_cat_pTjet30GeV/F");
    Run_Tree->Branch("Rivet_stage1_1_cat_pTjet30GeV", &Rivet_stage1_1_cat_pTjet30GeV, "Rivet_stage1_1_cat_pTjet30GeV/F");
    Run_Tree->Branch("Rivet_stage1_cat_pTjet30GeV", &Rivet_stage1_cat_pTjet30GeV, "Rivet_stage1_cat_pTjet30GeV/F");

    Run_Tree->Branch("met", &met, "met/F");
    Run_Tree->Branch("metphi", &metphi, "metphi/F");
    Run_Tree->Branch("met_UESUp", &met_UESUp, "met_UESUp/F");
    Run_Tree->Branch("metphi_UESUp", &metphi_UESUp, "metphi_UESUp/F");
    Run_Tree->Branch("met_UESDown", &met_UESDown, "met_UESDown/F");
    Run_Tree->Branch("metphi_UESDown", &metphi_UESDown, "metphi_UESDown/F");
    Run_Tree->Branch("met_JetEC2Down", &met_JetEC2Down, "met_JetEC2Down/F");
    Run_Tree->Branch("metphi_JetEC2Down", &metphi_JetEC2Down, "metphi_JetEC2Down/F");
    Run_Tree->Branch("met_JetEC2yearUp", &met_JetEC2yearUp, "met_JetEC2yearUp/F");
    Run_Tree->Branch("metphi_JetEC2yearUp", &metphi_JetEC2yearUp, "metphi_JetEC2yearUp/F");
    Run_Tree->Branch("met_JetEC2yearDown", &met_JetEC2yearDown, "met_JetEC2yearDown/F");
    Run_Tree->Branch("metphi_JetEC2yearDown", &metphi_JetEC2yearDown, "metphi_JetEC2yearDown/F");
    Run_Tree->Branch("met_JetFlavorQCDUp", &met_JetFlavorQCDUp, "met_JetFlavorQCDUp/F");
    Run_Tree->Branch("metphi_JetFlavorQCDUp", &metphi_JetFlavorQCDUp, "metphi_JetFlavorQCDUp/F");
    Run_Tree->Branch("met_JetFlavorQCDDown", &met_JetFlavorQCDDown, "met_JetFlavorQCDDown/F");
    Run_Tree->Branch("metphi_JetFlavorQCDDown", &metphi_JetFlavorQCDDown, "metphi_JetFlavorQCDDown/F");
    Run_Tree->Branch("met_JetHFUp", &met_JetHFUp, "met_JetHFUp/F");
    Run_Tree->Branch("metphi_JetHFUp", &metphi_JetHFUp, "metphi_JetHFUp/F");
    Run_Tree->Branch("met_JetHFDown", &met_JetHFDown, "met_JetHFDown/F");
    Run_Tree->Branch("metphi_JetHFDown", &metphi_JetHFDown, "metphi_JetHFDown/F");
    Run_Tree->Branch("met_JetHFyearUp", &met_JetHFyearUp, "met_JetHFyearUp/F");
    Run_Tree->Branch("metphi_JetHFyearUp", &metphi_JetHFyearUp, "metphi_JetHFyearUp/F");
    Run_Tree->Branch("met_JetHFyearDown", &met_JetHFyearDown, "met_JetHFyearDown/F");
    Run_Tree->Branch("metphi_JetHFyearDown", &metphi_JetHFyearDown, "metphi_JetHFyearDown/F");
    Run_Tree->Branch("met_JetRelativeBalUp", &met_JetRelativeBalUp, "met_JetRelativeBalUp/F");
    Run_Tree->Branch("metphi_JetRelativeBalUp", &metphi_JetRelativeBalUp, "metphi_JetRelativeBalUp/F");
    Run_Tree->Branch("met_JetRelativeBalDown", &met_JetRelativeBalDown, "met_JetRelativeBalDown/F");
    Run_Tree->Branch("metphi_JetRelativeBalDown", &metphi_JetRelativeBalDown, "metphi_JetRelativeBalDown/F");
    Run_Tree->Branch("met_JetRelativeSampleUp", &met_JetRelativeSampleUp, "met_JetRelativeSampleUp/F");
    Run_Tree->Branch("metphi_JetRelativeSampleUp", &metphi_JetRelativeSampleUp, "metphi_JetRelativeSampleUp/F");
    Run_Tree->Branch("met_JetRelativeSampleDown", &met_JetRelativeSampleDown, "met_JetRelativeSampleDown/F");
    Run_Tree->Branch("metphi_JetRelativeSampleDown", &metphi_JetRelativeSampleDown, "metphi_JetRelativeSampleDown/F");
    Run_Tree->Branch("met_JERUp", &met_JERUp, "met_JERUp/F");
    Run_Tree->Branch("metphi_JERUp", &metphi_JERUp, "metphi_JERUp/F");
    Run_Tree->Branch("met_JERDown", &met_JERDown, "met_JERDown/F");
    Run_Tree->Branch("metphi_JERDown", &metphi_JERDown, "metphi_JERDown/F");
    Run_Tree->Branch("met_JetAbsoluteUp", &met_JetAbsoluteUp, "met_JetAbsoluteUp/F");
    Run_Tree->Branch("metphi_JetAbsoluteUp", &metphi_JetAbsoluteUp, "metphi_JetAbsoluteUp/F");
    Run_Tree->Branch("met_JetAbsoluteDown", &met_JetAbsoluteDown, "met_JetAbsoluteDown/F");
    Run_Tree->Branch("metphi_JetAbsoluteDown", &metphi_JetAbsoluteDown, "metphi_JetAbsoluteDown/F");
    Run_Tree->Branch("met_JetAbsoluteyearUp", &met_JetAbsoluteyearUp, "met_JetAbsoluteyearUp/F");
    Run_Tree->Branch("metphi_JetAbsoluteyearUp", &metphi_JetAbsoluteyearUp, "metphi_JetAbsoluteyearUp/F");
    Run_Tree->Branch("met_JetAbsoluteyearDown", &met_JetAbsoluteyearDown, "met_JetAbsoluteyearDown/F");
    Run_Tree->Branch("metphi_JetAbsoluteyearDown", &metphi_JetAbsoluteyearDown, "metphi_JetAbsoluteyearDown/F");
    Run_Tree->Branch("met_JetBBEC1Up", &met_JetBBEC1Up, "met_JetBBEC1Up/F");
    Run_Tree->Branch("metphi_JetBBEC1Up", &metphi_JetBBEC1Up, "metphi_JetBBEC1Up/F");
    Run_Tree->Branch("met_JetBBEC1Down", &met_JetBBEC1Down, "met_JetBBEC1Down/F");
    Run_Tree->Branch("metphi_JetBBEC1Down", &metphi_JetBBEC1Down, "metphi_JetBBEC1Down/F");
    Run_Tree->Branch("met_JetBBEC1yearUp", &met_JetBBEC1yearUp, "met_JetBBEC1yearUp/F");
    Run_Tree->Branch("metphi_JetBBEC1yearUp", &metphi_JetBBEC1yearUp, "metphi_JetBBEC1yearUp/F");
    Run_Tree->Branch("met_JetBBEC1yearDown", &met_JetBBEC1yearDown, "met_JetBBEC1yearDown/F");
    Run_Tree->Branch("metphi_JetBBEC1yearDown", &metphi_JetBBEC1yearDown, "metphi_JetBBEC1yearDown/F");
    Run_Tree->Branch("met_JetEC2Up", &met_JetEC2Up, "met_JetEC2Up/F");
    Run_Tree->Branch("metphi_JetEC2Up", &metphi_JetEC2Up, "metphi_JetEC2Up/F");


    Run_Tree->Branch("pt_1", &pt_1, "pt_1/F");
    Run_Tree->Branch("pt_1_ScaleUp", &pt_1_ScaleUp, "pt_1_ScaleUp/F");
    Run_Tree->Branch("pt_1_ScaleDown", &pt_1_ScaleDown, "pt_1_ScaleDown/F");
    Run_Tree->Branch("pt_1_SigmaUp", &pt_1_SigmaUp, "pt_1_SigmaUp/F");
    Run_Tree->Branch("pt_1_SigmaDown", &pt_1_SigmaDown, "pt_1_SigmaDown/F");
    Run_Tree->Branch("phi_1", &phi_1, "phi_1/F");
    Run_Tree->Branch("eta_1", &eta_1, "eta_1/F");
    Run_Tree->Branch("m_1", &m_1, "m_1/F");
    Run_Tree->Branch("e_1", &e_1, "e_1/F");
    Run_Tree->Branch("q_1", &q_1, "q_1/F");
    Run_Tree->Branch("iso_1", &iso_1, "iso_1/F");
    Run_Tree->Branch("eid80iso_1", &eid80iso_1, "eid80iso_1/F");
    Run_Tree->Branch("eid80noiso_1", &eid80noiso_1, "eid80noiso_1/F");
    Run_Tree->Branch("eid90iso_1", &eid90iso_1, "eid90iso_1/F");
    Run_Tree->Branch("eid90noiso_1", &eid90noiso_1, "eid90noiso_1/F");

    Run_Tree->Branch("pt_2", &pt_2, "pt_2/F");
    Run_Tree->Branch("pt_2_ScaleUp", &pt_2_ScaleUp, "pt_2_ScaleUp/F");
    Run_Tree->Branch("pt_2_ScaleDown", &pt_2_ScaleDown, "pt_2_ScaleDown/F");
    Run_Tree->Branch("pt_2_SigmaUp", &pt_2_SigmaUp, "pt_2_SigmaUp/F");
    Run_Tree->Branch("pt_2_SigmaDown", &pt_2_SigmaDown, "pt_2_SigmaDown/F");
    Run_Tree->Branch("phi_2", &phi_2, "phi_2/F");
    Run_Tree->Branch("eta_2", &eta_2, "eta_2/F");
    Run_Tree->Branch("m_2", &m_2, "m_2/F");
    Run_Tree->Branch("e_2", &e_2, "e_2/F");
    Run_Tree->Branch("q_2", &q_2, "q_2/F");
    Run_Tree->Branch("iso_2", &iso_2, "iso_2/F");
    Run_Tree->Branch("eid80iso_2", &eid80iso_2, "eid80iso_2/F");
    Run_Tree->Branch("eid80noiso_2", &eid80noiso_2, "eid80noiso_2/F");
    Run_Tree->Branch("eid90iso_2", &eid90iso_2, "eid90iso_2/F");
    Run_Tree->Branch("eid90noiso_2", &eid90noiso_2, "eid90noiso_2/F");

    Run_Tree->Branch("pt_3", &pt_3, "pt_3/F");
    Run_Tree->Branch("pt_3_ScaleUp", &pt_3_ScaleUp, "pt_3_ScaleUp/F");
    Run_Tree->Branch("pt_3_ScaleDown", &pt_3_ScaleDown, "pt_3_ScaleDown/F");
    Run_Tree->Branch("pt_3_SigmaUp", &pt_3_SigmaUp, "pt_3_SigmaUp/F");
    Run_Tree->Branch("pt_3_SigmaDown", &pt_3_SigmaDown, "pt_3_SigmaDown/F");
    Run_Tree->Branch("phi_3", &phi_3, "phi_3/F");
    Run_Tree->Branch("eta_3", &eta_3, "eta_3/F");
    Run_Tree->Branch("m_3", &m_3, "m_3/F");
    Run_Tree->Branch("e_3", &e_3, "e_3/F");
    Run_Tree->Branch("q_3", &q_3, "q_3/F");
    Run_Tree->Branch("iso_3", &iso_3, "iso_3/F");
    Run_Tree->Branch("eid80iso_3", &eid80iso_3, "eid80iso_3/F");
    Run_Tree->Branch("eid80noiso_3", &eid80noiso_3, "eid80noiso_3/F");
    Run_Tree->Branch("eid90iso_3", &eid90iso_3, "eid90iso_3/F");
    Run_Tree->Branch("eid90noiso_3", &eid90noiso_3, "eid90noiso_3/F");

    Run_Tree->Branch("genpX", &genpX, "genpX/F");
    Run_Tree->Branch("genpY", &genpY, "genpY/F");
    Run_Tree->Branch("genpT", &genpT, "genpT/F");
    Run_Tree->Branch("genM", &genM, "genM/F");
    Run_Tree->Branch("vispX", &vispX, "vispX/F");
    Run_Tree->Branch("vispY", &vispY, "vispY/F");

    Run_Tree->Branch("Flag_goodVertices", &Flag_goodVertices, "Flag_goodVertices/F");
    Run_Tree->Branch("Flag_globalSuperTightHalo2016Filter", &Flag_globalSuperTightHalo2016Filter, "Flag_globalSuperTightHalo2016Filter/F");
    Run_Tree->Branch("Flag_eeBadScFilter", &Flag_eeBadScFilter, "Flag_eeBadScFilter/F");
    Run_Tree->Branch("Flag_ecalBadCalibFilter", &Flag_ecalBadCalibFilter, "Flag_ecalBadCalibFilter/F");
    Run_Tree->Branch("Flag_ecalBadCalibReducedMINIAODFilter", &Flag_ecalBadCalibReducedMINIAODFilter, "Flag_ecalBadCalibReducedMINIAODFilter/F");
    Run_Tree->Branch("Flag_badMuons", &Flag_badMuons, "Flag_badMuons/F");
    Run_Tree->Branch("Flag_duplicateMuons", &Flag_duplicateMuons, "Flag_duplicateMuons/F");
    Run_Tree->Branch("Flag_HBHENoiseIsoFilter", &Flag_HBHENoiseIsoFilter, "Flag_HBHENoiseIsoFilter/F");
    Run_Tree->Branch("Flag_HBHENoiseFilter", &Flag_HBHENoiseFilter, "Flag_HBHENoiseFilter/F");
    Run_Tree->Branch("Flag_EcalDeadCellTriggerPrimitiveFilter", &Flag_EcalDeadCellTriggerPrimitiveFilter, "Flag_EcalDeadCellTriggerPrimitiveFilter/F");
    Run_Tree->Branch("Flag_BadPFMuonFilter", &Flag_BadPFMuonFilter, "Flag_BadPFMuonFilter/F");
    Run_Tree->Branch("Flag_BadChargedCandidateFilter", &Flag_BadChargedCandidateFilter, "Flag_BadChargedCandidateFilter/F");


    Run_Tree->Branch("pt_4", &pt_4, "pt_4/F");
    Run_Tree->Branch("phi_4", &phi_4, "phi_4/F");
    Run_Tree->Branch("eta_4", &eta_4, "eta_4/F");
    Run_Tree->Branch("m_4", &m_4, "m_4/F");
    Run_Tree->Branch("e_4", &e_4, "e_4/F");
    Run_Tree->Branch("q_4", &q_4, "q_4/F");
    Run_Tree->Branch("iso_4", &iso_4, "iso_4/F");
    Run_Tree->Branch("l4_decayMode", &l4_decayMode, "l4_decayMode/F");
    Run_Tree->Branch("deepVVVLooseVSjet_4", &deepVVVLooseVSjet_4, "deepVVVLooseVSjet_4/F");
    Run_Tree->Branch("deepVVLooseVSjet_4", &deepVVLooseVSjet_4, "deepVVLooseVSjet_4/F");
    Run_Tree->Branch("deepVLooseVSjet_4", &deepVLooseVSjet_4, "deepVLooseVSjet_4/F");
    Run_Tree->Branch("deepLooseVSjet_4", &deepLooseVSjet_4, "deepLooseVSjet_4/F");
    Run_Tree->Branch("deepMediumVSjet_4", &deepMediumVSjet_4, "deepMediumVSjet_4/F");
    Run_Tree->Branch("deepTightVSjet_4", &deepTightVSjet_4, "deepTightVSjet_4/F");
    Run_Tree->Branch("deepVTightVSjet_4", &deepVTightVSjet_4, "deepVTightVSjet_4/F");
    Run_Tree->Branch("deepVLooseVSmu_4", &deepVLooseVSmu_4, "deepVLooseVSmu_4/F");
    Run_Tree->Branch("deepLooseVSmu_4", &deepLooseVSmu_4, "deepLooseVSmu_4/F");
    Run_Tree->Branch("deepMediumVSmu_4", &deepMediumVSmu_4, "deepMediumVSmu_4/F");
    Run_Tree->Branch("deepTightVSmu_4", &deepTightVSmu_4, "deepTightVSmu_4/F");
    Run_Tree->Branch("deepVTightVSmu_4", &deepVTightVSmu_4, "deepVTightVSmu_4/F");
    Run_Tree->Branch("deepVVVLooseVSe_4", &deepVVVLooseVSe_4, "deepVVVLooseVSe_4/F");
    Run_Tree->Branch("deepVVLooseVSe_4", &deepVVLooseVSe_4, "deepVVLooseVSe_4/F");
    Run_Tree->Branch("deepVLooseVSe_4", &deepVLooseVSe_4, "deepVLooseVSe_4/F");
    Run_Tree->Branch("deepLooseVSe_4", &deepLooseVSe_4, "deepLooseVSe_4/F");
    Run_Tree->Branch("deepMediumVSe_4", &deepMediumVSe_4, "deepMediumVSe_4/F");
    Run_Tree->Branch("deepTightVSe_4", &deepTightVSe_4, "deepTightVSe_4/F");
    Run_Tree->Branch("deepVTightVSe_4", &deepVTightVSe_4, "deepVTightVSe_4/F");


    Run_Tree->Branch("numGenJets", &numGenJets, "numGenJets/F");
    Run_Tree->Branch("pt_top1", &pt_top1, "pt_top1/F");
    Run_Tree->Branch("pt_top2", &pt_top2, "pt_top2/F");
    Run_Tree->Branch("genweight", &genweight, "genweight/F");

    Run_Tree->Branch("gen_match_1", &gen_match_1, "gen_match_1/I");
    Run_Tree->Branch("gen_match_2", &gen_match_2, "gen_match_2/I");
    Run_Tree->Branch("gen_match_3", &gen_match_3, "gen_match_3/I");
    Run_Tree->Branch("gen_match_4", &gen_match_4, "gen_match_4/I");

    Run_Tree->Branch("nbtag", &nbtag, "nbtag/I");
    Run_Tree->Branch("nbtagL", &nbtagL, "nbtagL/I");
    Run_Tree->Branch("bweight", &bweight, "bweight/F");

    Run_Tree->Branch("channel", &channel, "channel/I");


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
        plotFill("pileup_mc",tree->nTruePU,80,0,80);
        TLorentzVector dau1;
        TLorentzVector dau2;
        TLorentzVector dau3;
        TLorentzVector dau4;
        dau1.SetPtEtaPhiM(tree->e1Pt,tree->e1Eta,tree->e1Phi,tree->e1Mass);
        dau2.SetPtEtaPhiM(tree->e2Pt,tree->e2Eta,tree->e2Phi,tree->e2Mass);
        dau3.SetPtEtaPhiM(tree->e3Pt,tree->e3Eta,tree->e3Phi,tree->e3Mass);
        dau4.SetPtEtaPhiM(tree->tPt,tree->tEta,tree->tPhi,tree->tMass);
/*if (tree->evt==278226 or tree->evt==595656 or tree->evt==551762 or tree->evt==365887) cout<<tree->evt<<endl;
if (tree->evt==278226 or tree->evt==595656 or tree->evt==551762 or tree->evt==365887) cout<<tree->e1Pt<<" "<<tree->e1Eta<<" "<<tree->e1Phi<<", iso: "<<tree->e1MVANoisoWP90<<" "<<tree->e1RelPFIsoRho<<endl;
if (tree->evt==278226 or tree->evt==595656 or tree->evt==551762 or tree->evt==365887) cout<<tree->e2Pt<<" "<<tree->e2Eta<<" "<<tree->e2Phi<<", iso: "<<tree->e2MVANoisoWP90<<" "<<tree->e2RelPFIsoRho<<endl;
if (tree->evt==278226 or tree->evt==595656 or tree->evt==551762 or tree->evt==365887) cout<<tree->e3Pt<<" "<<tree->e3Eta<<" "<<tree->e3Phi<<", iso: "<<tree->e3MVANoisoWP90<<" "<<tree->e3RelPFIsoRho<<endl;
if (tree->evt==278226 or tree->evt==595656 or tree->evt==551762 or tree->evt==365887) cout<<tree->tPt<<" "<<tree->tEta<<" "<<tree->tPhi<<endl;*/
        if (dau1.DeltaR(dau2)<0.3) continue;
        if (dau1.DeltaR(dau3)<0.3) continue;
        if (dau1.DeltaR(dau4)<0.5) continue;
        if (dau2.DeltaR(dau3)<0.3) continue;
        if (dau2.DeltaR(dau4)<0.5) continue;
        if (dau3.DeltaR(dau4)<0.5) continue;
	if (fabs(tree->e1PVDXY)>0.045) continue;
        if (fabs(tree->e1PVDZ)>0.2) continue;
        if (fabs(tree->e2PVDXY)>0.045) continue;
        if (fabs(tree->e2PVDZ)>0.2) continue;
        if (fabs(tree->e3PVDXY)>0.045) continue;
        if (fabs(tree->e3PVDZ)>0.2) continue;
        if (fabs(tree->tPVDZ)>0.2) continue;
        if ((dau1.Pt()<23.5 and dau2.Pt()<23.5 and dau3.Pt()<23.5) or dau1.Pt()<9.5 or dau2.Pt()<9.5 or dau3.Pt()<9.5 or dau4.Pt()<19.5) continue;
        if (fabs(dau1.Eta())>2.5 or fabs(dau2.Eta())>2.5 or fabs(dau3.Eta())>2.5 or fabs(dau4.Eta())>2.3) continue;
        bool eID1=tree->e1MVANoisoWP90;
        bool eID2=tree->e2MVANoisoWP90;
        bool eID3=tree->e3MVANoisoWP90;
        if (!(eID1 and eID2) and !(eID1 and eID3) and !(eID2 or eID3)) continue;
        if (!tree->e1PassesConversionVeto or tree->e1MissingHits>1 or !tree->e2PassesConversionVeto or tree->e2MissingHits>1 or !tree->e3PassesConversionVeto or tree->e3MissingHits>1) continue;
        if (tree->tDecayMode==5 or tree->tDecayMode==6) continue;
        if (!tree->tVVVLooseDeepTau2017v2p1VSjet) continue;
        if (!tree->tVLooseDeepTau2017v2p1VSmu) continue;
        if (!tree->tTightDeepTau2017v2p1VSe) continue;

	evt_now=tree->evt;
	if (tree->eVetoZTTp001dxyzR0>3) continue;
	if (tree->muVetoZTTp001dxyzR0>0) continue;
	if (evt_now!=evt_before){
	   lt_before=tree->e1Pt + tree->e2Pt + tree->e3Pt + tree->tPt;
	}
        if (evt_now!=evt_before){
           if (bestEntry>-1)
              fillTree(Run_Tree,tree,bestEntry,recoil,isMC,year);
           bestEntry=iEntry;
	}
	if (evt_now==evt_before){
	   if (tree->e1Pt + tree->e2Pt + tree->e3Pt + tree->tPt>lt_before+0.0001){
		bestEntry=iEntry;
	 	lt_before=tree->e1Pt + tree->e2Pt + tree->e3Pt + tree->tPt;
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

