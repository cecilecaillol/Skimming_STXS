#ifndef THTH_TREE_H
#define	THTH_TREE_H

#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <utility>
#include <map>
#include <string>
#include "TTree.h"
#include "TFile.h"
#include "TSystem.h"
#include "HTauTauTree_em.h"
#include "RecoilCorrector.h"
#include "MEtSys.h"

using namespace std;
float lheweight_muR0p5_muF0p5,lheweight_muR0p5_muF1,lheweight_muR0p5_muF2,lheweight_muR1_muF0p5,lheweight_muR1_muF2,lheweight_muR2_muF0p5,lheweight_muR2_muF1,lheweight_muR2_muF2,PythiaWeight_fsr_muR0p25,PythiaWeight_fsr_muR0p5,PythiaWeight_fsr_muR2,PythiaWeight_fsr_muR4,PythiaWeight_isr_muR0p25,PythiaWeight_isr_muR0p5,PythiaWeight_isr_muR2,PythiaWeight_isr_muR4;
float gentau1_eta, gentau1_pt, gentau2_eta, gentau2_pt;
float gen_met_pt, gen_met_phi, gen_ele_pt, gen_ele_eta, gen_ele_phi, gen_mu_pt, gen_mu_eta, gen_mu_phi, HTTgenfinalstate;
float pt_1_ScaleUp, pt_1_ScaleDown, pt_1_SigmaUp, pt_1_SigmaDown;
float met_responseUp, met_responseDown, met_resolutionUp, met_resolutionDown;
float metphi_responseUp, metphi_responseDown, metphi_resolutionUp, metphi_resolutionDown;
float met_JetAbsoluteUp, met_JetAbsoluteDown, metphi_JetAbsoluteUp, metphi_JetAbsoluteDown;
float met_JetAbsoluteyearUp, met_JetAbsoluteyearDown, metphi_JetAbsoluteyearUp, metphi_JetAbsoluteyearDown;
float met_JetBBEC1Up, met_JetBBEC1Down, metphi_JetBBEC1Up, metphi_JetBBEC1Down;
float met_JetBBEC1yearUp, met_JetBBEC1yearDown, metphi_JetBBEC1yearUp, metphi_JetBBEC1yearDown;
float met_JetEC2Up, met_JetEC2Down, metphi_JetEC2Up, metphi_JetEC2Down;
float met_JetEC2yearUp, met_JetEC2yearDown, metphi_JetEC2yearUp, metphi_JetEC2yearDown;
float met_JetFlavorQCDUp, met_JetFlavorQCDDown, metphi_JetFlavorQCDUp, metphi_JetFlavorQCDDown;
float met_JetHFUp, met_JetHFDown, metphi_JetHFUp, metphi_JetHFDown;
float met_JetHFyearUp, met_JetHFyearDown, metphi_JetHFyearUp, metphi_JetHFyearDown;
float met_JetRelativeBalUp, met_JetRelativeBalDown, metphi_JetRelativeBalUp, metphi_JetRelativeBalDown;
float met_JetRelativeSampleUp, met_JetRelativeSampleDown, metphi_JetRelativeSampleUp, metphi_JetRelativeSampleDown;
float met_JERUp, met_JERDown, metphi_JERUp, metphi_JERDown;
float mjj_JetAbsoluteUp, mjj_JetAbsoluteyearUp, mjj_JetBBEC1Up, mjj_JetBBEC1yearUp, mjj_JetEC2Up, mjj_JetEC2yearUp, mjj_JetFlavorQCDUp, mjj_JetHFUp, mjj_JetHFyearUp, mjj_JetRelativeBalUp, mjj_JetRelativeSampleUp, mjj_JERUp;
float mjj_JetAbsoluteDown, mjj_JetAbsoluteyearDown, mjj_JetBBEC1Down, mjj_JetBBEC1yearDown, mjj_JetEC2Down, mjj_JetEC2yearDown, mjj_JetFlavorQCDDown, mjj_JetHFDown, mjj_JetHFyearDown, mjj_JetRelativeBalDown, mjj_JetRelativeSampleDown, mjj_JERDown;
float jpt_1_JetAbsoluteUp, jpt_1_JetAbsoluteyearUp, jpt_1_JetBBEC1Up, jpt_1_JetBBEC1yearUp, jpt_1_JetEC2Up, jpt_1_JetEC2yearUp, jpt_1_JetFlavorQCDUp, jpt_1_JetHFUp, jpt_1_JetHFyearUp, jpt_1_JetRelativeBalUp, jpt_1_JetRelativeSampleUp, jpt_1_JERUp;
float jpt_1_JetAbsoluteDown, jpt_1_JetAbsoluteyearDown, jpt_1_JetBBEC1Down, jpt_1_JetBBEC1yearDown, jpt_1_JetEC2Down, jpt_1_JetEC2yearDown, jpt_1_JetFlavorQCDDown, jpt_1_JetHFDown, jpt_1_JetHFyearDown, jpt_1_JetRelativeBalDown, jpt_1_JetRelativeSampleDown, jpt_1_JERDown;
int njets_JetAbsoluteUp, njets_JetAbsoluteyearUp, njets_JetBBEC1Up, njets_JetBBEC1yearUp, njets_JetEC2Up, njets_JetEC2yearUp, njets_JetFlavorQCDUp, njets_JetHFUp, njets_JetHFyearUp, njets_JetRelativeBalUp, njets_JetRelativeSampleUp, njets_JERUp;
int njets_JetAbsoluteDown, njets_JetAbsoluteyearDown, njets_JetBBEC1Down, njets_JetBBEC1yearDown, njets_JetEC2Down, njets_JetEC2yearDown, njets_JetFlavorQCDDown, njets_JetHFDown, njets_JetHFyearDown, njets_JetRelativeBalDown, njets_JetRelativeSampleDown, njets_JERDown;

float byTightDPF_2,byVVVLooseDeepVSjet_2,byVVLooseDeepVSjet_2,byVLooseDeepVSjet_2,byLooseDeepVSjet_2,byMediumDeepVSjet_2,byTightDeepVSjet_2,byVTightDeepVSjet_2,byVVTightDeepVSjet_2;
float byVVVLooseDeepVSmu_2,byVVLooseDeepVSmu_2,byVLooseDeepVSmu_2,byLooseDeepVSmu_2,byMediumDeepVSmu_2,byTightDeepVSmu_2,byVTightDeepVSmu_2,byVVTightDeepVSmu_2;
float byVVVLooseDeepVSe_2,byVVLooseDeepVSe_2,byVLooseDeepVSe_2,byLooseDeepVSe_2,byMediumDeepVSe_2,byTightDeepVSe_2,byVTightDeepVSe_2,byVVTightDeepVSe_2;
int njets, nbtag, nbtagL;
float mjj;
float passMu8E23, passMu23E12;
float matchMu8E23_1, matchMu23E12_1, filterMu8E23_1, filterMu23E12_1;
float matchMu8E23_2, matchMu23E12_2, filterMu8E23_2, filterMu23E12_2;
float byVVLooseIsolationMVArun2v2DBoldDMwLT_2, byVLooseIsolationMVArun2v2DBoldDMwLT_2, byLooseIsolationMVArun2v2DBoldDMwLT_2, byMediumIsolationMVArun2v2DBoldDMwLT_2, byTightIsolationMVArun2v2DBoldDMwLT_2, byVTightIsolationMVArun2v2DBoldDMwLT_2, byVVTightIsolationMVArun2v2DBoldDMwLT_2, byIsolationMVArun2v2DBoldDMwLTraw_2, byIsolationMVA3oldDMwLTraw_2;
float Rivet_VEta,Rivet_VPt,Rivet_errorCode,Rivet_higgsEta,Rivet_higgsPt,Rivet_nJets25,Rivet_nJets30,Rivet_p4decay_VEta,Rivet_p4decay_VPt,Rivet_prodMode,Rivet_stage0_cat,Rivet_stage1_1_cat_pTjet30GeV,Rivet_stage1_1_fine_cat_pTjet30GeV, Rivet_stage1_cat_pTjet30GeV,Rivet_higgsRapidity,Rivet_j1pt,Rivet_j1eta,Rivet_j1phi,Rivet_j1m,Rivet_j2pt,Rivet_j2eta,Rivet_j2phi,Rivet_j2m;
unsigned int run, lumi, evt, NUP = -10;
int gen_match_1, gen_match_2=0;
float npu, rho, npv=-1, puweight, weight, numGenJets,jetPt_2;
float e_1, px_1, py_1, pz_1, pt_1, phi_1, eta_1, m_1, q_1, d0_1, dZ_1, mt_1, iso_1, l1_decayMode, isoDB_1;
float e_2, px_2, py_2, pz_2, pt_2, phi_2, eta_2, m_2, q_2, d0_2, dZ_2, mt_2, iso_2, l2_decayMode;
float je_1, jmass_1, jpt_1, jpx_1, jpy_1, jpz_1, jeta_1, jphi_1, jrawf_1, jmva_1, jpfid_1, jpuid_1, jcsv_1;
float je_2, jmass_2, jpx_2, jpy_2, jpz_2, jpt_2, jeta_2, jphi_2, jrawf_2, jmva_2, jpfid_2, jpuid_2, jcsv_2;
float bpt_1, beta_1, bphi_1, brawf_1, bmva_1, bpfid_1, bpuid_1, bflavor_1;
float bpt_2, beta_2, bphi_2, brawf_2, bmva_2, bpfid_2, bpuid_2, bflavor_2;
float met, metphi, metcov00,metcov01,metcov10,metcov11;
float met_UESDown, met_UESUp, metphi_UESDown, metphi_UESUp;
float top_reweighting, gen_Higgs_pt, gen_Higgs_mass=1.0;
float extraelec_veto, extramuon_veto, dilepton_veto=false;
float met_px, met_py,genpX,genpY,vispX,vispY,metSig,genpT,genM;
float pt_top1, pt_top2, genweight, bweight;
float decayModeFinding_2, againstElectronTightMVA6_2, againstElectronVTightMVA6_2, againstElectronVLooseMVA6_2, againstElectronMediumMVA6_2, againstElectronLooseMVA6_2, againstMuonLoose3_2, againstMuonTight3_2;
float Flag_BadChargedCandidateFilter, Flag_BadPFMuonFilter, Flag_EcalDeadCellTriggerPrimitiveFilter, Flag_HBHENoiseFilter, Flag_HBHENoiseIsoFilter, Flag_badCloneMuon, Flag_badGlobalMuon, Flag_eeBadScFilter, Flag_globalTightHalo2016Filter, Flag_goodVertices, Flag_globalSuperTightHalo2016Filter, Flag_badMuons, Flag_duplicateMuons, Flag_ecalBadCalibFilter, Flag_ecalBadCalibReducedMINIAODFilter;
float genpt_1, genpt_2, geneta_1, geneta_2;

RecoilCorrector recoilPFMetCorrector("SMH_et_2016/HTT-utilities/RecoilCorrections/data/TypeI-PFMet_Run2018.root");
MEtSys metSys("SMH_et_2016/HTT-utilities/RecoilCorrections/data/PFMEtSys_2017.root");

void fillTree(TTree *Run_Tree, HTauTauTree_em *tree, int entry_tree, int recoil, bool ismc, bool isembedded){
    tree->GetEntry(entry_tree);

    gen_mu_pt=tree->dressedMuon_pt;
    gen_mu_eta=tree->mGenEta;
    gen_mu_phi=tree->mGenPhi;
    gen_ele_pt=tree->dressedElectron_pt;
    gen_ele_eta=tree->eGenEta;
    gen_ele_phi=tree->eGenPhi; 
    HTTgenfinalstate=tree->HTTgenfinalstate;
    gen_met_pt=tree->genMetPt;
    gen_met_phi=tree->genMetPhi;

    run = tree->run;
    lumi = tree->lumi;
    evt =tree->evt;
    genweight = tree->GenWeight;
    bweight=tree->bweight_2018;

    lheweight_muR0p5_muF0p5=tree->lheweight_muR0p5_muF0p5;
    lheweight_muR0p5_muF1=tree->lheweight_muR0p5_muF1;
    lheweight_muR0p5_muF2=tree->lheweight_muR0p5_muF2;
    lheweight_muR1_muF0p5=tree->lheweight_muR1_muF0p5;
    lheweight_muR1_muF2=tree->lheweight_muR1_muF2;
    lheweight_muR2_muF0p5=tree->lheweight_muR2_muF0p5;
    lheweight_muR2_muF1=tree->lheweight_muR2_muF1;
    lheweight_muR2_muF2=tree->lheweight_muR2_muF2;
    PythiaWeight_fsr_muR0p25=tree->PythiaWeight_fsr_muR0p25;
    PythiaWeight_fsr_muR0p5=tree->PythiaWeight_fsr_muR0p5;
    PythiaWeight_fsr_muR2=tree->PythiaWeight_fsr_muR2;
    PythiaWeight_fsr_muR4=tree->PythiaWeight_fsr_muR4;
    PythiaWeight_isr_muR0p25=tree->PythiaWeight_isr_muR0p25;
    PythiaWeight_isr_muR0p5=tree->PythiaWeight_isr_muR0p5;
    PythiaWeight_isr_muR2=tree->PythiaWeight_isr_muR2;
    PythiaWeight_isr_muR4=tree->PythiaWeight_isr_muR4;

    geneta_1=tree->eGenEta;
    geneta_2=tree->mGenEta;
    genpt_1=tree->eGenPt;
    genpt_2=tree->mGenPt;

    passMu8E23=tree->mu8e23DZPass;
    passMu23E12=tree->mu23e12DZPass;
    matchMu8E23_1=tree->eMatchesMu8e23DZPath;
    matchMu23E12_1=tree->eMatchesMu23e12DZPath;
    filterMu8E23_1=tree->eMatchesMu8e23DZFilter;
    filterMu23E12_1=tree->eMatchesMu23e12DZFilter;
    matchMu8E23_2=tree->mMatchesMu8e23DZPath;
    matchMu23E12_2=tree->mMatchesMu23e12DZPath;
    filterMu8E23_2=tree->mMatchesMu8e23DZFilter;
    filterMu23E12_2=tree->mMatchesMu23e12DZFilter;

    Rivet_VEta=tree->Rivet_VEta;
    Rivet_VPt=tree->Rivet_VPt;
    Rivet_errorCode=tree->Rivet_errorCode;
    Rivet_higgsEta=tree->Rivet_higgsEta;
    Rivet_higgsPt=tree->Rivet_higgsPt;
    Rivet_nJets25=tree->Rivet_nJets25;
    Rivet_nJets30=tree->Rivet_nJets30;
    Rivet_p4decay_VEta=tree->Rivet_p4decay_VEta;
    Rivet_p4decay_VPt=tree->Rivet_p4decay_VPt;
    Rivet_prodMode=tree->Rivet_prodMode;
    Rivet_stage0_cat=tree->Rivet_stage0_cat;
    Rivet_stage1_1_fine_cat_pTjet30GeV=tree->Rivet_stage1_1_fine_cat_pTjet30GeV;
    Rivet_stage1_1_cat_pTjet30GeV=tree->Rivet_stage1_1_cat_pTjet30GeV;
    Rivet_stage1_cat_pTjet30GeV=tree->Rivet_stage1_cat_pTjet30GeV;
    Rivet_j1pt=tree->Rivet_j1pt;
    Rivet_j2pt=tree->Rivet_j2pt;
    Rivet_j1eta=tree->Rivet_j1eta;
    Rivet_j2eta=tree->Rivet_j2eta;
    Rivet_j1phi=tree->Rivet_j1phi;
    Rivet_j2phi=tree->Rivet_j2phi;
    Rivet_j1m=tree->Rivet_j1m;
    Rivet_j2m=tree->Rivet_j2m;
    Rivet_higgsRapidity=tree->Rivet_higgsRapidity;
    gentau2_pt=tree->gentau2_pt;
    gentau1_pt=tree->gentau1_pt;
    gentau2_eta=tree->gentau2_eta;
    gentau1_eta=tree->gentau1_eta;

    genpX=tree->genpX;
    genpY=tree->genpY;
    vispX=tree->vispX;
    vispY=tree->vispY;
    genpT=tree->genpT;
    genM=tree->genM;


    Flag_BadChargedCandidateFilter = tree->Flag_BadChargedCandidateFilter;
    Flag_BadPFMuonFilter = tree->Flag_BadPFMuonFilter;
    Flag_EcalDeadCellTriggerPrimitiveFilter = tree->Flag_EcalDeadCellTriggerPrimitiveFilter;
    Flag_HBHENoiseFilter = tree->Flag_HBHENoiseFilter;
    Flag_HBHENoiseIsoFilter = tree->Flag_HBHENoiseIsoFilter;
    Flag_badMuons = tree->Flag_badMuons;
    Flag_duplicateMuons = tree->Flag_duplicateMuons;
    Flag_ecalBadCalibFilter = tree->Flag_ecalBadCalibFilter;
    Flag_ecalBadCalibReducedMINIAODFilter = tree->Flag_ecalBadCalibReducedMINIAODFilter;
    Flag_eeBadScFilter = tree->Flag_eeBadScFilter;
    Flag_globalSuperTightHalo2016Filter = tree->Flag_globalSuperTightHalo2016Filter;
    Flag_globalTightHalo2016Filter = tree->Flag_globalTightHalo2016Filter;
    Flag_goodVertices = tree->Flag_goodVertices;

    metSig=tree->metSig;
    metcov00=tree->metcov00;
    metcov01=tree->metcov01;
    metcov10=tree->metcov10;
    metcov11=tree->metcov11;

    numGenJets=tree->numGenJets;

    gen_Higgs_pt=tree->genpT;
    gen_Higgs_mass=tree->genM;

    pt_top1=tree->topQuarkPt1;
    pt_top2=tree->topQuarkPt2;

    weight=tree->GenWeight;

    njets = tree->jetVeto30;
    nbtag = tree->bjetDeepCSVVeto20Medium_2018_DR0p5;
    nbtagL = tree->bjetDeepCSVVeto20Loose_2018_DR0p5;
    njets_JetAbsoluteUp = tree->jetVeto30_JetAbsoluteUp;
    njets_JetAbsoluteDown = tree->jetVeto30_JetAbsoluteDown;
    njets_JetAbsoluteyearUp = tree->jetVeto30_JetAbsoluteyearUp;
    njets_JetAbsoluteyearDown = tree->jetVeto30_JetAbsoluteyearDown;
    njets_JetBBEC1Up = tree->jetVeto30_JetBBEC1Up;
    njets_JetBBEC1Down = tree->jetVeto30_JetBBEC1Down;
    njets_JetBBEC1yearUp = tree->jetVeto30_JetBBEC1yearUp;
    njets_JetBBEC1yearDown = tree->jetVeto30_JetBBEC1yearDown;
    njets_JetEC2Up = tree->jetVeto30_JetEC2Up;
    njets_JetEC2Down = tree->jetVeto30_JetEC2Down;
    njets_JetEC2yearUp = tree->jetVeto30_JetEC2yearUp;
    njets_JetEC2yearDown = tree->jetVeto30_JetEC2yearDown;
    njets_JetFlavorQCDUp = tree->jetVeto30_JetFlavorQCDUp;
    njets_JetFlavorQCDDown = tree->jetVeto30_JetFlavorQCDDown;
    njets_JetHFUp = tree->jetVeto30_JetHFUp;
    njets_JetHFDown = tree->jetVeto30_JetHFDown;
    njets_JetHFyearUp = tree->jetVeto30_JetHFyearUp;
    njets_JetHFyearDown = tree->jetVeto30_JetHFyearDown;
    njets_JetRelativeBalUp = tree->jetVeto30_JetRelativeBalUp;
    njets_JetRelativeBalDown = tree->jetVeto30_JetRelativeBalDown;
    njets_JetRelativeSampleUp = tree->jetVeto30_JetRelativeSampleUp;
    njets_JetRelativeSampleDown = tree->jetVeto30_JetRelativeSampleDown;
    njets_JERUp = tree->jetVeto30_JERUp;
    njets_JERDown = tree->jetVeto30_JERDown;

    gen_match_1=tree->eZTTGenMatching;
    gen_match_2=tree->mZTTGenMatching;

    TLorentzVector tau1;
    TLorentzVector tau2;
    tau1.SetPtEtaPhiM(tree->ePt,tree->eEta,tree->ePhi,tree->eMass);
    tau2.SetPtEtaPhiM(tree->mPt,tree->mEta,tree->mPhi,tree->mMass);

    TLorentzVector mymetvector[27];
    mymetvector[0].SetPtEtaPhiM(tree->type1_pfMetEt,0,tree->type1_pfMetPhi,0);
    mymetvector[1].SetPtEtaPhiM(tree->type1_pfMet_shiftedPt_JetAbsoluteUp,0,tree->type1_pfMet_shiftedPhi_JetAbsoluteUp,0);
    mymetvector[2].SetPtEtaPhiM(tree->type1_pfMet_shiftedPt_JetAbsoluteDown,0,tree->type1_pfMet_shiftedPhi_JetAbsoluteDown,0);
    mymetvector[3].SetPtEtaPhiM(tree->type1_pfMet_shiftedPt_JetAbsoluteyearUp,0,tree->type1_pfMet_shiftedPhi_JetAbsoluteyearUp,0);
    mymetvector[4].SetPtEtaPhiM(tree->type1_pfMet_shiftedPt_JetAbsoluteyearDown,0,tree->type1_pfMet_shiftedPhi_JetAbsoluteyearDown,0);
    mymetvector[5].SetPtEtaPhiM(tree->type1_pfMet_shiftedPt_JetBBEC1Up,0,tree->type1_pfMet_shiftedPhi_JetBBEC1Up,0);
    mymetvector[6].SetPtEtaPhiM(tree->type1_pfMet_shiftedPt_JetBBEC1Down,0,tree->type1_pfMet_shiftedPhi_JetBBEC1Down,0);
    mymetvector[7].SetPtEtaPhiM(tree->type1_pfMet_shiftedPt_JetBBEC1yearUp,0,tree->type1_pfMet_shiftedPhi_JetBBEC1yearUp,0);
    mymetvector[8].SetPtEtaPhiM(tree->type1_pfMet_shiftedPt_JetBBEC1yearDown,0,tree->type1_pfMet_shiftedPhi_JetBBEC1yearDown,0);
    mymetvector[9].SetPtEtaPhiM(tree->type1_pfMet_shiftedPt_JetEC2Up,0,tree->type1_pfMet_shiftedPhi_JetEC2Up,0);
    mymetvector[10].SetPtEtaPhiM(tree->type1_pfMet_shiftedPt_JetEC2Down,0,tree->type1_pfMet_shiftedPhi_JetEC2Down,0);
    mymetvector[11].SetPtEtaPhiM(tree->type1_pfMet_shiftedPt_JetEC2yearUp,0,tree->type1_pfMet_shiftedPhi_JetEC2yearUp,0);
    mymetvector[12].SetPtEtaPhiM(tree->type1_pfMet_shiftedPt_JetEC2yearDown,0,tree->type1_pfMet_shiftedPhi_JetEC2yearDown,0);
    mymetvector[13].SetPtEtaPhiM(tree->type1_pfMet_shiftedPt_JetFlavorQCDUp,0,tree->type1_pfMet_shiftedPhi_JetFlavorQCDUp,0);
    mymetvector[14].SetPtEtaPhiM(tree->type1_pfMet_shiftedPt_JetFlavorQCDDown,0,tree->type1_pfMet_shiftedPhi_JetFlavorQCDDown,0);
    mymetvector[15].SetPtEtaPhiM(tree->type1_pfMet_shiftedPt_JetHFUp,0,tree->type1_pfMet_shiftedPhi_JetHFUp,0);
    mymetvector[16].SetPtEtaPhiM(tree->type1_pfMet_shiftedPt_JetHFDown,0,tree->type1_pfMet_shiftedPhi_JetHFDown,0);
    mymetvector[17].SetPtEtaPhiM(tree->type1_pfMet_shiftedPt_JetHFyearUp,0,tree->type1_pfMet_shiftedPhi_JetHFyearUp,0);
    mymetvector[18].SetPtEtaPhiM(tree->type1_pfMet_shiftedPt_JetHFyearDown,0,tree->type1_pfMet_shiftedPhi_JetHFyearDown,0);
    mymetvector[19].SetPtEtaPhiM(tree->type1_pfMet_shiftedPt_JetRelativeBalUp,0,tree->type1_pfMet_shiftedPhi_JetRelativeBalUp,0);
    mymetvector[20].SetPtEtaPhiM(tree->type1_pfMet_shiftedPt_JetRelativeBalDown,0,tree->type1_pfMet_shiftedPhi_JetRelativeBalDown,0);
    mymetvector[21].SetPtEtaPhiM(tree->type1_pfMet_shiftedPt_JetRelativeSampleUp,0,tree->type1_pfMet_shiftedPhi_JetRelativeSampleUp,0);
    mymetvector[22].SetPtEtaPhiM(tree->type1_pfMet_shiftedPt_JetRelativeSampleDown,0,tree->type1_pfMet_shiftedPhi_JetRelativeSampleDown,0);
    mymetvector[23].SetPtEtaPhiM(tree->type1_pfMet_shiftedPt_JERUp,0,tree->type1_pfMet_shiftedPhi_JERUp,0);
    mymetvector[24].SetPtEtaPhiM(tree->type1_pfMet_shiftedPt_JERDown,0,tree->type1_pfMet_shiftedPhi_JERDown,0);
    mymetvector[25].SetPtEtaPhiM(tree->type1_pfMet_shiftedPt_UnclusteredEnUp,0,tree->type1_pfMet_shiftedPhi_UnclusteredEnUp,0);
    mymetvector[26].SetPtEtaPhiM(tree->type1_pfMet_shiftedPt_UnclusteredEnDown,0,tree->type1_pfMet_shiftedPhi_UnclusteredEnDown,0);

    float pfmetcorr_exvector[27];
    float pfmetcorr_eyvector[27];
    for (int j=0; j<27; ++j){
       pfmetcorr_exvector[j]=mymetvector[j].Px();
       pfmetcorr_eyvector[j]=mymetvector[j].Py();
    }

    TLorentzVector mymet_resolutionUp, mymet_resolutionDown, mymet_responseUp, mymet_responseDown;
    float pfmetcorr_ex_responseUp,pfmetcorr_ey_responseUp,pfmetcorr_ex_responseDown,pfmetcorr_ey_responseDown,pfmetcorr_ex_resolutionUp,pfmetcorr_ey_resolutionUp,pfmetcorr_ex_resolutionDown,pfmetcorr_ey_resolutionDown;

    int recoiljets=tree->jetVeto30+1;
    if (recoil==2) recoiljets=tree->jetVeto30;

    for (int j=0; j<27; ++j){
       if (recoil>=1){
         recoilPFMetCorrector.CorrectByMeanResolution(
         mymetvector[j].Px(), // uncorrected type I pf met px (float)
         mymetvector[j].Py(), // uncorrected type I pf met py (float)
         tree->genpX, // generator Z/W/Higgs px (float)
         tree->genpY, // generator Z/W/Higgs py (float)
         tree->vispX, // generator visible Z/W/Higgs px (float)
         tree->vispY, // generator visible Z/W/Higgs py (float)
         recoiljets,  // number of jets (hadronic jet multiplicity) (int)
         pfmetcorr_exvector[j], // corrected type I pf met px (float)
         pfmetcorr_eyvector[j]  // corrected type I pf met py (float)
         );
       }
    }

    mymetvector[0].SetPxPyPzE(pfmetcorr_exvector[0],pfmetcorr_eyvector[0],0,sqrt(pfmetcorr_exvector[0]*pfmetcorr_exvector[0]+pfmetcorr_eyvector[0]*pfmetcorr_eyvector[0]));
    int Process= MEtSys::ProcessType::BOSON;
    if (recoil>=1){
        metSys.ApplyMEtSys(mymetvector[0].Px(),mymetvector[0].Py(),
                         genpX,genpY,
                         vispX,vispY,
                         recoiljets,
                         Process,
                         MEtSys::SysType::Response,
                         MEtSys::SysShift::Up,
                         pfmetcorr_ex_responseUp,pfmetcorr_ey_responseUp
                         );

        metSys.ApplyMEtSys(mymetvector[0].Px(),mymetvector[0].Py(),
                         genpX,genpY,
                         vispX,vispY,
                         recoiljets,
                         Process,
                         MEtSys::SysType::Response,
                         MEtSys::SysShift::Down,
                         pfmetcorr_ex_responseDown,pfmetcorr_ey_responseDown
                         );
        metSys.ApplyMEtSys(mymetvector[0].Px(),mymetvector[0].Py(),
                         genpX,genpY,
                         vispX,vispY,
                         recoiljets,
                         Process,
                         MEtSys::SysType::Resolution,
                         MEtSys::SysShift::Up,
                         pfmetcorr_ex_resolutionUp,pfmetcorr_ey_resolutionUp
                         );
        metSys.ApplyMEtSys(mymetvector[0].Px(),mymetvector[0].Py(),
                         genpX,genpY,
                         vispX,vispY,
                         recoiljets,
                         Process,
                         MEtSys::SysType::Resolution,
                         MEtSys::SysShift::Down,
                         pfmetcorr_ex_resolutionDown,pfmetcorr_ey_resolutionDown
                         );
    }

    for (int j=0; j<27; ++j){
       mymetvector[j].SetPxPyPzE(pfmetcorr_exvector[j],pfmetcorr_eyvector[j],0,sqrt(pfmetcorr_exvector[j]*pfmetcorr_exvector[j]+pfmetcorr_eyvector[j]*pfmetcorr_eyvector[j]));
    }

    mymet_responseUp.SetPxPyPzE(pfmetcorr_ex_responseUp,pfmetcorr_ey_responseUp,0,sqrt(pfmetcorr_ex_responseUp*pfmetcorr_ex_responseUp+pfmetcorr_ey_responseUp*pfmetcorr_ey_responseUp));
    mymet_responseDown.SetPxPyPzE(pfmetcorr_ex_responseDown,pfmetcorr_ey_responseDown,0,sqrt(pfmetcorr_ex_responseDown*pfmetcorr_ex_responseDown+pfmetcorr_ey_responseDown*pfmetcorr_ey_responseDown));
    mymet_resolutionUp.SetPxPyPzE(pfmetcorr_ex_resolutionUp,pfmetcorr_ey_resolutionUp,0,sqrt(pfmetcorr_ex_resolutionUp*pfmetcorr_ex_resolutionUp+pfmetcorr_ey_resolutionUp*pfmetcorr_ey_resolutionUp));
    mymet_resolutionDown.SetPxPyPzE(pfmetcorr_ex_resolutionDown,pfmetcorr_ey_resolutionDown,0,sqrt(pfmetcorr_ex_resolutionDown*pfmetcorr_ex_resolutionDown+pfmetcorr_ey_resolutionDown*pfmetcorr_ey_resolutionDown));

    met=mymetvector[0].Pt();
    metphi=mymetvector[0].Phi();
    met_px=mymetvector[0].Px();
    met_py=mymetvector[0].Py();

    met_JetAbsoluteUp=mymetvector[1].Pt();
    metphi_JetAbsoluteUp=mymetvector[1].Phi();
    met_JetAbsoluteDown=mymetvector[2].Pt();
    metphi_JetAbsoluteDown=mymetvector[2].Phi();
    met_JetAbsoluteyearUp=mymetvector[3].Pt();
    metphi_JetAbsoluteyearUp=mymetvector[3].Phi();
    met_JetAbsoluteyearDown=mymetvector[4].Pt();
    metphi_JetAbsoluteyearDown=mymetvector[4].Phi();
    met_JetBBEC1Up=mymetvector[5].Pt();
    metphi_JetBBEC1Up=mymetvector[5].Phi();
    met_JetBBEC1Down=mymetvector[6].Pt();
    metphi_JetBBEC1Down=mymetvector[6].Phi();
    met_JetBBEC1yearUp=mymetvector[7].Pt();
    metphi_JetBBEC1yearUp=mymetvector[7].Phi();
    met_JetBBEC1yearDown=mymetvector[8].Pt();
    metphi_JetBBEC1yearDown=mymetvector[8].Phi();
    met_JetEC2Up=mymetvector[9].Pt();
    metphi_JetEC2Up=mymetvector[9].Phi();
    met_JetEC2Down=mymetvector[10].Pt();
    metphi_JetEC2Down=mymetvector[10].Phi();
    met_JetEC2yearUp=mymetvector[11].Pt();
    metphi_JetEC2yearUp=mymetvector[11].Phi();
    met_JetEC2yearDown=mymetvector[12].Pt();
    metphi_JetEC2yearDown=mymetvector[12].Phi();
    met_JetFlavorQCDUp=mymetvector[13].Pt();
    metphi_JetFlavorQCDUp=mymetvector[13].Phi();
    met_JetFlavorQCDDown=mymetvector[14].Pt();
    metphi_JetFlavorQCDDown=mymetvector[14].Phi();
    met_JetHFUp=mymetvector[15].Pt();
    metphi_JetHFUp=mymetvector[15].Phi();
    met_JetHFDown=mymetvector[16].Pt();
    metphi_JetHFDown=mymetvector[16].Phi();
    met_JetHFyearUp=mymetvector[17].Pt();
    metphi_JetHFyearUp=mymetvector[17].Phi();
    met_JetHFyearDown=mymetvector[18].Pt();
    metphi_JetHFyearDown=mymetvector[18].Phi();
    met_JetRelativeBalUp=mymetvector[19].Pt();
    metphi_JetRelativeBalUp=mymetvector[19].Phi();
    met_JetRelativeBalDown=mymetvector[20].Pt();
    metphi_JetRelativeBalDown=mymetvector[20].Phi();
    met_JetRelativeSampleUp=mymetvector[21].Pt();
    metphi_JetRelativeSampleUp=mymetvector[21].Phi();
    met_JetRelativeSampleDown=mymetvector[22].Pt();
    metphi_JetRelativeSampleDown=mymetvector[22].Phi();
    met_JERUp=mymetvector[23].Pt();
    metphi_JERUp=mymetvector[23].Phi();
    met_JERDown=mymetvector[24].Pt();
    metphi_JERDown=mymetvector[24].Phi();
    met_UESUp=mymetvector[25].Pt();
    metphi_UESUp=mymetvector[25].Phi();
    met_UESDown=mymetvector[26].Pt();
    metphi_UESDown=mymetvector[26].Phi();

    met_responseUp=mymet_responseUp.Pt();
    met_resolutionUp=mymet_resolutionUp.Pt();
    metphi_responseUp=mymet_responseUp.Phi();
    metphi_resolutionUp=mymet_resolutionUp.Phi();
    met_responseDown=mymet_responseDown.Pt();
    met_resolutionDown=mymet_resolutionDown.Pt();
    metphi_responseDown=mymet_responseDown.Phi();
    metphi_resolutionDown=mymet_resolutionDown.Phi();

    float uncorrectedE=tau1.E();
    TLorentzVector myeleScaleUp=tau1*(tree->eEnergyScaleUp/uncorrectedE);
    TLorentzVector myeleScaleDown=tau1*(tree->eEnergyScaleDown/uncorrectedE);
    if (ismc) tau1=tau1*(tree->eCorrectedEt/uncorrectedE);
    if (isembedded){
      if (fabs(tau1.Eta())<1.479) tau1=tau1*0.9967;
      if (fabs(tau1.Eta())>1.479) tau1=tau1*0.9944;
    }
    m_1 = 0.000511;
    e_1 = tau1.E();
    pt_1 = tau1.Pt();
    pt_1_ScaleUp = myeleScaleUp.Pt();
    pt_1_ScaleDown = myeleScaleDown.Pt();
    phi_1 = tau1.Phi();
    eta_1 = tau1.Eta();
    dZ_1 = tree->ePVDZ;
    d0_1 = tree->ePVDXY;
    iso_1 = tree->eRelPFIsoRho;
    q_1 = tree->eCharge;

    m_2 = tau2.M();
    e_2 = tau2.E();
    pt_2 = tau2.Pt();
    phi_2 = tau2.Phi();
    eta_2 = tau2.Eta();
    dZ_2 = tree->mPVDZ;
    d0_2=tree->mPVDXY;
    iso_2=tree->mRelPFIsoDBDefault;
    q_2 = tree->mCharge;

    jpt_1=tree->j1pt;
    jpt_1_JERUp=tree->j1pt_JERUp;
    jpt_1_JERDown=tree->j1pt_JERDown;
    jpt_1_JetAbsoluteUp=tree->j1pt_JetAbsoluteUp;
    jpt_1_JetAbsoluteDown=tree->j1pt_JetAbsoluteDown;
    jpt_1_JetAbsoluteyearUp=tree->j1pt_JetAbsoluteyearUp;
    jpt_1_JetAbsoluteyearDown=tree->j1pt_JetAbsoluteyearDown;
    jpt_1_JetBBEC1Up=tree->j1pt_JetBBEC1Up;
    jpt_1_JetBBEC1Down=tree->j1pt_JetBBEC1Down;
    jpt_1_JetBBEC1yearUp=tree->j1pt_JetBBEC1yearUp;
    jpt_1_JetBBEC1yearDown=tree->j1pt_JetBBEC1yearDown;
    jpt_1_JetEC2Up=tree->j1pt_JetEC2Up;
    jpt_1_JetEC2Down=tree->j1pt_JetEC2Down;
    jpt_1_JetEC2yearUp=tree->j1pt_JetEC2yearUp;
    jpt_1_JetEC2yearDown=tree->j1pt_JetEC2yearDown;
    jpt_1_JetFlavorQCDUp=tree->j1pt_JetFlavorQCDUp;
    jpt_1_JetFlavorQCDDown=tree->j1pt_JetFlavorQCDDown;
    jpt_1_JetHFUp=tree->j1pt_JetHFUp;
    jpt_1_JetHFDown=tree->j1pt_JetHFDown;
    jpt_1_JetHFyearUp=tree->j1pt_JetHFyearUp;
    jpt_1_JetHFyearDown=tree->j1pt_JetHFyearDown;
    jpt_1_JetRelativeBalUp=tree->j1pt_JetRelativeBalUp;
    jpt_1_JetRelativeBalDown=tree->j1pt_JetRelativeBalDown;
    jpt_1_JetRelativeSampleUp=tree->j1pt_JetRelativeSampleUp;
    jpt_1_JetRelativeSampleDown=tree->j1pt_JetRelativeSampleDown;

    jpt_2=tree->j2pt;
    jeta_1=tree->j1eta;
    jeta_2=tree->j2eta;
    jcsv_1=tree->j1csv;
    jcsv_2=tree->j2csv;
    jphi_1=tree->j1phi;
    jphi_2=tree->j2phi;
    bpt_1=tree->jb1pt_2018;
    bpt_2=tree->jb2pt_2018;
    beta_1=tree->jb1eta_2018;
    beta_2=tree->jb2eta_2018;
    bphi_1=tree->jb1phi_2018;
    bphi_2=tree->jb2phi_2018;
    bflavor_1=tree->jb1hadronflavor_2018;
    bflavor_2=tree->jb2hadronflavor_2018;
    mjj=tree->vbfMass;

  mjj_JERUp=tree->vbfMass_JERUp;
  mjj_JERDown=tree->vbfMass_JERDown;
  mjj_JetAbsoluteUp=tree->vbfMass_JetAbsoluteUp;
  mjj_JetAbsoluteDown=tree->vbfMass_JetAbsoluteDown;
  mjj_JetAbsoluteyearUp=tree->vbfMass_JetAbsoluteyearUp;
  mjj_JetAbsoluteyearDown=tree->vbfMass_JetAbsoluteyearDown;
  mjj_JetBBEC1Up=tree->vbfMass_JetBBEC1Up;
  mjj_JetBBEC1Down=tree->vbfMass_JetBBEC1Down;
  mjj_JetBBEC1yearUp=tree->vbfMass_JetBBEC1yearUp;
  mjj_JetBBEC1yearDown=tree->vbfMass_JetBBEC1yearDown;
  mjj_JetEC2Up=tree->vbfMass_JetEC2Up;
  mjj_JetEC2Down=tree->vbfMass_JetEC2Down;
  mjj_JetEC2yearUp=tree->vbfMass_JetEC2yearUp;
  mjj_JetEC2yearDown=tree->vbfMass_JetEC2yearDown;
  mjj_JetFlavorQCDUp=tree->vbfMass_JetFlavorQCDUp;
  mjj_JetFlavorQCDDown=tree->vbfMass_JetFlavorQCDDown;
  mjj_JetHFUp=tree->vbfMass_JetHFUp;
  mjj_JetHFDown=tree->vbfMass_JetHFDown;
  mjj_JetHFyearUp=tree->vbfMass_JetHFyearUp;
  mjj_JetHFyearDown=tree->vbfMass_JetHFyearDown;
  mjj_JetRelativeBalUp=tree->vbfMass_JetRelativeBalUp;
  mjj_JetRelativeBalDown=tree->vbfMass_JetRelativeBalDown;
  mjj_JetRelativeSampleUp=tree->vbfMass_JetRelativeSampleUp;
  mjj_JetRelativeSampleDown=tree->vbfMass_JetRelativeSampleDown;


  NUP=tree->NUP;
  npu=tree->nTruePU;
  npv=tree->nvtx;

  extraelec_veto=(tree->eVetoZTTp001dxyzR0>1);
  extramuon_veto=(tree->muVetoZTTp001dxyzR0>1);

  Run_Tree->Fill();
}

#endif


