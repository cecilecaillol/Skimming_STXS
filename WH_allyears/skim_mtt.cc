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
#include "mtt_Tree.h"
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

    TTree* treePtr = (TTree*) fIn->Get("mtt/final/Ntuple");
    TH1F *evCounter = (TH1F*) fIn->Get("mtt/eventCount");
    TH1F *evCounterW = (TH1F*) fIn->Get("mtt/summedWeights");
    HTauTauTree_mtt* tree = new HTauTauTree_mtt (treePtr);

    TTree *Run_Tree = new TTree("mtt_tree", "mtt_tree");
    Run_Tree->SetDirectory(0);
    Run_Tree->Branch("run", &run, "run/I");
    Run_Tree->Branch("lumi", &lumi, "lumi/I");
    Run_Tree->Branch("evt", &evt, "evt/I");

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
    Run_Tree->Branch("phi_1", &phi_1, "phi_1/F");
    Run_Tree->Branch("eta_1", &eta_1, "eta_1/F");
    Run_Tree->Branch("m_1", &m_1, "m_1/F");
    Run_Tree->Branch("e_1", &e_1, "e_1/F");
    Run_Tree->Branch("q_1", &q_1, "q_1/F");
    Run_Tree->Branch("iso_1", &iso_1, "iso_1/F");
    Run_Tree->Branch("id_m_medium_1", &id_m_medium_1, "id_m_medium_1/F");
    Run_Tree->Branch("pt_2", &pt_2, "pt_2/F");
    Run_Tree->Branch("phi_2", &phi_2, "phi_2/F");
    Run_Tree->Branch("eta_2", &eta_2, "eta_2/F");
    Run_Tree->Branch("m_2", &m_2, "m_2/F");
    Run_Tree->Branch("e_2", &e_2, "e_2/F");
    Run_Tree->Branch("q_2", &q_2, "q_2/F");
    Run_Tree->Branch("iso_2", &iso_2, "iso_2/F");
    Run_Tree->Branch("l2_decayMode", &l2_decayMode, "l2_decayMode/F");
    Run_Tree->Branch("deepVVVLooseVSjet_2", &deepVVVLooseVSjet_2, "deepVVVLooseVSjet_2/F");
    Run_Tree->Branch("deepVVLooseVSjet_2", &deepVVLooseVSjet_2, "deepVVLooseVSjet_2/F");
    Run_Tree->Branch("deepVLooseVSjet_2", &deepVLooseVSjet_2, "deepVLooseVSjet_2/F");
    Run_Tree->Branch("deepLooseVSjet_2", &deepLooseVSjet_2, "deepLooseVSjet_2/F");
    Run_Tree->Branch("deepMediumVSjet_2", &deepMediumVSjet_2, "deepMediumVSjet_2/F");
    Run_Tree->Branch("deepTightVSjet_2", &deepTightVSjet_2, "deepTightVSjet_2/F");
    Run_Tree->Branch("deepVTightVSjet_2", &deepVTightVSjet_2, "deepVTightVSjet_2/F");
    Run_Tree->Branch("deepVLooseVSmu_2", &deepVLooseVSmu_2, "deepVLooseVSmu_2/F");
    Run_Tree->Branch("deepLooseVSmu_2", &deepLooseVSmu_2, "deepLooseVSmu_2/F");
    Run_Tree->Branch("deepMediumVSmu_2", &deepMediumVSmu_2, "deepMediumVSmu_2/F");
    Run_Tree->Branch("deepTightVSmu_2", &deepTightVSmu_2, "deepTightVSmu_2/F");
    Run_Tree->Branch("deepVTightVSmu_2", &deepVTightVSmu_2, "deepVTightVSmu_2/F");
    Run_Tree->Branch("deepVVVLooseVSe_2", &deepVVVLooseVSe_2, "deepVVVLooseVSe_2/F");
    Run_Tree->Branch("deepVVLooseVSe_2", &deepVVLooseVSe_2, "deepVVLooseVSe_2/F");
    Run_Tree->Branch("deepVLooseVSe_2", &deepVLooseVSe_2, "deepVLooseVSe_2/F");
    Run_Tree->Branch("deepLooseVSe_2", &deepLooseVSe_2, "deepLooseVSe_2/F");
    Run_Tree->Branch("deepMediumVSe_2", &deepMediumVSe_2, "deepMediumVSe_2/F");
    Run_Tree->Branch("deepTightVSe_2", &deepTightVSe_2, "deepTightVSe_2/F");
    Run_Tree->Branch("deepVTightVSe_2", &deepVTightVSe_2, "deepVTightVSe_2/F");

    Run_Tree->Branch("genpX", &genpX, "genpX/F");
    Run_Tree->Branch("genpY", &genpY, "genpY/F");
    Run_Tree->Branch("genpT", &genpT, "genpT/F");
    Run_Tree->Branch("genM", &genM, "genM/F");
    Run_Tree->Branch("vispX", &vispX, "vispX/F");
    Run_Tree->Branch("vispY", &vispY, "vispY/F");

    Run_Tree->Branch("passMu24", &passMu24, "passMu24/F");
    Run_Tree->Branch("matchMu24_1", &matchMu24_1, "matchMu24_1/F");
    Run_Tree->Branch("filterMu24_1", &filterMu24_1, "filterMu24_1/F");
    Run_Tree->Branch("passMu27", &passMu27, "passMu27/F");
    Run_Tree->Branch("matchMu27_1", &matchMu27_1, "matchMu27_1/F");
    Run_Tree->Branch("filterMu27_1", &filterMu27_1, "filterMu27_1/F");
    Run_Tree->Branch("passMu20Tau27", &passMu20Tau27, "passMu20Tau27/F");
    Run_Tree->Branch("matchMu20Tau27_1", &matchMu20Tau27_1, "matchMu20Tau27_1/F");
    Run_Tree->Branch("filterMu20Tau27_1", &filterMu20Tau27_1, "filterMu20Tau27_1/F");
    Run_Tree->Branch("matchMu20Tau27_2", &matchMu20Tau27_2, "matchMu20Tau27_2/F");
    Run_Tree->Branch("filterMu20Tau27_2", &filterMu20Tau27_2, "filterMu20Tau27_2/F");
    Run_Tree->Branch("matchMu20Tau27_3", &matchMu20Tau27_3, "matchMu20Tau27_3/F");
    Run_Tree->Branch("filterMu20Tau27_3", &filterMu20Tau27_3, "filterMu20Tau27_3/F");
    Run_Tree->Branch("passMu20HPSTau27", &passMu20HPSTau27, "passMu20HPSTau27/F");
    Run_Tree->Branch("matchMu20HPSTau27_1", &matchMu20HPSTau27_1, "matchMu20HPSTau27_1/F");
    Run_Tree->Branch("filterMu20HPSTau27_1", &filterMu20HPSTau27_1, "filterMu20HPSTau27_1/F");
    Run_Tree->Branch("matchMu20HPSTau27_2", &matchMu20HPSTau27_2, "matchMu20HPSTau27_2/F");
    Run_Tree->Branch("filterMu20HPSTau27_2", &filterMu20HPSTau27_2, "filterMu20HPSTau27_2/F");
    Run_Tree->Branch("matchMu20HPSTau27_3", &matchMu20HPSTau27_3, "matchMu20HPSTau27_3/F");
    Run_Tree->Branch("filterMu20HPSTau27_3", &filterMu20HPSTau27_3, "filterMu20HPSTau27_3/F");
    Run_Tree->Branch("passMu22eta2p1", &passMu22eta2p1, "passMu22eta2p1/F");
    Run_Tree->Branch("passTkMu22eta2p1", &passTkMu22eta2p1, "passTkMu22eta2p1/F");
    Run_Tree->Branch("passMu22", &passMu22, "passMu22/F");
    Run_Tree->Branch("passTkMu22", &passTkMu22, "passTkMu22/F");
    Run_Tree->Branch("passMu19Tau20", &passMu19Tau20, "passMu19Tau20/F");
    Run_Tree->Branch("passMu19Tau20SingleL1", &passMu19Tau20SingleL1, "passMu19Tau20SingleL1/F");
    Run_Tree->Branch("matchMu22eta2p1_1", &matchMu22eta2p1_1, "matchMu22eta2p1_1/F");
    Run_Tree->Branch("matchTkMu22eta2p1_1", &matchTkMu22eta2p1_1, "matchTkMu22eta2p1_1/F");
    Run_Tree->Branch("matchMu22_1", &matchMu22_1, "matchMu22_1/F");
    Run_Tree->Branch("matchTkMu22_1", &matchTkMu22_1, "matchTkMu22_1/F");
    Run_Tree->Branch("matchMu19Tau20_1", &matchMu19Tau20_1, "matchMu19Tau20_1/F");
    Run_Tree->Branch("matchMu19Tau20_2", &matchMu19Tau20_2, "matchMu19Tau20_2/F");
    Run_Tree->Branch("matchMu19Tau20_3", &matchMu19Tau20_3, "matchMu19Tau20_3/F");
    Run_Tree->Branch("matchMu19Tau20SingleL1_1", &matchMu19Tau20SingleL1_1, "matchMu19Tau20SingleL1_1/F");
    Run_Tree->Branch("matchMu19Tau20SingleL1_2", &matchMu19Tau20SingleL1_2, "matchMu19Tau20SingleL1_2/F");
    Run_Tree->Branch("matchMu19Tau20SingleL1_3", &matchMu19Tau20SingleL1_3, "matchMu19Tau20SingleL1_3/F");
    Run_Tree->Branch("filterMu22eta2p1_1", &filterMu22eta2p1_1, "filterMu22eta2p1_1/F");
    Run_Tree->Branch("filterTkMu22eta2p1_1", &filterTkMu22eta2p1_1, "filterTkMu22eta2p1_1/F");
    Run_Tree->Branch("filterMu22_1", &filterMu22_1, "filterMu22_1/F");
    Run_Tree->Branch("filterTkMu22_1", &filterTkMu22_1, "filterTkMu22_1/F");
    Run_Tree->Branch("filterMu19Tau20_1", &filterMu19Tau20_1, "filterMu19Tau20_1/F");
    Run_Tree->Branch("filterMu19Tau20_2", &filterMu19Tau20_2, "filterMu19Tau20_2/F");
    Run_Tree->Branch("filterMu19Tau20_3", &filterMu19Tau20_3, "filterMu19Tau20_3/F");
    Run_Tree->Branch("filterMu19Tau20SingleL1_1", &filterMu19Tau20SingleL1_1, "filterMu19Tau20SingleL1_1/F");
    Run_Tree->Branch("filterMu19Tau20SingleL1_3", &filterMu19Tau20SingleL1_3, "filterMu19Tau20SingleL1_3/F");
    Run_Tree->Branch("filterMu19Tau20SingleL1_2", &filterMu19Tau20SingleL1_2, "filterMu19Tau20SingleL1_2/F");


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


    Run_Tree->Branch("pt_3", &pt_3, "pt_3/F");
    Run_Tree->Branch("phi_3", &phi_3, "phi_3/F");
    Run_Tree->Branch("eta_3", &eta_3, "eta_3/F");
    Run_Tree->Branch("m_3", &m_3, "m_3/F");
    Run_Tree->Branch("e_3", &e_3, "e_3/F");
    Run_Tree->Branch("q_3", &q_3, "q_3/F");
    Run_Tree->Branch("iso_3", &iso_3, "iso_3/F");
    Run_Tree->Branch("l3_decayMode", &l3_decayMode, "l3_decayMode/F");
    Run_Tree->Branch("deepVVVLooseVSjet_3", &deepVVVLooseVSjet_3, "deepVVVLooseVSjet_3/F");
    Run_Tree->Branch("deepVVLooseVSjet_3", &deepVVLooseVSjet_3, "deepVVLooseVSjet_3/F");
    Run_Tree->Branch("deepVLooseVSjet_3", &deepVLooseVSjet_3, "deepVLooseVSjet_3/F");
    Run_Tree->Branch("deepLooseVSjet_3", &deepLooseVSjet_3, "deepLooseVSjet_3/F");
    Run_Tree->Branch("deepMediumVSjet_3", &deepMediumVSjet_3, "deepMediumVSjet_3/F");
    Run_Tree->Branch("deepTightVSjet_3", &deepTightVSjet_3, "deepTightVSjet_3/F");
    Run_Tree->Branch("deepVTightVSjet_3", &deepVTightVSjet_3, "deepVTightVSjet_3/F");
    Run_Tree->Branch("deepVLooseVSmu_3", &deepVLooseVSmu_3, "deepVLooseVSmu_3/F");
    Run_Tree->Branch("deepLooseVSmu_3", &deepLooseVSmu_3, "deepLooseVSmu_3/F");
    Run_Tree->Branch("deepMediumVSmu_3", &deepMediumVSmu_3, "deepMediumVSmu_3/F");
    Run_Tree->Branch("deepTightVSmu_3", &deepTightVSmu_3, "deepTightVSmu_3/F");
    Run_Tree->Branch("deepVTightVSmu_3", &deepVTightVSmu_3, "deepVTightVSmu_3/F");
    Run_Tree->Branch("deepVVVLooseVSe_3", &deepVVVLooseVSe_3, "deepVVVLooseVSe_3/F");
    Run_Tree->Branch("deepVVLooseVSe_3", &deepVVLooseVSe_3, "deepVVLooseVSe_3/F");
    Run_Tree->Branch("deepVLooseVSe_3", &deepVLooseVSe_3, "deepVLooseVSe_3/F");
    Run_Tree->Branch("deepLooseVSe_3", &deepLooseVSe_3, "deepLooseVSe_3/F");
    Run_Tree->Branch("deepMediumVSe_3", &deepMediumVSe_3, "deepMediumVSe_3/F");
    Run_Tree->Branch("deepTightVSe_3", &deepTightVSe_3, "deepTightVSe_3/F");
    Run_Tree->Branch("deepVTightVSe_3", &deepVTightVSe_3, "deepVTightVSe_3/F");


    Run_Tree->Branch("numGenJets", &numGenJets, "numGenJets/F");
    Run_Tree->Branch("pt_top1", &pt_top1, "pt_top1/F");
    Run_Tree->Branch("pt_top2", &pt_top2, "pt_top2/F");
    Run_Tree->Branch("genweight", &genweight, "genweight/F");

    Run_Tree->Branch("gen_match_1", &gen_match_1, "gen_match_1/I");
    Run_Tree->Branch("gen_match_2", &gen_match_2, "gen_match_2/I");
    Run_Tree->Branch("gen_match_3", &gen_match_3, "gen_match_3/I");

    Run_Tree->Branch("nbtag", &nbtag, "nbtag/I");
    Run_Tree->Branch("nbtagL", &nbtagL, "nbtagL/I");
    Run_Tree->Branch("bweight", &bweight, "bweight/F");

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
        plotFill("pileup_mc",tree->nTruePU,80,0,80);
        TLorentzVector dau1;
        TLorentzVector dau2;
        TLorentzVector dau3;
        dau1.SetPtEtaPhiM(tree->mPt,tree->mEta,tree->mPhi,tree->mMass);
        dau2.SetPtEtaPhiM(tree->t1Pt,tree->t1Eta,tree->t1Phi,tree->t1Mass);
        dau3.SetPtEtaPhiM(tree->t2Pt,tree->t2Eta,tree->t2Phi,tree->t2Mass);
        if (isMC && tree->t2DecayMode==0) dau3=dau3*0.982;
        else if (isMC && tree->t2DecayMode==1) dau3=dau3*1.010;
        else if (isMC && tree->t2DecayMode==10) dau3=dau3*1.004;
        else if (isMC && tree->t2DecayMode==11) dau3=dau3*1.004;
        if (isMC && tree->t1DecayMode==0) dau2=dau2*0.982;
        else if (isMC && tree->t1DecayMode==1) dau2=dau2*1.010;
        else if (isMC && tree->t1DecayMode==10) dau2=dau2*1.004;
        else if (isMC && tree->t1DecayMode==11) dau2=dau2*1.004;
        if (dau1.DeltaR(dau2)<0.5) continue;
        if (dau1.DeltaR(dau3)<0.5) continue;
        if (dau2.DeltaR(dau3)<0.5) continue;
	if (fabs(tree->mPVDXY)>0.045) continue;
        if (fabs(tree->mPVDZ)>0.2) continue;
        if (fabs(tree->t1PVDZ)>0.2) continue;
        if (fabs(tree->t2PVDZ)>0.2) continue;
        if (dau1.Pt()<19.5 or dau2.Pt()<19.5 or dau3.Pt()<19.5) continue;//FIXME
        if (fabs(dau1.Eta())>2.1 or fabs(dau2.Eta())>2.3 or fabs(dau3.Eta())>2.3) continue;
        if (tree->t1DecayMode==5 or tree->t1DecayMode==6) continue;
        if (tree->t2DecayMode==5 or tree->t2DecayMode==6) continue;
        if (!tree->t1VVVLooseDeepTau2017v2p1VSjet) continue;
        if (!tree->t1VLooseDeepTau2017v2p1VSmu) continue;
        if (!tree->t1VVVLooseDeepTau2017v2p1VSe) continue;
        if (!tree->t2VVVLooseDeepTau2017v2p1VSjet) continue;
        if (!tree->t2VLooseDeepTau2017v2p1VSmu) continue;
        if (!tree->t2VVVLooseDeepTau2017v2p1VSe) continue;
	evt_now=tree->evt;
	if (tree->eVetoZTTp001dxyzR0>0) continue;//FIXME
	if (tree->muVetoZTTp001dxyzR0>1) continue;//FIXME
	if (evt_now!=evt_before){
	   lt_before=tree->mPt + tree->t1Pt + tree->t2Pt;
	}
        if (evt_now!=evt_before){
           if (bestEntry>-1)
              fillTree(Run_Tree,tree,bestEntry,recoil,isMC,year);
           bestEntry=iEntry;
	}
	if (evt_now==evt_before){
	   if (tree->mPt + tree->t1Pt + tree->t2Pt>lt_before+0.0001){
		bestEntry=iEntry;
	 	lt_before=tree->mPt + tree->t1Pt + tree->t2Pt;
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

