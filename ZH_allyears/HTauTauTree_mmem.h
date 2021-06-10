//////////////////////////////////////////////////////////
// This class has been automatically generated on
// Thu May 21 12:56:45 2020 by ROOT version 6.10/09
// from TTree Ntuple/Expression Ntuple
// found on file: /hdfs/store/user/caillol/ZHTT_2018_15may_mc/ZHToTauTau_M125_13TeV_powheg_pythia8_-102X_upgrade2018_realistic_v15-v2/make_ntuples_cfg-E56F6BF4-214E-0343-AA23-605601EC3921.root
//////////////////////////////////////////////////////////

#ifndef HTauTauTree_mmem_h
#define HTauTauTree_mmem_h

#include <TROOT.h>
#include <TChain.h>
#include <TFile.h>

// Header file for the classes stored in the TTree if any.

class HTauTauTree_mmem {
public :
   TTree          *_tree;   //!pointer to the analyzed TTree or TChain
   Int_t           fCurrent; //!current Tree number in a TChain

// Fixed size dimensions of array or collections stored in the TTree if any.

   // Declaration of leaf types
   Float_t         DoubleMediumHPSTau35Pass;
   Float_t         DoubleMediumHPSTau35TightIDPass;
   Float_t         DoubleMediumHPSTau40Pass;
   Float_t         DoubleMediumHPSTau40TightIDPass;
   Float_t         DoubleMediumTau35Pass;
   Float_t         DoubleMediumTau35TightIDPass;
   Float_t         DoubleMediumTau40Pass;
   Float_t         DoubleMediumTau40TightIDPass;
   Float_t         DoubleTightHPSTau35Pass;
   Float_t         DoubleTightHPSTau35TightIDPass;
   Float_t         DoubleTightHPSTau40Pass;
   Float_t         DoubleTightHPSTau40TightIDPass;
   Float_t         DoubleTightTau35Pass;
   Float_t         DoubleTightTau35TightIDPass;
   Float_t         DoubleTightTau40Pass;
   Float_t         DoubleTightTau40TightIDPass;
   Float_t         Ele24LooseHPSTau30Pass;
   Float_t         Ele24LooseHPSTau30TightIDPass;
   Float_t         Ele24LooseTau30Pass;
   Float_t         Ele24LooseTau30TightIDPass;
   Float_t         Ele27WPTightPass;
   Float_t         Ele32WPTightPass;
   Float_t         Ele35WPTightPass;
   Float_t         Ele38WPTightPass;
   Float_t         Ele40WPTightPass;
   Float_t         EmbPtWeight;
   Float_t         Eta;
   Float_t         Flag_BadChargedCandidateFilter;
   Float_t         Flag_BadPFMuonFilter;
   Float_t         Flag_EcalDeadCellTriggerPrimitiveFilter;
   Float_t         Flag_HBHENoiseFilter;
   Float_t         Flag_HBHENoiseIsoFilter;
   Float_t         Flag_badMuons;
   Float_t         Flag_duplicateMuons;
   Float_t         Flag_ecalBadCalibFilter;
   Float_t         Flag_ecalBadCalibReducedMINIAODFilter;
   Float_t         Flag_eeBadScFilter;
   Float_t         Flag_globalSuperTightHalo2016Filter;
   Float_t         Flag_globalTightHalo2016Filter;
   Float_t         Flag_goodVertices;
   Float_t         GenWeight;
   Float_t         Ht;
   Float_t         IsoMu24Pass;
   Float_t         IsoMu27Pass;
   Float_t         LT;
   Float_t         Mass;
   Float_t         MassError;
   Float_t         MassErrord1;
   Float_t         MassErrord2;
   Float_t         MassErrord3;
   Float_t         MassErrord4;
   Float_t         Mt;
   Float_t         Mu20LooseHPSTau27Pass;
   Float_t         Mu20LooseHPSTau27TightIDPass;
   Float_t         Mu20LooseTau27Pass;
   Float_t         Mu20LooseTau27TightIDPass;
   Float_t         Mu50Pass;
   Float_t         NUP;
   Float_t         Phi;
   Float_t         Pt;
   Float_t         PythiaWeight_fsr_muR0p25;
   Float_t         PythiaWeight_fsr_muR0p5;
   Float_t         PythiaWeight_fsr_muR2;
   Float_t         PythiaWeight_fsr_muR4;
   Float_t         PythiaWeight_isr_muR0p25;
   Float_t         PythiaWeight_isr_muR0p5;
   Float_t         PythiaWeight_isr_muR2;
   Float_t         PythiaWeight_isr_muR4;
   Float_t         Rivet_VEta;
   Float_t         Rivet_VPt;
   Float_t         Rivet_errorCode;
   Float_t         Rivet_higgsEta;
   Float_t         Rivet_higgsPt;
   Float_t         Rivet_higgsRapidity;
   Float_t         Rivet_j1eta;
   Float_t         Rivet_j1m;
   Float_t         Rivet_j1phi;
   Float_t         Rivet_j1pt;
   Float_t         Rivet_j2eta;
   Float_t         Rivet_j2m;
   Float_t         Rivet_j2phi;
   Float_t         Rivet_j2pt;
   Float_t         Rivet_nJets25;
   Float_t         Rivet_nJets30;
   Float_t         Rivet_p4decay_VEta;
   Float_t         Rivet_p4decay_VPt;
   Float_t         Rivet_prodMode;
   Float_t         Rivet_stage0_cat;
   Float_t         Rivet_stage1_1_cat_pTjet25GeV;
   Float_t         Rivet_stage1_1_cat_pTjet30GeV;
   Float_t         Rivet_stage1_1_fine_cat_pTjet25GeV;
   Float_t         Rivet_stage1_1_fine_cat_pTjet30GeV;
   Float_t         Rivet_stage1_cat_pTjet25GeV;
   Float_t         Rivet_stage1_cat_pTjet30GeV;
   Float_t         VBFDoubleLooseHPSTau20Pass;
   Float_t         VBFDoubleLooseTau20Pass;
   Float_t         VBFDoubleMediumHPSTau20Pass;
   Float_t         VBFDoubleMediumTau20Pass;
   Float_t         VBFDoubleTightHPSTau20Pass;
   Float_t         VBFDoubleTightTau20Pass;
   Float_t         bjetDeepCSVVeto20Loose_2016_DR0p5;
   Float_t         bjetDeepCSVVeto20Loose_2017_DR0p5;
   Float_t         bjetDeepCSVVeto20Loose_2018_DR0p5;
   Float_t         bjetDeepCSVVeto20Medium_2016_DR0;
   Float_t         bjetDeepCSVVeto20Medium_2016_DR0p5;
   Float_t         bjetDeepCSVVeto20Medium_2017_DR0;
   Float_t         bjetDeepCSVVeto20Medium_2017_DR0p5;
   Float_t         bjetDeepCSVVeto20Medium_2018_DR0;
   Float_t         bjetDeepCSVVeto20Medium_2018_DR0p5;
   Float_t         bjetDeepCSVVeto20Tight_2016_DR0p5;
   Float_t         bjetDeepCSVVeto20Tight_2017_DR0p5;
   Float_t         bjetDeepCSVVeto20Tight_2018_DR0p5;
   Float_t         bweight_2016;
   Float_t         bweight_2017;
   Float_t         bweight_2018;
   Float_t         charge;
   Float_t         dielectronVeto;
   Float_t         dimu9ele9Pass;
   Float_t         dimuonVeto;
   Float_t         doubleE25Pass;
   Float_t         doubleE33Pass;
   Float_t         doubleE_23_12Pass;
   Float_t         doubleMuDZminMass3p8Pass;
   Float_t         doubleMuDZminMass8Pass;
   Float_t         doubleMuSingleEPass;
   Float_t         doubleTau35Pass;
   Float_t         doubleTauCmbIso35RegPass;
   Float_t         eCBIDLoose;
   Float_t         eCBIDMedium;
   Float_t         eCBIDTight;
   Float_t         eCBIDVeto;
   Float_t         eCharge;
   Float_t         eChargeIdLoose;
   Float_t         eChargeIdMed;
   Float_t         eChargeIdTight;
   Float_t         eComesFromHiggs;
   Float_t         eCorrectedEt;
   Float_t         eE1x5;
   Float_t         eE2x5Max;
   Float_t         eE5x5;
   Float_t         eEcalIsoDR03;
   Float_t         eEnergyError;
   Float_t         eEnergyScaleDown;
   Float_t         eEnergyScaleGainDown;
   Float_t         eEnergyScaleGainUp;
   Float_t         eEnergyScaleStatDown;
   Float_t         eEnergyScaleStatUp;
   Float_t         eEnergyScaleSystDown;
   Float_t         eEnergyScaleSystUp;
   Float_t         eEnergyScaleUp;
   Float_t         eEnergySigmaDown;
   Float_t         eEnergySigmaPhiDown;
   Float_t         eEnergySigmaPhiUp;
   Float_t         eEnergySigmaRhoDown;
   Float_t         eEnergySigmaRhoUp;
   Float_t         eEnergySigmaUp;
   Float_t         eEta;
   Float_t         eGenCharge;
   Float_t         eGenDirectPromptTauDecay;
   Float_t         eGenEnergy;
   Float_t         eGenEta;
   Float_t         eGenIsPrompt;
   Float_t         eGenMotherPdgId;
   Float_t         eGenParticle;
   Float_t         eGenPdgId;
   Float_t         eGenPhi;
   Float_t         eGenPrompt;
   Float_t         eGenPromptTauDecay;
   Float_t         eGenPt;
   Float_t         eGenTauDecay;
   Float_t         eGenVZ;
   Float_t         eGenVtxPVMatch;
   Float_t         eHadronicDepth1OverEm;
   Float_t         eHadronicDepth2OverEm;
   Float_t         eHadronicOverEM;
   Float_t         eHcalIsoDR03;
   Float_t         eIP3D;
   Float_t         eIP3DErr;
   Float_t         eIsoDB03;
   Float_t         eJetArea;
   Float_t         eJetBtag;
   Float_t         eJetDR;
   Float_t         eJetEtaEtaMoment;
   Float_t         eJetEtaPhiMoment;
   Float_t         eJetEtaPhiSpread;
   Float_t         eJetHadronFlavour;
   Float_t         eJetPFCISVBtag;
   Float_t         eJetPartonFlavour;
   Float_t         eJetPhiPhiMoment;
   Float_t         eJetPt;
   Float_t         eLowestMll;
   Float_t         eMVAIsoWP80;
   Float_t         eMVAIsoWP90;
   Float_t         eMVAIsoWPHZZ;
   Float_t         eMVAIsoWPLoose;
   Float_t         eMVANoisoWP80;
   Float_t         eMVANoisoWP90;
   Float_t         eMVANoisoWPLoose;
   Float_t         eMass;
   Float_t         eMatchEmbeddedFilterEle24Tau30;
   Float_t         eMatchEmbeddedFilterEle27;
   Float_t         eMatchEmbeddedFilterEle32;
   Float_t         eMatchEmbeddedFilterEle32DoubleL1_v1;
   Float_t         eMatchEmbeddedFilterEle32DoubleL1_v2;
   Float_t         eMatchEmbeddedFilterEle35;
   Float_t         eMatchesEle24HPSTau30Filter;
   Float_t         eMatchesEle24HPSTau30Path;
   Float_t         eMatchesEle24Tau30Filter;
   Float_t         eMatchesEle24Tau30Path;
   Float_t         eMatchesEle25Filter;
   Float_t         eMatchesEle25Path;
   Float_t         eMatchesEle27Filter;
   Float_t         eMatchesEle27Path;
   Float_t         eMatchesEle32Filter;
   Float_t         eMatchesEle32Path;
   Float_t         eMatchesEle35Filter;
   Float_t         eMatchesEle35Path;
   Float_t         eMatchesMu23e12DZFilter;
   Float_t         eMatchesMu23e12DZPath;
   Float_t         eMatchesMu23e12Filter;
   Float_t         eMatchesMu23e12Path;
   Float_t         eMatchesMu8e23DZFilter;
   Float_t         eMatchesMu8e23DZPath;
   Float_t         eMatchesMu8e23Filter;
   Float_t         eMatchesMu8e23Path;
   Float_t         eMissingHits;
   Float_t         eNearMuonVeto;
   Float_t         eNearestMuonDR;
   Float_t         eNearestZMass;
   Float_t         ePFChargedIso;
   Float_t         ePFNeutralIso;
   Float_t         ePFPUChargedIso;
   Float_t         ePFPhotonIso;
   Float_t         ePVDXY;
   Float_t         ePVDZ;
   Float_t         ePassesConversionVeto;
   Float_t         ePhi;
   Float_t         ePt;
   Float_t         eRelIso;
   Float_t         eRelPFIsoDB;
   Float_t         eRelPFIsoRho;
   Float_t         eRho;
   Float_t         eSCEnergy;
   Float_t         eSCEta;
   Float_t         eSCEtaWidth;
   Float_t         eSCPhi;
   Float_t         eSCPhiWidth;
   Float_t         eSCPreshowerEnergy;
   Float_t         eSCRawEnergy;
   Float_t         eSIP2D;
   Float_t         eSIP3D;
   Float_t         eSigmaIEtaIEta;
   Float_t         eTrkIsoDR03;
   Float_t         eVZ;
   Float_t         eVetoHZZPt5;
   Float_t         eVetoZTTp001dxyz;
   Float_t         eVetoZTTp001dxyzR0;
   Float_t         eZTTGenMatching;
   Float_t         e_m1_DR;
   Float_t         e_m1_Mass;
   Float_t         e_m1_doubleL1IsoTauMatch;
   Float_t         e_m2_DR;
   Float_t         e_m2_Mass;
   Float_t         e_m2_doubleL1IsoTauMatch;
   Float_t         e_m3_DR;
   Float_t         e_m3_Mass;
   Float_t         e_m3_doubleL1IsoTauMatch;
   Float_t         edeltaEtaSuperClusterTrackAtVtx;
   Float_t         edeltaPhiSuperClusterTrackAtVtx;
   Float_t         eeSuperClusterOverP;
   Float_t         eecalEnergy;
   Float_t         efBrem;
   Float_t         etrackMomentumAtVtxP;
   ULong64_t       evt;
   Float_t         genEta;
   Float_t         genHTT;
   Float_t         genM;
   Float_t         genMass;
   Float_t         genPhi;
   Float_t         genpT;
   Float_t         genpX;
   Float_t         genpY;
   Float_t         gentau1_eta;
   Float_t         gentau1_pt;
   Float_t         gentau2_eta;
   Float_t         gentau2_pt;
   Int_t           isdata;
   Int_t           isembed;
   Float_t         j1csv;
   Float_t         j1csvWoNoisyJets;
   Float_t         j1eta;
   Float_t         j1etaWoNoisyJets;
   Float_t         j1hadronflavor;
   Float_t         j1hadronflavorWoNoisyJets;
   Float_t         j1phi;
   Float_t         j1phiWoNoisyJets;
   Float_t         j1pt;
   Float_t         j1ptWoNoisyJets;
   Float_t         j1ptWoNoisyJets_JERDown;
   Float_t         j1ptWoNoisyJets_JERUp;
   Float_t         j1ptWoNoisyJets_JetAbsoluteDown;
   Float_t         j1ptWoNoisyJets_JetAbsoluteUp;
   Float_t         j1ptWoNoisyJets_JetAbsoluteyearDown;
   Float_t         j1ptWoNoisyJets_JetAbsoluteyearUp;
   Float_t         j1ptWoNoisyJets_JetBBEC1Down;
   Float_t         j1ptWoNoisyJets_JetBBEC1Up;
   Float_t         j1ptWoNoisyJets_JetBBEC1yearDown;
   Float_t         j1ptWoNoisyJets_JetBBEC1yearUp;
   Float_t         j1ptWoNoisyJets_JetEC2Down;
   Float_t         j1ptWoNoisyJets_JetEC2Up;
   Float_t         j1ptWoNoisyJets_JetEC2yearDown;
   Float_t         j1ptWoNoisyJets_JetEC2yearUp;
   Float_t         j1ptWoNoisyJets_JetFlavorQCDDown;
   Float_t         j1ptWoNoisyJets_JetFlavorQCDUp;
   Float_t         j1ptWoNoisyJets_JetHFDown;
   Float_t         j1ptWoNoisyJets_JetHFUp;
   Float_t         j1ptWoNoisyJets_JetHFyearDown;
   Float_t         j1ptWoNoisyJets_JetHFyearUp;
   Float_t         j1ptWoNoisyJets_JetRelativeBalDown;
   Float_t         j1ptWoNoisyJets_JetRelativeBalUp;
   Float_t         j1ptWoNoisyJets_JetRelativeSampleDown;
   Float_t         j1ptWoNoisyJets_JetRelativeSampleUp;
   Float_t         j1pt_JERDown;
   Float_t         j1pt_JERUp;
   Float_t         j1pt_JetAbsoluteDown;
   Float_t         j1pt_JetAbsoluteUp;
   Float_t         j1pt_JetAbsoluteyearDown;
   Float_t         j1pt_JetAbsoluteyearUp;
   Float_t         j1pt_JetBBEC1Down;
   Float_t         j1pt_JetBBEC1Up;
   Float_t         j1pt_JetBBEC1yearDown;
   Float_t         j1pt_JetBBEC1yearUp;
   Float_t         j1pt_JetEC2Down;
   Float_t         j1pt_JetEC2Up;
   Float_t         j1pt_JetEC2yearDown;
   Float_t         j1pt_JetEC2yearUp;
   Float_t         j1pt_JetFlavorQCDDown;
   Float_t         j1pt_JetFlavorQCDUp;
   Float_t         j1pt_JetHFDown;
   Float_t         j1pt_JetHFUp;
   Float_t         j1pt_JetHFyearDown;
   Float_t         j1pt_JetHFyearUp;
   Float_t         j1pt_JetRelativeBalDown;
   Float_t         j1pt_JetRelativeBalUp;
   Float_t         j1pt_JetRelativeSampleDown;
   Float_t         j1pt_JetRelativeSampleUp;
   Float_t         j2csv;
   Float_t         j2csvWoNoisyJets;
   Float_t         j2eta;
   Float_t         j2etaWoNoisyJets;
   Float_t         j2hadronflavor;
   Float_t         j2hadronflavorWoNoisyJets;
   Float_t         j2phi;
   Float_t         j2phiWoNoisyJets;
   Float_t         j2pt;
   Float_t         j2ptWoNoisyJets;
   Float_t         j2ptWoNoisyJets_JERDown;
   Float_t         j2ptWoNoisyJets_JERUp;
   Float_t         j2ptWoNoisyJets_JetAbsoluteDown;
   Float_t         j2ptWoNoisyJets_JetAbsoluteUp;
   Float_t         j2ptWoNoisyJets_JetAbsoluteyearDown;
   Float_t         j2ptWoNoisyJets_JetAbsoluteyearUp;
   Float_t         j2ptWoNoisyJets_JetBBEC1Down;
   Float_t         j2ptWoNoisyJets_JetBBEC1Up;
   Float_t         j2ptWoNoisyJets_JetBBEC1yearDown;
   Float_t         j2ptWoNoisyJets_JetBBEC1yearUp;
   Float_t         j2ptWoNoisyJets_JetEC2Down;
   Float_t         j2ptWoNoisyJets_JetEC2Up;
   Float_t         j2ptWoNoisyJets_JetEC2yearDown;
   Float_t         j2ptWoNoisyJets_JetEC2yearUp;
   Float_t         j2ptWoNoisyJets_JetFlavorQCDDown;
   Float_t         j2ptWoNoisyJets_JetFlavorQCDUp;
   Float_t         j2ptWoNoisyJets_JetHFDown;
   Float_t         j2ptWoNoisyJets_JetHFUp;
   Float_t         j2ptWoNoisyJets_JetHFyearDown;
   Float_t         j2ptWoNoisyJets_JetHFyearUp;
   Float_t         j2ptWoNoisyJets_JetRelativeBalDown;
   Float_t         j2ptWoNoisyJets_JetRelativeBalUp;
   Float_t         j2ptWoNoisyJets_JetRelativeSampleDown;
   Float_t         j2ptWoNoisyJets_JetRelativeSampleUp;
   Float_t         j2pt_JERDown;
   Float_t         j2pt_JERUp;
   Float_t         j2pt_JetAbsoluteDown;
   Float_t         j2pt_JetAbsoluteUp;
   Float_t         j2pt_JetAbsoluteyearDown;
   Float_t         j2pt_JetAbsoluteyearUp;
   Float_t         j2pt_JetBBEC1Down;
   Float_t         j2pt_JetBBEC1Up;
   Float_t         j2pt_JetBBEC1yearDown;
   Float_t         j2pt_JetBBEC1yearUp;
   Float_t         j2pt_JetEC2Down;
   Float_t         j2pt_JetEC2Up;
   Float_t         j2pt_JetEC2yearDown;
   Float_t         j2pt_JetEC2yearUp;
   Float_t         j2pt_JetFlavorQCDDown;
   Float_t         j2pt_JetFlavorQCDUp;
   Float_t         j2pt_JetHFDown;
   Float_t         j2pt_JetHFUp;
   Float_t         j2pt_JetHFyearDown;
   Float_t         j2pt_JetHFyearUp;
   Float_t         j2pt_JetRelativeBalDown;
   Float_t         j2pt_JetRelativeBalUp;
   Float_t         j2pt_JetRelativeSampleDown;
   Float_t         j2pt_JetRelativeSampleUp;
   Float_t         jb1eta_2016;
   Float_t         jb1eta_2017;
   Float_t         jb1eta_2018;
   Float_t         jb1hadronflavor_2016;
   Float_t         jb1hadronflavor_2017;
   Float_t         jb1hadronflavor_2018;
   Float_t         jb1phi_2016;
   Float_t         jb1phi_2017;
   Float_t         jb1phi_2018;
   Float_t         jb1pt_2016;
   Float_t         jb1pt_2017;
   Float_t         jb1pt_2018;
   Float_t         jb2eta_2016;
   Float_t         jb2eta_2017;
   Float_t         jb2eta_2018;
   Float_t         jb2hadronflavor_2016;
   Float_t         jb2hadronflavor_2017;
   Float_t         jb2hadronflavor_2018;
   Float_t         jb2phi_2016;
   Float_t         jb2phi_2017;
   Float_t         jb2phi_2018;
   Float_t         jb2pt_2016;
   Float_t         jb2pt_2017;
   Float_t         jb2pt_2018;
   Float_t         jetVeto20;
   Float_t         jetVeto20WoNoisyJets;
   Float_t         jetVeto20_JetEnDown;
   Float_t         jetVeto20_JetEnUp;
   Float_t         jetVeto30;
   Float_t         jetVeto30WoNoisyJets;
   Float_t         jetVeto30WoNoisyJets_JERDown;
   Float_t         jetVeto30WoNoisyJets_JERUp;
   Float_t         jetVeto30WoNoisyJets_JetAbsoluteDown;
   Float_t         jetVeto30WoNoisyJets_JetAbsoluteUp;
   Float_t         jetVeto30WoNoisyJets_JetAbsoluteyearDown;
   Float_t         jetVeto30WoNoisyJets_JetAbsoluteyearUp;
   Float_t         jetVeto30WoNoisyJets_JetBBEC1Down;
   Float_t         jetVeto30WoNoisyJets_JetBBEC1Up;
   Float_t         jetVeto30WoNoisyJets_JetBBEC1yearDown;
   Float_t         jetVeto30WoNoisyJets_JetBBEC1yearUp;
   Float_t         jetVeto30WoNoisyJets_JetEC2Down;
   Float_t         jetVeto30WoNoisyJets_JetEC2Up;
   Float_t         jetVeto30WoNoisyJets_JetEC2yearDown;
   Float_t         jetVeto30WoNoisyJets_JetEC2yearUp;
   Float_t         jetVeto30WoNoisyJets_JetEnDown;
   Float_t         jetVeto30WoNoisyJets_JetEnUp;
   Float_t         jetVeto30WoNoisyJets_JetFlavorQCDDown;
   Float_t         jetVeto30WoNoisyJets_JetFlavorQCDUp;
   Float_t         jetVeto30WoNoisyJets_JetHFDown;
   Float_t         jetVeto30WoNoisyJets_JetHFUp;
   Float_t         jetVeto30WoNoisyJets_JetHFyearDown;
   Float_t         jetVeto30WoNoisyJets_JetHFyearUp;
   Float_t         jetVeto30WoNoisyJets_JetRelativeBalDownWoNoisyJets;
   Float_t         jetVeto30WoNoisyJets_JetRelativeBalUpWoNoisyJets;
   Float_t         jetVeto30WoNoisyJets_JetRelativeSampleDown;
   Float_t         jetVeto30WoNoisyJets_JetRelativeSampleUp;
   Float_t         jetVeto30WoNoisyJets_JetTotalDown;
   Float_t         jetVeto30WoNoisyJets_JetTotalUp;
   Float_t         jetVeto30_JERDown;
   Float_t         jetVeto30_JERUp;
   Float_t         jetVeto30_JetAbsoluteDown;
   Float_t         jetVeto30_JetAbsoluteUp;
   Float_t         jetVeto30_JetAbsoluteyearDown;
   Float_t         jetVeto30_JetAbsoluteyearUp;
   Float_t         jetVeto30_JetBBEC1Down;
   Float_t         jetVeto30_JetBBEC1Up;
   Float_t         jetVeto30_JetBBEC1yearDown;
   Float_t         jetVeto30_JetBBEC1yearUp;
   Float_t         jetVeto30_JetEC2Down;
   Float_t         jetVeto30_JetEC2Up;
   Float_t         jetVeto30_JetEC2yearDown;
   Float_t         jetVeto30_JetEC2yearUp;
   Float_t         jetVeto30_JetEnDown;
   Float_t         jetVeto30_JetEnUp;
   Float_t         jetVeto30_JetFlavorQCDDown;
   Float_t         jetVeto30_JetFlavorQCDUp;
   Float_t         jetVeto30_JetHFDown;
   Float_t         jetVeto30_JetHFUp;
   Float_t         jetVeto30_JetHFyearDown;
   Float_t         jetVeto30_JetHFyearUp;
   Float_t         jetVeto30_JetRelativeBalDown;
   Float_t         jetVeto30_JetRelativeBalUp;
   Float_t         jetVeto30_JetRelativeSampleDown;
   Float_t         jetVeto30_JetRelativeSampleUp;
   Float_t         jetVeto30_JetTotalDown;
   Float_t         jetVeto30_JetTotalUp;
   Float_t         lheweight_muR0p5_muF0p5;
   Float_t         lheweight_muR0p5_muF1;
   Float_t         lheweight_muR0p5_muF2;
   Float_t         lheweight_muR1_muF0p5;
   Float_t         lheweight_muR1_muF2;
   Float_t         lheweight_muR2_muF0p5;
   Float_t         lheweight_muR2_muF1;
   Float_t         lheweight_muR2_muF2;
   Float_t         lheweight_nominal;
   Int_t           lumi;
   Float_t         m1BestTrackType;
   Float_t         m1Charge;
   Float_t         m1Chi2LocalPosition;
   Float_t         m1ComesFromHiggs;
   Float_t         m1CutBasedIdGlobalHighPt;
   Float_t         m1CutBasedIdLoose;
   Float_t         m1CutBasedIdMedium;
   Float_t         m1CutBasedIdMediumPrompt;
   Float_t         m1CutBasedIdTight;
   Float_t         m1CutBasedIdTrkHighPt;
   Float_t         m1EcalIsoDR03;
   Float_t         m1EffectiveArea2011;
   Float_t         m1EffectiveArea2012;
   Float_t         m1Eta;
   Float_t         m1Eta_MuonEnDown;
   Float_t         m1Eta_MuonEnUp;
   Float_t         m1GenCharge;
   Float_t         m1GenDirectPromptTauDecayFinalState;
   Float_t         m1GenEnergy;
   Float_t         m1GenEta;
   Float_t         m1GenIsPrompt;
   Float_t         m1GenMotherPdgId;
   Float_t         m1GenParticle;
   Float_t         m1GenPdgId;
   Float_t         m1GenPhi;
   Float_t         m1GenPrompt;
   Float_t         m1GenPromptFinalState;
   Float_t         m1GenPromptTauDecay;
   Float_t         m1GenPt;
   Float_t         m1GenTauDecay;
   Float_t         m1GenVZ;
   Float_t         m1GenVtxPVMatch;
   Float_t         m1HcalIsoDR03;
   Float_t         m1IP3D;
   Float_t         m1IP3DErr;
   Float_t         m1IsGlobal;
   Float_t         m1IsPFMuon;
   Float_t         m1IsTracker;
   Float_t         m1IsoDB03;
   Float_t         m1IsoDB04;
   Float_t         m1JetArea;
   Float_t         m1JetBtag;
   Float_t         m1JetDR;
   Float_t         m1JetEtaEtaMoment;
   Float_t         m1JetEtaPhiMoment;
   Float_t         m1JetEtaPhiSpread;
   Float_t         m1JetHadronFlavour;
   Float_t         m1JetPFCISVBtag;
   Float_t         m1JetPartonFlavour;
   Float_t         m1JetPhiPhiMoment;
   Float_t         m1JetPt;
   Float_t         m1LowestMll;
   Float_t         m1Mass;
   Float_t         m1MatchEmbeddedFilterMu19Tau20_2016;
   Float_t         m1MatchEmbeddedFilterMu20Tau27_2017;
   Float_t         m1MatchEmbeddedFilterMu20Tau27_2018;
   Float_t         m1MatchEmbeddedFilterMu24;
   Float_t         m1MatchEmbeddedFilterMu27;
   Float_t         m1MatchedStations;
   Float_t         m1MatchesIsoMu19Tau20Filter;
   Float_t         m1MatchesIsoMu19Tau20Path;
   Float_t         m1MatchesIsoMu19Tau20SingleL1Filter;
   Float_t         m1MatchesIsoMu19Tau20SingleL1Path;
   Float_t         m1MatchesIsoMu20HPSTau27Filter;
   Float_t         m1MatchesIsoMu20HPSTau27Path;
   Float_t         m1MatchesIsoMu20Tau27Filter;
   Float_t         m1MatchesIsoMu20Tau27Path;
   Float_t         m1MatchesIsoMu22Filter;
   Float_t         m1MatchesIsoMu22Path;
   Float_t         m1MatchesIsoMu22eta2p1Filter;
   Float_t         m1MatchesIsoMu22eta2p1Path;
   Float_t         m1MatchesIsoMu24Filter;
   Float_t         m1MatchesIsoMu24Path;
   Float_t         m1MatchesIsoMu27Filter;
   Float_t         m1MatchesIsoMu27Path;
   Float_t         m1MatchesIsoTkMu22Filter;
   Float_t         m1MatchesIsoTkMu22Path;
   Float_t         m1MatchesIsoTkMu22eta2p1Filter;
   Float_t         m1MatchesIsoTkMu22eta2p1Path;
   Float_t         m1MatchesMu23e12DZFilter;
   Float_t         m1MatchesMu23e12DZPath;
   Float_t         m1MatchesMu23e12Filter;
   Float_t         m1MatchesMu23e12Path;
   Float_t         m1MatchesMu8e23DZFilter;
   Float_t         m1MatchesMu8e23DZPath;
   Float_t         m1MatchesMu8e23Filter;
   Float_t         m1MatchesMu8e23Path;
   Float_t         m1MiniIsoLoose;
   Float_t         m1MiniIsoMedium;
   Float_t         m1MiniIsoTight;
   Float_t         m1MiniIsoVeryTight;
   Float_t         m1MuonHits;
   Float_t         m1MvaLoose;
   Float_t         m1MvaMedium;
   Float_t         m1MvaTight;
   Float_t         m1NearestZMass;
   Float_t         m1NormTrkChi2;
   Float_t         m1NormalizedChi2;
   Float_t         m1PFChargedHadronIsoR04;
   Float_t         m1PFChargedIso;
   Float_t         m1PFIDLoose;
   Float_t         m1PFIDMedium;
   Float_t         m1PFIDTight;
   Float_t         m1PFIsoLoose;
   Float_t         m1PFIsoMedium;
   Float_t         m1PFIsoTight;
   Float_t         m1PFIsoVeryLoose;
   Float_t         m1PFIsoVeryTight;
   Float_t         m1PFNeutralHadronIsoR04;
   Float_t         m1PFNeutralIso;
   Float_t         m1PFPUChargedIso;
   Float_t         m1PFPhotonIso;
   Float_t         m1PFPhotonIsoR04;
   Float_t         m1PFPileupIsoR04;
   Float_t         m1PVDXY;
   Float_t         m1PVDZ;
   Float_t         m1Phi;
   Float_t         m1Phi_MuonEnDown;
   Float_t         m1Phi_MuonEnUp;
   Float_t         m1PixHits;
   Float_t         m1Pt;
   Float_t         m1Pt_MuonEnDown;
   Float_t         m1Pt_MuonEnUp;
   Float_t         m1RelPFIsoDBDefault;
   Float_t         m1RelPFIsoDBDefaultR04;
   Float_t         m1RelPFIsoRho;
   Float_t         m1Rho;
   Float_t         m1SIP2D;
   Float_t         m1SIP3D;
   Float_t         m1SegmentCompatibility;
   Float_t         m1SoftCutBasedId;
   Float_t         m1TkIsoLoose;
   Float_t         m1TkIsoTight;
   Float_t         m1TkLayersWithMeasurement;
   Float_t         m1TrkIsoDR03;
   Float_t         m1TrkKink;
   Int_t           m1TypeCode;
   Float_t         m1VZ;
   Float_t         m1ValidFraction;
   Float_t         m1ZTTGenMatching;
   Float_t         m1_m2_DR;
   Float_t         m1_m2_Mass;
   Float_t         m1_m2_doubleL1IsoTauMatch;
   Float_t         m1_m3_DR;
   Float_t         m1_m3_Mass;
   Float_t         m1_m3_doubleL1IsoTauMatch;
   Float_t         m2BestTrackType;
   Float_t         m2Charge;
   Float_t         m2Chi2LocalPosition;
   Float_t         m2ComesFromHiggs;
   Float_t         m2CutBasedIdGlobalHighPt;
   Float_t         m2CutBasedIdLoose;
   Float_t         m2CutBasedIdMedium;
   Float_t         m2CutBasedIdMediumPrompt;
   Float_t         m2CutBasedIdTight;
   Float_t         m2CutBasedIdTrkHighPt;
   Float_t         m2EcalIsoDR03;
   Float_t         m2EffectiveArea2011;
   Float_t         m2EffectiveArea2012;
   Float_t         m2Eta;
   Float_t         m2Eta_MuonEnDown;
   Float_t         m2Eta_MuonEnUp;
   Float_t         m2GenCharge;
   Float_t         m2GenDirectPromptTauDecayFinalState;
   Float_t         m2GenEnergy;
   Float_t         m2GenEta;
   Float_t         m2GenIsPrompt;
   Float_t         m2GenMotherPdgId;
   Float_t         m2GenParticle;
   Float_t         m2GenPdgId;
   Float_t         m2GenPhi;
   Float_t         m2GenPrompt;
   Float_t         m2GenPromptFinalState;
   Float_t         m2GenPromptTauDecay;
   Float_t         m2GenPt;
   Float_t         m2GenTauDecay;
   Float_t         m2GenVZ;
   Float_t         m2GenVtxPVMatch;
   Float_t         m2HcalIsoDR03;
   Float_t         m2IP3D;
   Float_t         m2IP3DErr;
   Float_t         m2IsGlobal;
   Float_t         m2IsPFMuon;
   Float_t         m2IsTracker;
   Float_t         m2IsoDB03;
   Float_t         m2IsoDB04;
   Float_t         m2JetArea;
   Float_t         m2JetBtag;
   Float_t         m2JetDR;
   Float_t         m2JetEtaEtaMoment;
   Float_t         m2JetEtaPhiMoment;
   Float_t         m2JetEtaPhiSpread;
   Float_t         m2JetHadronFlavour;
   Float_t         m2JetPFCISVBtag;
   Float_t         m2JetPartonFlavour;
   Float_t         m2JetPhiPhiMoment;
   Float_t         m2JetPt;
   Float_t         m2LowestMll;
   Float_t         m2Mass;
   Float_t         m2MatchEmbeddedFilterMu19Tau20_2016;
   Float_t         m2MatchEmbeddedFilterMu20Tau27_2017;
   Float_t         m2MatchEmbeddedFilterMu20Tau27_2018;
   Float_t         m2MatchEmbeddedFilterMu24;
   Float_t         m2MatchEmbeddedFilterMu27;
   Float_t         m2MatchedStations;
   Float_t         m2MatchesIsoMu19Tau20Filter;
   Float_t         m2MatchesIsoMu19Tau20Path;
   Float_t         m2MatchesIsoMu19Tau20SingleL1Filter;
   Float_t         m2MatchesIsoMu19Tau20SingleL1Path;
   Float_t         m2MatchesIsoMu20HPSTau27Filter;
   Float_t         m2MatchesIsoMu20HPSTau27Path;
   Float_t         m2MatchesIsoMu20Tau27Filter;
   Float_t         m2MatchesIsoMu20Tau27Path;
   Float_t         m2MatchesIsoMu22Filter;
   Float_t         m2MatchesIsoMu22Path;
   Float_t         m2MatchesIsoMu22eta2p1Filter;
   Float_t         m2MatchesIsoMu22eta2p1Path;
   Float_t         m2MatchesIsoMu24Filter;
   Float_t         m2MatchesIsoMu24Path;
   Float_t         m2MatchesIsoMu27Filter;
   Float_t         m2MatchesIsoMu27Path;
   Float_t         m2MatchesIsoTkMu22Filter;
   Float_t         m2MatchesIsoTkMu22Path;
   Float_t         m2MatchesIsoTkMu22eta2p1Filter;
   Float_t         m2MatchesIsoTkMu22eta2p1Path;
   Float_t         m2MatchesMu23e12DZFilter;
   Float_t         m2MatchesMu23e12DZPath;
   Float_t         m2MatchesMu23e12Filter;
   Float_t         m2MatchesMu23e12Path;
   Float_t         m2MatchesMu8e23DZFilter;
   Float_t         m2MatchesMu8e23DZPath;
   Float_t         m2MatchesMu8e23Filter;
   Float_t         m2MatchesMu8e23Path;
   Float_t         m2MiniIsoLoose;
   Float_t         m2MiniIsoMedium;
   Float_t         m2MiniIsoTight;
   Float_t         m2MiniIsoVeryTight;
   Float_t         m2MuonHits;
   Float_t         m2MvaLoose;
   Float_t         m2MvaMedium;
   Float_t         m2MvaTight;
   Float_t         m2NearestZMass;
   Float_t         m2NormTrkChi2;
   Float_t         m2NormalizedChi2;
   Float_t         m2PFChargedHadronIsoR04;
   Float_t         m2PFChargedIso;
   Float_t         m2PFIDLoose;
   Float_t         m2PFIDMedium;
   Float_t         m2PFIDTight;
   Float_t         m2PFIsoLoose;
   Float_t         m2PFIsoMedium;
   Float_t         m2PFIsoTight;
   Float_t         m2PFIsoVeryLoose;
   Float_t         m2PFIsoVeryTight;
   Float_t         m2PFNeutralHadronIsoR04;
   Float_t         m2PFNeutralIso;
   Float_t         m2PFPUChargedIso;
   Float_t         m2PFPhotonIso;
   Float_t         m2PFPhotonIsoR04;
   Float_t         m2PFPileupIsoR04;
   Float_t         m2PVDXY;
   Float_t         m2PVDZ;
   Float_t         m2Phi;
   Float_t         m2Phi_MuonEnDown;
   Float_t         m2Phi_MuonEnUp;
   Float_t         m2PixHits;
   Float_t         m2Pt;
   Float_t         m2Pt_MuonEnDown;
   Float_t         m2Pt_MuonEnUp;
   Float_t         m2RelPFIsoDBDefault;
   Float_t         m2RelPFIsoDBDefaultR04;
   Float_t         m2RelPFIsoRho;
   Float_t         m2Rho;
   Float_t         m2SIP2D;
   Float_t         m2SIP3D;
   Float_t         m2SegmentCompatibility;
   Float_t         m2SoftCutBasedId;
   Float_t         m2TkIsoLoose;
   Float_t         m2TkIsoTight;
   Float_t         m2TkLayersWithMeasurement;
   Float_t         m2TrkIsoDR03;
   Float_t         m2TrkKink;
   Int_t           m2TypeCode;
   Float_t         m2VZ;
   Float_t         m2ValidFraction;
   Float_t         m2ZTTGenMatching;
   Float_t         m2_m3_DR;
   Float_t         m2_m3_Mass;
   Float_t         m2_m3_doubleL1IsoTauMatch;
   Float_t         m3BestTrackType;
   Float_t         m3Charge;
   Float_t         m3Chi2LocalPosition;
   Float_t         m3ComesFromHiggs;
   Float_t         m3CutBasedIdGlobalHighPt;
   Float_t         m3CutBasedIdLoose;
   Float_t         m3CutBasedIdMedium;
   Float_t         m3CutBasedIdMediumPrompt;
   Float_t         m3CutBasedIdTight;
   Float_t         m3CutBasedIdTrkHighPt;
   Float_t         m3EcalIsoDR03;
   Float_t         m3EffectiveArea2011;
   Float_t         m3EffectiveArea2012;
   Float_t         m3Eta;
   Float_t         m3Eta_MuonEnDown;
   Float_t         m3Eta_MuonEnUp;
   Float_t         m3GenCharge;
   Float_t         m3GenDirectPromptTauDecayFinalState;
   Float_t         m3GenEnergy;
   Float_t         m3GenEta;
   Float_t         m3GenIsPrompt;
   Float_t         m3GenMotherPdgId;
   Float_t         m3GenParticle;
   Float_t         m3GenPdgId;
   Float_t         m3GenPhi;
   Float_t         m3GenPrompt;
   Float_t         m3GenPromptFinalState;
   Float_t         m3GenPromptTauDecay;
   Float_t         m3GenPt;
   Float_t         m3GenTauDecay;
   Float_t         m3GenVZ;
   Float_t         m3GenVtxPVMatch;
   Float_t         m3HcalIsoDR03;
   Float_t         m3IP3D;
   Float_t         m3IP3DErr;
   Float_t         m3IsGlobal;
   Float_t         m3IsPFMuon;
   Float_t         m3IsTracker;
   Float_t         m3IsoDB03;
   Float_t         m3IsoDB04;
   Float_t         m3JetArea;
   Float_t         m3JetBtag;
   Float_t         m3JetDR;
   Float_t         m3JetEtaEtaMoment;
   Float_t         m3JetEtaPhiMoment;
   Float_t         m3JetEtaPhiSpread;
   Float_t         m3JetHadronFlavour;
   Float_t         m3JetPFCISVBtag;
   Float_t         m3JetPartonFlavour;
   Float_t         m3JetPhiPhiMoment;
   Float_t         m3JetPt;
   Float_t         m3LowestMll;
   Float_t         m3Mass;
   Float_t         m3MatchEmbeddedFilterMu19Tau20_2016;
   Float_t         m3MatchEmbeddedFilterMu20Tau27_2017;
   Float_t         m3MatchEmbeddedFilterMu20Tau27_2018;
   Float_t         m3MatchEmbeddedFilterMu24;
   Float_t         m3MatchEmbeddedFilterMu27;
   Float_t         m3MatchedStations;
   Float_t         m3MatchesIsoMu19Tau20Filter;
   Float_t         m3MatchesIsoMu19Tau20Path;
   Float_t         m3MatchesIsoMu19Tau20SingleL1Filter;
   Float_t         m3MatchesIsoMu19Tau20SingleL1Path;
   Float_t         m3MatchesIsoMu20HPSTau27Filter;
   Float_t         m3MatchesIsoMu20HPSTau27Path;
   Float_t         m3MatchesIsoMu20Tau27Filter;
   Float_t         m3MatchesIsoMu20Tau27Path;
   Float_t         m3MatchesIsoMu22Filter;
   Float_t         m3MatchesIsoMu22Path;
   Float_t         m3MatchesIsoMu22eta2p1Filter;
   Float_t         m3MatchesIsoMu22eta2p1Path;
   Float_t         m3MatchesIsoMu24Filter;
   Float_t         m3MatchesIsoMu24Path;
   Float_t         m3MatchesIsoMu27Filter;
   Float_t         m3MatchesIsoMu27Path;
   Float_t         m3MatchesIsoTkMu22Filter;
   Float_t         m3MatchesIsoTkMu22Path;
   Float_t         m3MatchesIsoTkMu22eta2p1Filter;
   Float_t         m3MatchesIsoTkMu22eta2p1Path;
   Float_t         m3MatchesMu23e12DZFilter;
   Float_t         m3MatchesMu23e12DZPath;
   Float_t         m3MatchesMu23e12Filter;
   Float_t         m3MatchesMu23e12Path;
   Float_t         m3MatchesMu8e23DZFilter;
   Float_t         m3MatchesMu8e23DZPath;
   Float_t         m3MatchesMu8e23Filter;
   Float_t         m3MatchesMu8e23Path;
   Float_t         m3MiniIsoLoose;
   Float_t         m3MiniIsoMedium;
   Float_t         m3MiniIsoTight;
   Float_t         m3MiniIsoVeryTight;
   Float_t         m3MuonHits;
   Float_t         m3MvaLoose;
   Float_t         m3MvaMedium;
   Float_t         m3MvaTight;
   Float_t         m3NearestZMass;
   Float_t         m3NormTrkChi2;
   Float_t         m3NormalizedChi2;
   Float_t         m3PFChargedHadronIsoR04;
   Float_t         m3PFChargedIso;
   Float_t         m3PFIDLoose;
   Float_t         m3PFIDMedium;
   Float_t         m3PFIDTight;
   Float_t         m3PFIsoLoose;
   Float_t         m3PFIsoMedium;
   Float_t         m3PFIsoTight;
   Float_t         m3PFIsoVeryLoose;
   Float_t         m3PFIsoVeryTight;
   Float_t         m3PFNeutralHadronIsoR04;
   Float_t         m3PFNeutralIso;
   Float_t         m3PFPUChargedIso;
   Float_t         m3PFPhotonIso;
   Float_t         m3PFPhotonIsoR04;
   Float_t         m3PFPileupIsoR04;
   Float_t         m3PVDXY;
   Float_t         m3PVDZ;
   Float_t         m3Phi;
   Float_t         m3Phi_MuonEnDown;
   Float_t         m3Phi_MuonEnUp;
   Float_t         m3PixHits;
   Float_t         m3Pt;
   Float_t         m3Pt_MuonEnDown;
   Float_t         m3Pt_MuonEnUp;
   Float_t         m3RelPFIsoDBDefault;
   Float_t         m3RelPFIsoDBDefaultR04;
   Float_t         m3RelPFIsoRho;
   Float_t         m3Rho;
   Float_t         m3SIP2D;
   Float_t         m3SIP3D;
   Float_t         m3SegmentCompatibility;
   Float_t         m3SoftCutBasedId;
   Float_t         m3TkIsoLoose;
   Float_t         m3TkIsoTight;
   Float_t         m3TkLayersWithMeasurement;
   Float_t         m3TrkIsoDR03;
   Float_t         m3TrkKink;
   Int_t           m3TypeCode;
   Float_t         m3VZ;
   Float_t         m3ValidFraction;
   Float_t         m3ZTTGenMatching;
   Float_t         metSig;
   Float_t         metcov00;
   Float_t         metcov01;
   Float_t         metcov10;
   Float_t         metcov11;
   Float_t         mu12e23DZPass;
   Float_t         mu12e23Pass;
   Float_t         mu23e12DZPass;
   Float_t         mu23e12Pass;
   Float_t         mu8diele12DZPass;
   Float_t         mu8diele12Pass;
   Float_t         mu8e23DZPass;
   Float_t         mu8e23Pass;
   Float_t         muGlbIsoVetoPt10;
   Float_t         muVeto5;
   Float_t         muVetoZTTp001dxyz;
   Float_t         muVetoZTTp001dxyzR0;
   Float_t         nTruePU;
   Float_t         npNLO;
   Float_t         numGenJets;
   Float_t         nvtx;
   Float_t         prefiring_weight;
   Float_t         prefiring_weight_down;
   Float_t         prefiring_weight_up;
   Float_t         processID;
   Float_t         puppiMetEt;
   Float_t         puppiMetPhi;
   Float_t         puppiMet_shiftedPhi_JetAbsoluteDown;
   Float_t         puppiMet_shiftedPhi_JetAbsoluteUp;
   Float_t         puppiMet_shiftedPhi_JetAbsoluteyearDown;
   Float_t         puppiMet_shiftedPhi_JetAbsoluteyearUp;
   Float_t         puppiMet_shiftedPhi_JetBBEC1Down;
   Float_t         puppiMet_shiftedPhi_JetBBEC1Up;
   Float_t         puppiMet_shiftedPhi_JetBBEC1yearDown;
   Float_t         puppiMet_shiftedPhi_JetBBEC1yearUp;
   Float_t         puppiMet_shiftedPhi_JetEC2Down;
   Float_t         puppiMet_shiftedPhi_JetEC2Up;
   Float_t         puppiMet_shiftedPhi_JetEC2yearDown;
   Float_t         puppiMet_shiftedPhi_JetEC2yearUp;
   Float_t         puppiMet_shiftedPhi_JetEnDown;
   Float_t         puppiMet_shiftedPhi_JetEnUp;
   Float_t         puppiMet_shiftedPhi_JetFlavorQCDDown;
   Float_t         puppiMet_shiftedPhi_JetFlavorQCDUp;
   Float_t         puppiMet_shiftedPhi_JetHFDown;
   Float_t         puppiMet_shiftedPhi_JetHFUp;
   Float_t         puppiMet_shiftedPhi_JetHFyearDown;
   Float_t         puppiMet_shiftedPhi_JetHFyearUp;
   Float_t         puppiMet_shiftedPhi_JetRelativeBalDown;
   Float_t         puppiMet_shiftedPhi_JetRelativeBalUp;
   Float_t         puppiMet_shiftedPhi_JetRelativeSampleDown;
   Float_t         puppiMet_shiftedPhi_JetRelativeSampleUp;
   Float_t         puppiMet_shiftedPhi_JetTotalDown;
   Float_t         puppiMet_shiftedPhi_JetTotalUp;
   Float_t         puppiMet_shiftedPhi_UnclusteredEnDown;
   Float_t         puppiMet_shiftedPhi_UnclusteredEnUp;
   Float_t         puppiMet_shiftedPt_JetAbsoluteDown;
   Float_t         puppiMet_shiftedPt_JetAbsoluteUp;
   Float_t         puppiMet_shiftedPt_JetAbsoluteyearDown;
   Float_t         puppiMet_shiftedPt_JetAbsoluteyearUp;
   Float_t         puppiMet_shiftedPt_JetBBEC1Down;
   Float_t         puppiMet_shiftedPt_JetBBEC1Up;
   Float_t         puppiMet_shiftedPt_JetBBEC1yearDown;
   Float_t         puppiMet_shiftedPt_JetBBEC1yearUp;
   Float_t         puppiMet_shiftedPt_JetEC2Down;
   Float_t         puppiMet_shiftedPt_JetEC2Up;
   Float_t         puppiMet_shiftedPt_JetEC2yearDown;
   Float_t         puppiMet_shiftedPt_JetEC2yearUp;
   Float_t         puppiMet_shiftedPt_JetEnDown;
   Float_t         puppiMet_shiftedPt_JetEnUp;
   Float_t         puppiMet_shiftedPt_JetFlavorQCDDown;
   Float_t         puppiMet_shiftedPt_JetFlavorQCDUp;
   Float_t         puppiMet_shiftedPt_JetHFDown;
   Float_t         puppiMet_shiftedPt_JetHFUp;
   Float_t         puppiMet_shiftedPt_JetHFyearDown;
   Float_t         puppiMet_shiftedPt_JetHFyearUp;
   Float_t         puppiMet_shiftedPt_JetRelativeBalDown;
   Float_t         puppiMet_shiftedPt_JetRelativeBalUp;
   Float_t         puppiMet_shiftedPt_JetRelativeSampleDown;
   Float_t         puppiMet_shiftedPt_JetRelativeSampleUp;
   Float_t         puppiMet_shiftedPt_JetTotalDown;
   Float_t         puppiMet_shiftedPt_JetTotalUp;
   Float_t         puppiMet_shiftedPt_UnclusteredEnDown;
   Float_t         puppiMet_shiftedPt_UnclusteredEnUp;
   Float_t         puppimetcov00;
   Float_t         puppimetcov01;
   Float_t         puppimetcov10;
   Float_t         puppimetcov11;
   Float_t         pvChi2;
   Float_t         pvDX;
   Float_t         pvDY;
   Float_t         pvDZ;
   Int_t           pvIsFake;
   Int_t           pvIsValid;
   Float_t         pvNormChi2;
   Float_t         pvRho;
   Float_t         pvX;
   Float_t         pvY;
   Float_t         pvZ;
   Float_t         pvndof;
   Float_t         raw_pfMetEt;
   Float_t         raw_pfMetPhi;
   Float_t         recoilDaught;
   Float_t         recoilWithMet;
   Float_t         rho;
   Int_t           run;
   Float_t         singleE25eta2p1TightPass;
   Float_t         singleIsoMu22Pass;
   Float_t         singleIsoMu22eta2p1Pass;
   Float_t         singleIsoTkMu22Pass;
   Float_t         singleIsoTkMu22eta2p1Pass;
   Float_t         singleMu19eta2p1LooseTau20Pass;
   Float_t         singleMu19eta2p1LooseTau20singleL1Pass;
   Float_t         tauVetoPt20Loose3HitsVtx;
   Float_t         tauVetoPt20TightMVALTVtx;
   Float_t         topQuarkPt1;
   Float_t         topQuarkPt2;
   Float_t         tripleEPass;
   Float_t         tripleMu10_5_5Pass;
   Float_t         tripleMu12_10_5Pass;
   Float_t         type1_pfMetEt;
   Float_t         type1_pfMetPhi;
   Float_t         type1_pfMet_shiftedPhi_JERDown;
   Float_t         type1_pfMet_shiftedPhi_JERUp;
   Float_t         type1_pfMet_shiftedPhi_JetAbsoluteDown;
   Float_t         type1_pfMet_shiftedPhi_JetAbsoluteUp;
   Float_t         type1_pfMet_shiftedPhi_JetAbsoluteyearDown;
   Float_t         type1_pfMet_shiftedPhi_JetAbsoluteyearUp;
   Float_t         type1_pfMet_shiftedPhi_JetBBEC1Down;
   Float_t         type1_pfMet_shiftedPhi_JetBBEC1Up;
   Float_t         type1_pfMet_shiftedPhi_JetBBEC1yearDown;
   Float_t         type1_pfMet_shiftedPhi_JetBBEC1yearUp;
   Float_t         type1_pfMet_shiftedPhi_JetEC2Down;
   Float_t         type1_pfMet_shiftedPhi_JetEC2Up;
   Float_t         type1_pfMet_shiftedPhi_JetEC2yearDown;
   Float_t         type1_pfMet_shiftedPhi_JetEC2yearUp;
   Float_t         type1_pfMet_shiftedPhi_JetEnDown;
   Float_t         type1_pfMet_shiftedPhi_JetEnUp;
   Float_t         type1_pfMet_shiftedPhi_JetFlavorQCDDown;
   Float_t         type1_pfMet_shiftedPhi_JetFlavorQCDUp;
   Float_t         type1_pfMet_shiftedPhi_JetHFDown;
   Float_t         type1_pfMet_shiftedPhi_JetHFUp;
   Float_t         type1_pfMet_shiftedPhi_JetHFyearDown;
   Float_t         type1_pfMet_shiftedPhi_JetHFyearUp;
   Float_t         type1_pfMet_shiftedPhi_JetRelativeBalDown;
   Float_t         type1_pfMet_shiftedPhi_JetRelativeBalUp;
   Float_t         type1_pfMet_shiftedPhi_JetRelativeSampleDown;
   Float_t         type1_pfMet_shiftedPhi_JetRelativeSampleUp;
   Float_t         type1_pfMet_shiftedPhi_JetResDown;
   Float_t         type1_pfMet_shiftedPhi_JetResUp;
   Float_t         type1_pfMet_shiftedPhi_JetTotalDown;
   Float_t         type1_pfMet_shiftedPhi_JetTotalUp;
   Float_t         type1_pfMet_shiftedPhi_UnclusteredEnDown;
   Float_t         type1_pfMet_shiftedPhi_UnclusteredEnUp;
   Float_t         type1_pfMet_shiftedPt_JERDown;
   Float_t         type1_pfMet_shiftedPt_JERUp;
   Float_t         type1_pfMet_shiftedPt_JetAbsoluteDown;
   Float_t         type1_pfMet_shiftedPt_JetAbsoluteUp;
   Float_t         type1_pfMet_shiftedPt_JetAbsoluteyearDown;
   Float_t         type1_pfMet_shiftedPt_JetAbsoluteyearUp;
   Float_t         type1_pfMet_shiftedPt_JetBBEC1Down;
   Float_t         type1_pfMet_shiftedPt_JetBBEC1Up;
   Float_t         type1_pfMet_shiftedPt_JetBBEC1yearDown;
   Float_t         type1_pfMet_shiftedPt_JetBBEC1yearUp;
   Float_t         type1_pfMet_shiftedPt_JetEC2Down;
   Float_t         type1_pfMet_shiftedPt_JetEC2Up;
   Float_t         type1_pfMet_shiftedPt_JetEC2yearDown;
   Float_t         type1_pfMet_shiftedPt_JetEC2yearUp;
   Float_t         type1_pfMet_shiftedPt_JetEnDown;
   Float_t         type1_pfMet_shiftedPt_JetEnUp;
   Float_t         type1_pfMet_shiftedPt_JetFlavorQCDDown;
   Float_t         type1_pfMet_shiftedPt_JetFlavorQCDUp;
   Float_t         type1_pfMet_shiftedPt_JetHFDown;
   Float_t         type1_pfMet_shiftedPt_JetHFUp;
   Float_t         type1_pfMet_shiftedPt_JetHFyearDown;
   Float_t         type1_pfMet_shiftedPt_JetHFyearUp;
   Float_t         type1_pfMet_shiftedPt_JetRelativeBalDown;
   Float_t         type1_pfMet_shiftedPt_JetRelativeBalUp;
   Float_t         type1_pfMet_shiftedPt_JetRelativeSampleDown;
   Float_t         type1_pfMet_shiftedPt_JetRelativeSampleUp;
   Float_t         type1_pfMet_shiftedPt_JetResDown;
   Float_t         type1_pfMet_shiftedPt_JetResUp;
   Float_t         type1_pfMet_shiftedPt_JetTotalDown;
   Float_t         type1_pfMet_shiftedPt_JetTotalUp;
   Float_t         type1_pfMet_shiftedPt_UnclusteredEnDown;
   Float_t         type1_pfMet_shiftedPt_UnclusteredEnUp;
   Float_t         vbfDeta;
   Float_t         vbfJetVeto20;
   Float_t         vbfJetVeto30;
   Float_t         vbfMass;
   Float_t         vbfMassWoNoisyJets;
   Float_t         vbfMassWoNoisyJets_JERDown;
   Float_t         vbfMassWoNoisyJets_JERUp;
   Float_t         vbfMassWoNoisyJets_JetAbsoluteDown;
   Float_t         vbfMassWoNoisyJets_JetAbsoluteUp;
   Float_t         vbfMassWoNoisyJets_JetAbsoluteyearDown;
   Float_t         vbfMassWoNoisyJets_JetAbsoluteyearUp;
   Float_t         vbfMassWoNoisyJets_JetBBEC1Down;
   Float_t         vbfMassWoNoisyJets_JetBBEC1Up;
   Float_t         vbfMassWoNoisyJets_JetBBEC1yearDown;
   Float_t         vbfMassWoNoisyJets_JetBBEC1yearUp;
   Float_t         vbfMassWoNoisyJets_JetEC2Down;
   Float_t         vbfMassWoNoisyJets_JetEC2Up;
   Float_t         vbfMassWoNoisyJets_JetEC2yearDown;
   Float_t         vbfMassWoNoisyJets_JetEC2yearUp;
   Float_t         vbfMassWoNoisyJets_JetFlavorQCDDown;
   Float_t         vbfMassWoNoisyJets_JetFlavorQCDUp;
   Float_t         vbfMassWoNoisyJets_JetHFDown;
   Float_t         vbfMassWoNoisyJets_JetHFUp;
   Float_t         vbfMassWoNoisyJets_JetHFyearDown;
   Float_t         vbfMassWoNoisyJets_JetHFyearUp;
   Float_t         vbfMassWoNoisyJets_JetRelativeBalDown;
   Float_t         vbfMassWoNoisyJets_JetRelativeBalUp;
   Float_t         vbfMassWoNoisyJets_JetRelativeSampleDown;
   Float_t         vbfMassWoNoisyJets_JetRelativeSampleUp;
   Float_t         vbfMassWoNoisyJets_JetTotalDown;
   Float_t         vbfMassWoNoisyJets_JetTotalUp;
   Float_t         vbfMass_JERDown;
   Float_t         vbfMass_JERUp;
   Float_t         vbfMass_JetAbsoluteDown;
   Float_t         vbfMass_JetAbsoluteUp;
   Float_t         vbfMass_JetAbsoluteyearDown;
   Float_t         vbfMass_JetAbsoluteyearUp;
   Float_t         vbfMass_JetBBEC1Down;
   Float_t         vbfMass_JetBBEC1Up;
   Float_t         vbfMass_JetBBEC1yearDown;
   Float_t         vbfMass_JetBBEC1yearUp;
   Float_t         vbfMass_JetEC2Down;
   Float_t         vbfMass_JetEC2Up;
   Float_t         vbfMass_JetEC2yearDown;
   Float_t         vbfMass_JetEC2yearUp;
   Float_t         vbfMass_JetFlavorQCDDown;
   Float_t         vbfMass_JetFlavorQCDUp;
   Float_t         vbfMass_JetHFDown;
   Float_t         vbfMass_JetHFUp;
   Float_t         vbfMass_JetHFyearDown;
   Float_t         vbfMass_JetHFyearUp;
   Float_t         vbfMass_JetRelativeBalDown;
   Float_t         vbfMass_JetRelativeBalUp;
   Float_t         vbfMass_JetRelativeSampleDown;
   Float_t         vbfMass_JetRelativeSampleUp;
   Float_t         vbfMass_JetTotalDown;
   Float_t         vbfMass_JetTotalUp;
   Float_t         vbfNJets20;
   Float_t         vbfNJets30;
   Float_t         vbfj1eta;
   Float_t         vbfj1pt;
   Float_t         vbfj2eta;
   Float_t         vbfj2pt;
   Float_t         vispX;
   Float_t         vispY;
   Int_t           idx;

   // List of branches
   TBranch        *b_DoubleMediumHPSTau35Pass;   //!
   TBranch        *b_DoubleMediumHPSTau35TightIDPass;   //!
   TBranch        *b_DoubleMediumHPSTau40Pass;   //!
   TBranch        *b_DoubleMediumHPSTau40TightIDPass;   //!
   TBranch        *b_DoubleMediumTau35Pass;   //!
   TBranch        *b_DoubleMediumTau35TightIDPass;   //!
   TBranch        *b_DoubleMediumTau40Pass;   //!
   TBranch        *b_DoubleMediumTau40TightIDPass;   //!
   TBranch        *b_DoubleTightHPSTau35Pass;   //!
   TBranch        *b_DoubleTightHPSTau35TightIDPass;   //!
   TBranch        *b_DoubleTightHPSTau40Pass;   //!
   TBranch        *b_DoubleTightHPSTau40TightIDPass;   //!
   TBranch        *b_DoubleTightTau35Pass;   //!
   TBranch        *b_DoubleTightTau35TightIDPass;   //!
   TBranch        *b_DoubleTightTau40Pass;   //!
   TBranch        *b_DoubleTightTau40TightIDPass;   //!
   TBranch        *b_Ele24LooseHPSTau30Pass;   //!
   TBranch        *b_Ele24LooseHPSTau30TightIDPass;   //!
   TBranch        *b_Ele24LooseTau30Pass;   //!
   TBranch        *b_Ele24LooseTau30TightIDPass;   //!
   TBranch        *b_Ele27WPTightPass;   //!
   TBranch        *b_Ele32WPTightPass;   //!
   TBranch        *b_Ele35WPTightPass;   //!
   TBranch        *b_Ele38WPTightPass;   //!
   TBranch        *b_Ele40WPTightPass;   //!
   TBranch        *b_EmbPtWeight;   //!
   TBranch        *b_Eta;   //!
   TBranch        *b_Flag_BadChargedCandidateFilter;   //!
   TBranch        *b_Flag_BadPFMuonFilter;   //!
   TBranch        *b_Flag_EcalDeadCellTriggerPrimitiveFilter;   //!
   TBranch        *b_Flag_HBHENoiseFilter;   //!
   TBranch        *b_Flag_HBHENoiseIsoFilter;   //!
   TBranch        *b_Flag_badMuons;   //!
   TBranch        *b_Flag_duplicateMuons;   //!
   TBranch        *b_Flag_ecalBadCalibFilter;   //!
   TBranch        *b_Flag_ecalBadCalibReducedMINIAODFilter;   //!
   TBranch        *b_Flag_eeBadScFilter;   //!
   TBranch        *b_Flag_globalSuperTightHalo2016Filter;   //!
   TBranch        *b_Flag_globalTightHalo2016Filter;   //!
   TBranch        *b_Flag_goodVertices;   //!
   TBranch        *b_GenWeight;   //!
   TBranch        *b_Ht;   //!
   TBranch        *b_IsoMu24Pass;   //!
   TBranch        *b_IsoMu27Pass;   //!
   TBranch        *b_LT;   //!
   TBranch        *b_Mass;   //!
   TBranch        *b_MassError;   //!
   TBranch        *b_MassErrord1;   //!
   TBranch        *b_MassErrord2;   //!
   TBranch        *b_MassErrord3;   //!
   TBranch        *b_MassErrord4;   //!
   TBranch        *b_Mt;   //!
   TBranch        *b_Mu20LooseHPSTau27Pass;   //!
   TBranch        *b_Mu20LooseHPSTau27TightIDPass;   //!
   TBranch        *b_Mu20LooseTau27Pass;   //!
   TBranch        *b_Mu20LooseTau27TightIDPass;   //!
   TBranch        *b_Mu50Pass;   //!
   TBranch        *b_NUP;   //!
   TBranch        *b_Phi;   //!
   TBranch        *b_Pt;   //!
   TBranch        *b_PythiaWeight_fsr_muR0p25;   //!
   TBranch        *b_PythiaWeight_fsr_muR0p5;   //!
   TBranch        *b_PythiaWeight_fsr_muR2;   //!
   TBranch        *b_PythiaWeight_fsr_muR4;   //!
   TBranch        *b_PythiaWeight_isr_muR0p25;   //!
   TBranch        *b_PythiaWeight_isr_muR0p5;   //!
   TBranch        *b_PythiaWeight_isr_muR2;   //!
   TBranch        *b_PythiaWeight_isr_muR4;   //!
   TBranch        *b_Rivet_VEta;   //!
   TBranch        *b_Rivet_VPt;   //!
   TBranch        *b_Rivet_errorCode;   //!
   TBranch        *b_Rivet_higgsEta;   //!
   TBranch        *b_Rivet_higgsPt;   //!
   TBranch        *b_Rivet_higgsRapidity;   //!
   TBranch        *b_Rivet_j1eta;   //!
   TBranch        *b_Rivet_j1m;   //!
   TBranch        *b_Rivet_j1phi;   //!
   TBranch        *b_Rivet_j1pt;   //!
   TBranch        *b_Rivet_j2eta;   //!
   TBranch        *b_Rivet_j2m;   //!
   TBranch        *b_Rivet_j2phi;   //!
   TBranch        *b_Rivet_j2pt;   //!
   TBranch        *b_Rivet_nJets25;   //!
   TBranch        *b_Rivet_nJets30;   //!
   TBranch        *b_Rivet_p4decay_VEta;   //!
   TBranch        *b_Rivet_p4decay_VPt;   //!
   TBranch        *b_Rivet_prodMode;   //!
   TBranch        *b_Rivet_stage0_cat;   //!
   TBranch        *b_Rivet_stage1_1_cat_pTjet25GeV;   //!
   TBranch        *b_Rivet_stage1_1_cat_pTjet30GeV;   //!
   TBranch        *b_Rivet_stage1_1_fine_cat_pTjet25GeV;   //!
   TBranch        *b_Rivet_stage1_1_fine_cat_pTjet30GeV;   //!
   TBranch        *b_Rivet_stage1_cat_pTjet25GeV;   //!
   TBranch        *b_Rivet_stage1_cat_pTjet30GeV;   //!
   TBranch        *b_VBFDoubleLooseHPSTau20Pass;   //!
   TBranch        *b_VBFDoubleLooseTau20Pass;   //!
   TBranch        *b_VBFDoubleMediumHPSTau20Pass;   //!
   TBranch        *b_VBFDoubleMediumTau20Pass;   //!
   TBranch        *b_VBFDoubleTightHPSTau20Pass;   //!
   TBranch        *b_VBFDoubleTightTau20Pass;   //!
   TBranch        *b_bjetDeepCSVVeto20Loose_2016_DR0p5;   //!
   TBranch        *b_bjetDeepCSVVeto20Loose_2017_DR0p5;   //!
   TBranch        *b_bjetDeepCSVVeto20Loose_2018_DR0p5;   //!
   TBranch        *b_bjetDeepCSVVeto20Medium_2016_DR0;   //!
   TBranch        *b_bjetDeepCSVVeto20Medium_2016_DR0p5;   //!
   TBranch        *b_bjetDeepCSVVeto20Medium_2017_DR0;   //!
   TBranch        *b_bjetDeepCSVVeto20Medium_2017_DR0p5;   //!
   TBranch        *b_bjetDeepCSVVeto20Medium_2018_DR0;   //!
   TBranch        *b_bjetDeepCSVVeto20Medium_2018_DR0p5;   //!
   TBranch        *b_bjetDeepCSVVeto20Tight_2016_DR0p5;   //!
   TBranch        *b_bjetDeepCSVVeto20Tight_2017_DR0p5;   //!
   TBranch        *b_bjetDeepCSVVeto20Tight_2018_DR0p5;   //!
   TBranch        *b_bweight_2016;   //!
   TBranch        *b_bweight_2017;   //!
   TBranch        *b_bweight_2018;   //!
   TBranch        *b_charge;   //!
   TBranch        *b_dielectronVeto;   //!
   TBranch        *b_dimu9ele9Pass;   //!
   TBranch        *b_dimuonVeto;   //!
   TBranch        *b_doubleE25Pass;   //!
   TBranch        *b_doubleE33Pass;   //!
   TBranch        *b_doubleE_23_12Pass;   //!
   TBranch        *b_doubleMuDZminMass3p8Pass;   //!
   TBranch        *b_doubleMuDZminMass8Pass;   //!
   TBranch        *b_doubleMuSingleEPass;   //!
   TBranch        *b_doubleTau35Pass;   //!
   TBranch        *b_doubleTauCmbIso35RegPass;   //!
   TBranch        *b_eCBIDLoose;   //!
   TBranch        *b_eCBIDMedium;   //!
   TBranch        *b_eCBIDTight;   //!
   TBranch        *b_eCBIDVeto;   //!
   TBranch        *b_eCharge;   //!
   TBranch        *b_eChargeIdLoose;   //!
   TBranch        *b_eChargeIdMed;   //!
   TBranch        *b_eChargeIdTight;   //!
   TBranch        *b_eComesFromHiggs;   //!
   TBranch        *b_eCorrectedEt;   //!
   TBranch        *b_eE1x5;   //!
   TBranch        *b_eE2x5Max;   //!
   TBranch        *b_eE5x5;   //!
   TBranch        *b_eEcalIsoDR03;   //!
   TBranch        *b_eEnergyError;   //!
   TBranch        *b_eEnergyScaleDown;   //!
   TBranch        *b_eEnergyScaleGainDown;   //!
   TBranch        *b_eEnergyScaleGainUp;   //!
   TBranch        *b_eEnergyScaleStatDown;   //!
   TBranch        *b_eEnergyScaleStatUp;   //!
   TBranch        *b_eEnergyScaleSystDown;   //!
   TBranch        *b_eEnergyScaleSystUp;   //!
   TBranch        *b_eEnergyScaleUp;   //!
   TBranch        *b_eEnergySigmaDown;   //!
   TBranch        *b_eEnergySigmaPhiDown;   //!
   TBranch        *b_eEnergySigmaPhiUp;   //!
   TBranch        *b_eEnergySigmaRhoDown;   //!
   TBranch        *b_eEnergySigmaRhoUp;   //!
   TBranch        *b_eEnergySigmaUp;   //!
   TBranch        *b_eEta;   //!
   TBranch        *b_eGenCharge;   //!
   TBranch        *b_eGenDirectPromptTauDecay;   //!
   TBranch        *b_eGenEnergy;   //!
   TBranch        *b_eGenEta;   //!
   TBranch        *b_eGenIsPrompt;   //!
   TBranch        *b_eGenMotherPdgId;   //!
   TBranch        *b_eGenParticle;   //!
   TBranch        *b_eGenPdgId;   //!
   TBranch        *b_eGenPhi;   //!
   TBranch        *b_eGenPrompt;   //!
   TBranch        *b_eGenPromptTauDecay;   //!
   TBranch        *b_eGenPt;   //!
   TBranch        *b_eGenTauDecay;   //!
   TBranch        *b_eGenVZ;   //!
   TBranch        *b_eGenVtxPVMatch;   //!
   TBranch        *b_eHadronicDepth1OverEm;   //!
   TBranch        *b_eHadronicDepth2OverEm;   //!
   TBranch        *b_eHadronicOverEM;   //!
   TBranch        *b_eHcalIsoDR03;   //!
   TBranch        *b_eIP3D;   //!
   TBranch        *b_eIP3DErr;   //!
   TBranch        *b_eIsoDB03;   //!
   TBranch        *b_eJetArea;   //!
   TBranch        *b_eJetBtag;   //!
   TBranch        *b_eJetDR;   //!
   TBranch        *b_eJetEtaEtaMoment;   //!
   TBranch        *b_eJetEtaPhiMoment;   //!
   TBranch        *b_eJetEtaPhiSpread;   //!
   TBranch        *b_eJetHadronFlavour;   //!
   TBranch        *b_eJetPFCISVBtag;   //!
   TBranch        *b_eJetPartonFlavour;   //!
   TBranch        *b_eJetPhiPhiMoment;   //!
   TBranch        *b_eJetPt;   //!
   TBranch        *b_eLowestMll;   //!
   TBranch        *b_eMVAIsoWP80;   //!
   TBranch        *b_eMVAIsoWP90;   //!
   TBranch        *b_eMVAIsoWPHZZ;   //!
   TBranch        *b_eMVAIsoWPLoose;   //!
   TBranch        *b_eMVANoisoWP80;   //!
   TBranch        *b_eMVANoisoWP90;   //!
   TBranch        *b_eMVANoisoWPLoose;   //!
   TBranch        *b_eMass;   //!
   TBranch        *b_eMatchEmbeddedFilterEle24Tau30;   //!
   TBranch        *b_eMatchEmbeddedFilterEle27;   //!
   TBranch        *b_eMatchEmbeddedFilterEle32;   //!
   TBranch        *b_eMatchEmbeddedFilterEle32DoubleL1_v1;   //!
   TBranch        *b_eMatchEmbeddedFilterEle32DoubleL1_v2;   //!
   TBranch        *b_eMatchEmbeddedFilterEle35;   //!
   TBranch        *b_eMatchesEle24HPSTau30Filter;   //!
   TBranch        *b_eMatchesEle24HPSTau30Path;   //!
   TBranch        *b_eMatchesEle24Tau30Filter;   //!
   TBranch        *b_eMatchesEle24Tau30Path;   //!
   TBranch        *b_eMatchesEle25Filter;   //!
   TBranch        *b_eMatchesEle25Path;   //!
   TBranch        *b_eMatchesEle27Filter;   //!
   TBranch        *b_eMatchesEle27Path;   //!
   TBranch        *b_eMatchesEle32Filter;   //!
   TBranch        *b_eMatchesEle32Path;   //!
   TBranch        *b_eMatchesEle35Filter;   //!
   TBranch        *b_eMatchesEle35Path;   //!
   TBranch        *b_eMatchesMu23e12DZFilter;   //!
   TBranch        *b_eMatchesMu23e12DZPath;   //!
   TBranch        *b_eMatchesMu23e12Filter;   //!
   TBranch        *b_eMatchesMu23e12Path;   //!
   TBranch        *b_eMatchesMu8e23DZFilter;   //!
   TBranch        *b_eMatchesMu8e23DZPath;   //!
   TBranch        *b_eMatchesMu8e23Filter;   //!
   TBranch        *b_eMatchesMu8e23Path;   //!
   TBranch        *b_eMissingHits;   //!
   TBranch        *b_eNearMuonVeto;   //!
   TBranch        *b_eNearestMuonDR;   //!
   TBranch        *b_eNearestZMass;   //!
   TBranch        *b_ePFChargedIso;   //!
   TBranch        *b_ePFNeutralIso;   //!
   TBranch        *b_ePFPUChargedIso;   //!
   TBranch        *b_ePFPhotonIso;   //!
   TBranch        *b_ePVDXY;   //!
   TBranch        *b_ePVDZ;   //!
   TBranch        *b_ePassesConversionVeto;   //!
   TBranch        *b_ePhi;   //!
   TBranch        *b_ePt;   //!
   TBranch        *b_eRelIso;   //!
   TBranch        *b_eRelPFIsoDB;   //!
   TBranch        *b_eRelPFIsoRho;   //!
   TBranch        *b_eRho;   //!
   TBranch        *b_eSCEnergy;   //!
   TBranch        *b_eSCEta;   //!
   TBranch        *b_eSCEtaWidth;   //!
   TBranch        *b_eSCPhi;   //!
   TBranch        *b_eSCPhiWidth;   //!
   TBranch        *b_eSCPreshowerEnergy;   //!
   TBranch        *b_eSCRawEnergy;   //!
   TBranch        *b_eSIP2D;   //!
   TBranch        *b_eSIP3D;   //!
   TBranch        *b_eSigmaIEtaIEta;   //!
   TBranch        *b_eTrkIsoDR03;   //!
   TBranch        *b_eVZ;   //!
   TBranch        *b_eVetoHZZPt5;   //!
   TBranch        *b_eVetoZTTp001dxyz;   //!
   TBranch        *b_eVetoZTTp001dxyzR0;   //!
   TBranch        *b_eZTTGenMatching;   //!
   TBranch        *b_e_m1_DR;   //!
   TBranch        *b_e_m1_Mass;   //!
   TBranch        *b_e_m1_doubleL1IsoTauMatch;   //!
   TBranch        *b_e_m2_DR;   //!
   TBranch        *b_e_m2_Mass;   //!
   TBranch        *b_e_m2_doubleL1IsoTauMatch;   //!
   TBranch        *b_e_m3_DR;   //!
   TBranch        *b_e_m3_Mass;   //!
   TBranch        *b_e_m3_doubleL1IsoTauMatch;   //!
   TBranch        *b_edeltaEtaSuperClusterTrackAtVtx;   //!
   TBranch        *b_edeltaPhiSuperClusterTrackAtVtx;   //!
   TBranch        *b_eeSuperClusterOverP;   //!
   TBranch        *b_eecalEnergy;   //!
   TBranch        *b_efBrem;   //!
   TBranch        *b_etrackMomentumAtVtxP;   //!
   TBranch        *b_evt;   //!
   TBranch        *b_genEta;   //!
   TBranch        *b_genHTT;   //!
   TBranch        *b_genM;   //!
   TBranch        *b_genMass;   //!
   TBranch        *b_genPhi;   //!
   TBranch        *b_genpT;   //!
   TBranch        *b_genpX;   //!
   TBranch        *b_genpY;   //!
   TBranch        *b_gentau1_eta;   //!
   TBranch        *b_gentau1_pt;   //!
   TBranch        *b_gentau2_eta;   //!
   TBranch        *b_gentau2_pt;   //!
   TBranch        *b_isdata;   //!
   TBranch        *b_isembed;   //!
   TBranch        *b_j1csv;   //!
   TBranch        *b_j1csvWoNoisyJets;   //!
   TBranch        *b_j1eta;   //!
   TBranch        *b_j1etaWoNoisyJets;   //!
   TBranch        *b_j1hadronflavor;   //!
   TBranch        *b_j1hadronflavorWoNoisyJets;   //!
   TBranch        *b_j1phi;   //!
   TBranch        *b_j1phiWoNoisyJets;   //!
   TBranch        *b_j1pt;   //!
   TBranch        *b_j1ptWoNoisyJets;   //!
   TBranch        *b_j1ptWoNoisyJets_JERDown;   //!
   TBranch        *b_j1ptWoNoisyJets_JERUp;   //!
   TBranch        *b_j1ptWoNoisyJets_JetAbsoluteDown;   //!
   TBranch        *b_j1ptWoNoisyJets_JetAbsoluteUp;   //!
   TBranch        *b_j1ptWoNoisyJets_JetAbsoluteyearDown;   //!
   TBranch        *b_j1ptWoNoisyJets_JetAbsoluteyearUp;   //!
   TBranch        *b_j1ptWoNoisyJets_JetBBEC1Down;   //!
   TBranch        *b_j1ptWoNoisyJets_JetBBEC1Up;   //!
   TBranch        *b_j1ptWoNoisyJets_JetBBEC1yearDown;   //!
   TBranch        *b_j1ptWoNoisyJets_JetBBEC1yearUp;   //!
   TBranch        *b_j1ptWoNoisyJets_JetEC2Down;   //!
   TBranch        *b_j1ptWoNoisyJets_JetEC2Up;   //!
   TBranch        *b_j1ptWoNoisyJets_JetEC2yearDown;   //!
   TBranch        *b_j1ptWoNoisyJets_JetEC2yearUp;   //!
   TBranch        *b_j1ptWoNoisyJets_JetFlavorQCDDown;   //!
   TBranch        *b_j1ptWoNoisyJets_JetFlavorQCDUp;   //!
   TBranch        *b_j1ptWoNoisyJets_JetHFDown;   //!
   TBranch        *b_j1ptWoNoisyJets_JetHFUp;   //!
   TBranch        *b_j1ptWoNoisyJets_JetHFyearDown;   //!
   TBranch        *b_j1ptWoNoisyJets_JetHFyearUp;   //!
   TBranch        *b_j1ptWoNoisyJets_JetRelativeBalDown;   //!
   TBranch        *b_j1ptWoNoisyJets_JetRelativeBalUp;   //!
   TBranch        *b_j1ptWoNoisyJets_JetRelativeSampleDown;   //!
   TBranch        *b_j1ptWoNoisyJets_JetRelativeSampleUp;   //!
   TBranch        *b_j1pt_JERDown;   //!
   TBranch        *b_j1pt_JERUp;   //!
   TBranch        *b_j1pt_JetAbsoluteDown;   //!
   TBranch        *b_j1pt_JetAbsoluteUp;   //!
   TBranch        *b_j1pt_JetAbsoluteyearDown;   //!
   TBranch        *b_j1pt_JetAbsoluteyearUp;   //!
   TBranch        *b_j1pt_JetBBEC1Down;   //!
   TBranch        *b_j1pt_JetBBEC1Up;   //!
   TBranch        *b_j1pt_JetBBEC1yearDown;   //!
   TBranch        *b_j1pt_JetBBEC1yearUp;   //!
   TBranch        *b_j1pt_JetEC2Down;   //!
   TBranch        *b_j1pt_JetEC2Up;   //!
   TBranch        *b_j1pt_JetEC2yearDown;   //!
   TBranch        *b_j1pt_JetEC2yearUp;   //!
   TBranch        *b_j1pt_JetFlavorQCDDown;   //!
   TBranch        *b_j1pt_JetFlavorQCDUp;   //!
   TBranch        *b_j1pt_JetHFDown;   //!
   TBranch        *b_j1pt_JetHFUp;   //!
   TBranch        *b_j1pt_JetHFyearDown;   //!
   TBranch        *b_j1pt_JetHFyearUp;   //!
   TBranch        *b_j1pt_JetRelativeBalDown;   //!
   TBranch        *b_j1pt_JetRelativeBalUp;   //!
   TBranch        *b_j1pt_JetRelativeSampleDown;   //!
   TBranch        *b_j1pt_JetRelativeSampleUp;   //!
   TBranch        *b_j2csv;   //!
   TBranch        *b_j2csvWoNoisyJets;   //!
   TBranch        *b_j2eta;   //!
   TBranch        *b_j2etaWoNoisyJets;   //!
   TBranch        *b_j2hadronflavor;   //!
   TBranch        *b_j2hadronflavorWoNoisyJets;   //!
   TBranch        *b_j2phi;   //!
   TBranch        *b_j2phiWoNoisyJets;   //!
   TBranch        *b_j2pt;   //!
   TBranch        *b_j2ptWoNoisyJets;   //!
   TBranch        *b_j2ptWoNoisyJets_JERDown;   //!
   TBranch        *b_j2ptWoNoisyJets_JERUp;   //!
   TBranch        *b_j2ptWoNoisyJets_JetAbsoluteDown;   //!
   TBranch        *b_j2ptWoNoisyJets_JetAbsoluteUp;   //!
   TBranch        *b_j2ptWoNoisyJets_JetAbsoluteyearDown;   //!
   TBranch        *b_j2ptWoNoisyJets_JetAbsoluteyearUp;   //!
   TBranch        *b_j2ptWoNoisyJets_JetBBEC1Down;   //!
   TBranch        *b_j2ptWoNoisyJets_JetBBEC1Up;   //!
   TBranch        *b_j2ptWoNoisyJets_JetBBEC1yearDown;   //!
   TBranch        *b_j2ptWoNoisyJets_JetBBEC1yearUp;   //!
   TBranch        *b_j2ptWoNoisyJets_JetEC2Down;   //!
   TBranch        *b_j2ptWoNoisyJets_JetEC2Up;   //!
   TBranch        *b_j2ptWoNoisyJets_JetEC2yearDown;   //!
   TBranch        *b_j2ptWoNoisyJets_JetEC2yearUp;   //!
   TBranch        *b_j2ptWoNoisyJets_JetFlavorQCDDown;   //!
   TBranch        *b_j2ptWoNoisyJets_JetFlavorQCDUp;   //!
   TBranch        *b_j2ptWoNoisyJets_JetHFDown;   //!
   TBranch        *b_j2ptWoNoisyJets_JetHFUp;   //!
   TBranch        *b_j2ptWoNoisyJets_JetHFyearDown;   //!
   TBranch        *b_j2ptWoNoisyJets_JetHFyearUp;   //!
   TBranch        *b_j2ptWoNoisyJets_JetRelativeBalDown;   //!
   TBranch        *b_j2ptWoNoisyJets_JetRelativeBalUp;   //!
   TBranch        *b_j2ptWoNoisyJets_JetRelativeSampleDown;   //!
   TBranch        *b_j2ptWoNoisyJets_JetRelativeSampleUp;   //!
   TBranch        *b_j2pt_JERDown;   //!
   TBranch        *b_j2pt_JERUp;   //!
   TBranch        *b_j2pt_JetAbsoluteDown;   //!
   TBranch        *b_j2pt_JetAbsoluteUp;   //!
   TBranch        *b_j2pt_JetAbsoluteyearDown;   //!
   TBranch        *b_j2pt_JetAbsoluteyearUp;   //!
   TBranch        *b_j2pt_JetBBEC1Down;   //!
   TBranch        *b_j2pt_JetBBEC1Up;   //!
   TBranch        *b_j2pt_JetBBEC1yearDown;   //!
   TBranch        *b_j2pt_JetBBEC1yearUp;   //!
   TBranch        *b_j2pt_JetEC2Down;   //!
   TBranch        *b_j2pt_JetEC2Up;   //!
   TBranch        *b_j2pt_JetEC2yearDown;   //!
   TBranch        *b_j2pt_JetEC2yearUp;   //!
   TBranch        *b_j2pt_JetFlavorQCDDown;   //!
   TBranch        *b_j2pt_JetFlavorQCDUp;   //!
   TBranch        *b_j2pt_JetHFDown;   //!
   TBranch        *b_j2pt_JetHFUp;   //!
   TBranch        *b_j2pt_JetHFyearDown;   //!
   TBranch        *b_j2pt_JetHFyearUp;   //!
   TBranch        *b_j2pt_JetRelativeBalDown;   //!
   TBranch        *b_j2pt_JetRelativeBalUp;   //!
   TBranch        *b_j2pt_JetRelativeSampleDown;   //!
   TBranch        *b_j2pt_JetRelativeSampleUp;   //!
   TBranch        *b_jb1eta_2016;   //!
   TBranch        *b_jb1eta_2017;   //!
   TBranch        *b_jb1eta_2018;   //!
   TBranch        *b_jb1hadronflavor_2016;   //!
   TBranch        *b_jb1hadronflavor_2017;   //!
   TBranch        *b_jb1hadronflavor_2018;   //!
   TBranch        *b_jb1phi_2016;   //!
   TBranch        *b_jb1phi_2017;   //!
   TBranch        *b_jb1phi_2018;   //!
   TBranch        *b_jb1pt_2016;   //!
   TBranch        *b_jb1pt_2017;   //!
   TBranch        *b_jb1pt_2018;   //!
   TBranch        *b_jb2eta_2016;   //!
   TBranch        *b_jb2eta_2017;   //!
   TBranch        *b_jb2eta_2018;   //!
   TBranch        *b_jb2hadronflavor_2016;   //!
   TBranch        *b_jb2hadronflavor_2017;   //!
   TBranch        *b_jb2hadronflavor_2018;   //!
   TBranch        *b_jb2phi_2016;   //!
   TBranch        *b_jb2phi_2017;   //!
   TBranch        *b_jb2phi_2018;   //!
   TBranch        *b_jb2pt_2016;   //!
   TBranch        *b_jb2pt_2017;   //!
   TBranch        *b_jb2pt_2018;   //!
   TBranch        *b_jetVeto20;   //!
   TBranch        *b_jetVeto20WoNoisyJets;   //!
   TBranch        *b_jetVeto20_JetEnDown;   //!
   TBranch        *b_jetVeto20_JetEnUp;   //!
   TBranch        *b_jetVeto30;   //!
   TBranch        *b_jetVeto30WoNoisyJets;   //!
   TBranch        *b_jetVeto30WoNoisyJets_JERDown;   //!
   TBranch        *b_jetVeto30WoNoisyJets_JERUp;   //!
   TBranch        *b_jetVeto30WoNoisyJets_JetAbsoluteDown;   //!
   TBranch        *b_jetVeto30WoNoisyJets_JetAbsoluteUp;   //!
   TBranch        *b_jetVeto30WoNoisyJets_JetAbsoluteyearDown;   //!
   TBranch        *b_jetVeto30WoNoisyJets_JetAbsoluteyearUp;   //!
   TBranch        *b_jetVeto30WoNoisyJets_JetBBEC1Down;   //!
   TBranch        *b_jetVeto30WoNoisyJets_JetBBEC1Up;   //!
   TBranch        *b_jetVeto30WoNoisyJets_JetBBEC1yearDown;   //!
   TBranch        *b_jetVeto30WoNoisyJets_JetBBEC1yearUp;   //!
   TBranch        *b_jetVeto30WoNoisyJets_JetEC2Down;   //!
   TBranch        *b_jetVeto30WoNoisyJets_JetEC2Up;   //!
   TBranch        *b_jetVeto30WoNoisyJets_JetEC2yearDown;   //!
   TBranch        *b_jetVeto30WoNoisyJets_JetEC2yearUp;   //!
   TBranch        *b_jetVeto30WoNoisyJets_JetEnDown;   //!
   TBranch        *b_jetVeto30WoNoisyJets_JetEnUp;   //!
   TBranch        *b_jetVeto30WoNoisyJets_JetFlavorQCDDown;   //!
   TBranch        *b_jetVeto30WoNoisyJets_JetFlavorQCDUp;   //!
   TBranch        *b_jetVeto30WoNoisyJets_JetHFDown;   //!
   TBranch        *b_jetVeto30WoNoisyJets_JetHFUp;   //!
   TBranch        *b_jetVeto30WoNoisyJets_JetHFyearDown;   //!
   TBranch        *b_jetVeto30WoNoisyJets_JetHFyearUp;   //!
   TBranch        *b_jetVeto30WoNoisyJets_JetRelativeBalDownWoNoisyJets;   //!
   TBranch        *b_jetVeto30WoNoisyJets_JetRelativeBalUpWoNoisyJets;   //!
   TBranch        *b_jetVeto30WoNoisyJets_JetRelativeSampleDown;   //!
   TBranch        *b_jetVeto30WoNoisyJets_JetRelativeSampleUp;   //!
   TBranch        *b_jetVeto30WoNoisyJets_JetTotalDown;   //!
   TBranch        *b_jetVeto30WoNoisyJets_JetTotalUp;   //!
   TBranch        *b_jetVeto30_JERDown;   //!
   TBranch        *b_jetVeto30_JERUp;   //!
   TBranch        *b_jetVeto30_JetAbsoluteDown;   //!
   TBranch        *b_jetVeto30_JetAbsoluteUp;   //!
   TBranch        *b_jetVeto30_JetAbsoluteyearDown;   //!
   TBranch        *b_jetVeto30_JetAbsoluteyearUp;   //!
   TBranch        *b_jetVeto30_JetBBEC1Down;   //!
   TBranch        *b_jetVeto30_JetBBEC1Up;   //!
   TBranch        *b_jetVeto30_JetBBEC1yearDown;   //!
   TBranch        *b_jetVeto30_JetBBEC1yearUp;   //!
   TBranch        *b_jetVeto30_JetEC2Down;   //!
   TBranch        *b_jetVeto30_JetEC2Up;   //!
   TBranch        *b_jetVeto30_JetEC2yearDown;   //!
   TBranch        *b_jetVeto30_JetEC2yearUp;   //!
   TBranch        *b_jetVeto30_JetEnDown;   //!
   TBranch        *b_jetVeto30_JetEnUp;   //!
   TBranch        *b_jetVeto30_JetFlavorQCDDown;   //!
   TBranch        *b_jetVeto30_JetFlavorQCDUp;   //!
   TBranch        *b_jetVeto30_JetHFDown;   //!
   TBranch        *b_jetVeto30_JetHFUp;   //!
   TBranch        *b_jetVeto30_JetHFyearDown;   //!
   TBranch        *b_jetVeto30_JetHFyearUp;   //!
   TBranch        *b_jetVeto30_JetRelativeBalDown;   //!
   TBranch        *b_jetVeto30_JetRelativeBalUp;   //!
   TBranch        *b_jetVeto30_JetRelativeSampleDown;   //!
   TBranch        *b_jetVeto30_JetRelativeSampleUp;   //!
   TBranch        *b_jetVeto30_JetTotalDown;   //!
   TBranch        *b_jetVeto30_JetTotalUp;   //!
   TBranch        *b_lheweight_muR0p5_muF0p5;   //!
   TBranch        *b_lheweight_muR0p5_muF1;   //!
   TBranch        *b_lheweight_muR0p5_muF2;   //!
   TBranch        *b_lheweight_muR1_muF0p5;   //!
   TBranch        *b_lheweight_muR1_muF2;   //!
   TBranch        *b_lheweight_muR2_muF0p5;   //!
   TBranch        *b_lheweight_muR2_muF1;   //!
   TBranch        *b_lheweight_muR2_muF2;   //!
   TBranch        *b_lheweight_nominal;   //!
   TBranch        *b_lumi;   //!
   TBranch        *b_m1BestTrackType;   //!
   TBranch        *b_m1Charge;   //!
   TBranch        *b_m1Chi2LocalPosition;   //!
   TBranch        *b_m1ComesFromHiggs;   //!
   TBranch        *b_m1CutBasedIdGlobalHighPt;   //!
   TBranch        *b_m1CutBasedIdLoose;   //!
   TBranch        *b_m1CutBasedIdMedium;   //!
   TBranch        *b_m1CutBasedIdMediumPrompt;   //!
   TBranch        *b_m1CutBasedIdTight;   //!
   TBranch        *b_m1CutBasedIdTrkHighPt;   //!
   TBranch        *b_m1EcalIsoDR03;   //!
   TBranch        *b_m1EffectiveArea2011;   //!
   TBranch        *b_m1EffectiveArea2012;   //!
   TBranch        *b_m1Eta;   //!
   TBranch        *b_m1Eta_MuonEnDown;   //!
   TBranch        *b_m1Eta_MuonEnUp;   //!
   TBranch        *b_m1GenCharge;   //!
   TBranch        *b_m1GenDirectPromptTauDecayFinalState;   //!
   TBranch        *b_m1GenEnergy;   //!
   TBranch        *b_m1GenEta;   //!
   TBranch        *b_m1GenIsPrompt;   //!
   TBranch        *b_m1GenMotherPdgId;   //!
   TBranch        *b_m1GenParticle;   //!
   TBranch        *b_m1GenPdgId;   //!
   TBranch        *b_m1GenPhi;   //!
   TBranch        *b_m1GenPrompt;   //!
   TBranch        *b_m1GenPromptFinalState;   //!
   TBranch        *b_m1GenPromptTauDecay;   //!
   TBranch        *b_m1GenPt;   //!
   TBranch        *b_m1GenTauDecay;   //!
   TBranch        *b_m1GenVZ;   //!
   TBranch        *b_m1GenVtxPVMatch;   //!
   TBranch        *b_m1HcalIsoDR03;   //!
   TBranch        *b_m1IP3D;   //!
   TBranch        *b_m1IP3DErr;   //!
   TBranch        *b_m1IsGlobal;   //!
   TBranch        *b_m1IsPFMuon;   //!
   TBranch        *b_m1IsTracker;   //!
   TBranch        *b_m1IsoDB03;   //!
   TBranch        *b_m1IsoDB04;   //!
   TBranch        *b_m1JetArea;   //!
   TBranch        *b_m1JetBtag;   //!
   TBranch        *b_m1JetDR;   //!
   TBranch        *b_m1JetEtaEtaMoment;   //!
   TBranch        *b_m1JetEtaPhiMoment;   //!
   TBranch        *b_m1JetEtaPhiSpread;   //!
   TBranch        *b_m1JetHadronFlavour;   //!
   TBranch        *b_m1JetPFCISVBtag;   //!
   TBranch        *b_m1JetPartonFlavour;   //!
   TBranch        *b_m1JetPhiPhiMoment;   //!
   TBranch        *b_m1JetPt;   //!
   TBranch        *b_m1LowestMll;   //!
   TBranch        *b_m1Mass;   //!
   TBranch        *b_m1MatchEmbeddedFilterMu19Tau20_2016;   //!
   TBranch        *b_m1MatchEmbeddedFilterMu20Tau27_2017;   //!
   TBranch        *b_m1MatchEmbeddedFilterMu20Tau27_2018;   //!
   TBranch        *b_m1MatchEmbeddedFilterMu24;   //!
   TBranch        *b_m1MatchEmbeddedFilterMu27;   //!
   TBranch        *b_m1MatchedStations;   //!
   TBranch        *b_m1MatchesIsoMu19Tau20Filter;   //!
   TBranch        *b_m1MatchesIsoMu19Tau20Path;   //!
   TBranch        *b_m1MatchesIsoMu19Tau20SingleL1Filter;   //!
   TBranch        *b_m1MatchesIsoMu19Tau20SingleL1Path;   //!
   TBranch        *b_m1MatchesIsoMu20HPSTau27Filter;   //!
   TBranch        *b_m1MatchesIsoMu20HPSTau27Path;   //!
   TBranch        *b_m1MatchesIsoMu20Tau27Filter;   //!
   TBranch        *b_m1MatchesIsoMu20Tau27Path;   //!
   TBranch        *b_m1MatchesIsoMu22Filter;   //!
   TBranch        *b_m1MatchesIsoMu22Path;   //!
   TBranch        *b_m1MatchesIsoMu22eta2p1Filter;   //!
   TBranch        *b_m1MatchesIsoMu22eta2p1Path;   //!
   TBranch        *b_m1MatchesIsoMu24Filter;   //!
   TBranch        *b_m1MatchesIsoMu24Path;   //!
   TBranch        *b_m1MatchesIsoMu27Filter;   //!
   TBranch        *b_m1MatchesIsoMu27Path;   //!
   TBranch        *b_m1MatchesIsoTkMu22Filter;   //!
   TBranch        *b_m1MatchesIsoTkMu22Path;   //!
   TBranch        *b_m1MatchesIsoTkMu22eta2p1Filter;   //!
   TBranch        *b_m1MatchesIsoTkMu22eta2p1Path;   //!
   TBranch        *b_m1MatchesMu23e12DZFilter;   //!
   TBranch        *b_m1MatchesMu23e12DZPath;   //!
   TBranch        *b_m1MatchesMu23e12Filter;   //!
   TBranch        *b_m1MatchesMu23e12Path;   //!
   TBranch        *b_m1MatchesMu8e23DZFilter;   //!
   TBranch        *b_m1MatchesMu8e23DZPath;   //!
   TBranch        *b_m1MatchesMu8e23Filter;   //!
   TBranch        *b_m1MatchesMu8e23Path;   //!
   TBranch        *b_m1MiniIsoLoose;   //!
   TBranch        *b_m1MiniIsoMedium;   //!
   TBranch        *b_m1MiniIsoTight;   //!
   TBranch        *b_m1MiniIsoVeryTight;   //!
   TBranch        *b_m1MuonHits;   //!
   TBranch        *b_m1MvaLoose;   //!
   TBranch        *b_m1MvaMedium;   //!
   TBranch        *b_m1MvaTight;   //!
   TBranch        *b_m1NearestZMass;   //!
   TBranch        *b_m1NormTrkChi2;   //!
   TBranch        *b_m1NormalizedChi2;   //!
   TBranch        *b_m1PFChargedHadronIsoR04;   //!
   TBranch        *b_m1PFChargedIso;   //!
   TBranch        *b_m1PFIDLoose;   //!
   TBranch        *b_m1PFIDMedium;   //!
   TBranch        *b_m1PFIDTight;   //!
   TBranch        *b_m1PFIsoLoose;   //!
   TBranch        *b_m1PFIsoMedium;   //!
   TBranch        *b_m1PFIsoTight;   //!
   TBranch        *b_m1PFIsoVeryLoose;   //!
   TBranch        *b_m1PFIsoVeryTight;   //!
   TBranch        *b_m1PFNeutralHadronIsoR04;   //!
   TBranch        *b_m1PFNeutralIso;   //!
   TBranch        *b_m1PFPUChargedIso;   //!
   TBranch        *b_m1PFPhotonIso;   //!
   TBranch        *b_m1PFPhotonIsoR04;   //!
   TBranch        *b_m1PFPileupIsoR04;   //!
   TBranch        *b_m1PVDXY;   //!
   TBranch        *b_m1PVDZ;   //!
   TBranch        *b_m1Phi;   //!
   TBranch        *b_m1Phi_MuonEnDown;   //!
   TBranch        *b_m1Phi_MuonEnUp;   //!
   TBranch        *b_m1PixHits;   //!
   TBranch        *b_m1Pt;   //!
   TBranch        *b_m1Pt_MuonEnDown;   //!
   TBranch        *b_m1Pt_MuonEnUp;   //!
   TBranch        *b_m1RelPFIsoDBDefault;   //!
   TBranch        *b_m1RelPFIsoDBDefaultR04;   //!
   TBranch        *b_m1RelPFIsoRho;   //!
   TBranch        *b_m1Rho;   //!
   TBranch        *b_m1SIP2D;   //!
   TBranch        *b_m1SIP3D;   //!
   TBranch        *b_m1SegmentCompatibility;   //!
   TBranch        *b_m1SoftCutBasedId;   //!
   TBranch        *b_m1TkIsoLoose;   //!
   TBranch        *b_m1TkIsoTight;   //!
   TBranch        *b_m1TkLayersWithMeasurement;   //!
   TBranch        *b_m1TrkIsoDR03;   //!
   TBranch        *b_m1TrkKink;   //!
   TBranch        *b_m1TypeCode;   //!
   TBranch        *b_m1VZ;   //!
   TBranch        *b_m1ValidFraction;   //!
   TBranch        *b_m1ZTTGenMatching;   //!
   TBranch        *b_m1_m2_DR;   //!
   TBranch        *b_m1_m2_Mass;   //!
   TBranch        *b_m1_m2_doubleL1IsoTauMatch;   //!
   TBranch        *b_m1_m3_DR;   //!
   TBranch        *b_m1_m3_Mass;   //!
   TBranch        *b_m1_m3_doubleL1IsoTauMatch;   //!
   TBranch        *b_m2BestTrackType;   //!
   TBranch        *b_m2Charge;   //!
   TBranch        *b_m2Chi2LocalPosition;   //!
   TBranch        *b_m2ComesFromHiggs;   //!
   TBranch        *b_m2CutBasedIdGlobalHighPt;   //!
   TBranch        *b_m2CutBasedIdLoose;   //!
   TBranch        *b_m2CutBasedIdMedium;   //!
   TBranch        *b_m2CutBasedIdMediumPrompt;   //!
   TBranch        *b_m2CutBasedIdTight;   //!
   TBranch        *b_m2CutBasedIdTrkHighPt;   //!
   TBranch        *b_m2EcalIsoDR03;   //!
   TBranch        *b_m2EffectiveArea2011;   //!
   TBranch        *b_m2EffectiveArea2012;   //!
   TBranch        *b_m2Eta;   //!
   TBranch        *b_m2Eta_MuonEnDown;   //!
   TBranch        *b_m2Eta_MuonEnUp;   //!
   TBranch        *b_m2GenCharge;   //!
   TBranch        *b_m2GenDirectPromptTauDecayFinalState;   //!
   TBranch        *b_m2GenEnergy;   //!
   TBranch        *b_m2GenEta;   //!
   TBranch        *b_m2GenIsPrompt;   //!
   TBranch        *b_m2GenMotherPdgId;   //!
   TBranch        *b_m2GenParticle;   //!
   TBranch        *b_m2GenPdgId;   //!
   TBranch        *b_m2GenPhi;   //!
   TBranch        *b_m2GenPrompt;   //!
   TBranch        *b_m2GenPromptFinalState;   //!
   TBranch        *b_m2GenPromptTauDecay;   //!
   TBranch        *b_m2GenPt;   //!
   TBranch        *b_m2GenTauDecay;   //!
   TBranch        *b_m2GenVZ;   //!
   TBranch        *b_m2GenVtxPVMatch;   //!
   TBranch        *b_m2HcalIsoDR03;   //!
   TBranch        *b_m2IP3D;   //!
   TBranch        *b_m2IP3DErr;   //!
   TBranch        *b_m2IsGlobal;   //!
   TBranch        *b_m2IsPFMuon;   //!
   TBranch        *b_m2IsTracker;   //!
   TBranch        *b_m2IsoDB03;   //!
   TBranch        *b_m2IsoDB04;   //!
   TBranch        *b_m2JetArea;   //!
   TBranch        *b_m2JetBtag;   //!
   TBranch        *b_m2JetDR;   //!
   TBranch        *b_m2JetEtaEtaMoment;   //!
   TBranch        *b_m2JetEtaPhiMoment;   //!
   TBranch        *b_m2JetEtaPhiSpread;   //!
   TBranch        *b_m2JetHadronFlavour;   //!
   TBranch        *b_m2JetPFCISVBtag;   //!
   TBranch        *b_m2JetPartonFlavour;   //!
   TBranch        *b_m2JetPhiPhiMoment;   //!
   TBranch        *b_m2JetPt;   //!
   TBranch        *b_m2LowestMll;   //!
   TBranch        *b_m2Mass;   //!
   TBranch        *b_m2MatchEmbeddedFilterMu19Tau20_2016;   //!
   TBranch        *b_m2MatchEmbeddedFilterMu20Tau27_2017;   //!
   TBranch        *b_m2MatchEmbeddedFilterMu20Tau27_2018;   //!
   TBranch        *b_m2MatchEmbeddedFilterMu24;   //!
   TBranch        *b_m2MatchEmbeddedFilterMu27;   //!
   TBranch        *b_m2MatchedStations;   //!
   TBranch        *b_m2MatchesIsoMu19Tau20Filter;   //!
   TBranch        *b_m2MatchesIsoMu19Tau20Path;   //!
   TBranch        *b_m2MatchesIsoMu19Tau20SingleL1Filter;   //!
   TBranch        *b_m2MatchesIsoMu19Tau20SingleL1Path;   //!
   TBranch        *b_m2MatchesIsoMu20HPSTau27Filter;   //!
   TBranch        *b_m2MatchesIsoMu20HPSTau27Path;   //!
   TBranch        *b_m2MatchesIsoMu20Tau27Filter;   //!
   TBranch        *b_m2MatchesIsoMu20Tau27Path;   //!
   TBranch        *b_m2MatchesIsoMu22Filter;   //!
   TBranch        *b_m2MatchesIsoMu22Path;   //!
   TBranch        *b_m2MatchesIsoMu22eta2p1Filter;   //!
   TBranch        *b_m2MatchesIsoMu22eta2p1Path;   //!
   TBranch        *b_m2MatchesIsoMu24Filter;   //!
   TBranch        *b_m2MatchesIsoMu24Path;   //!
   TBranch        *b_m2MatchesIsoMu27Filter;   //!
   TBranch        *b_m2MatchesIsoMu27Path;   //!
   TBranch        *b_m2MatchesIsoTkMu22Filter;   //!
   TBranch        *b_m2MatchesIsoTkMu22Path;   //!
   TBranch        *b_m2MatchesIsoTkMu22eta2p1Filter;   //!
   TBranch        *b_m2MatchesIsoTkMu22eta2p1Path;   //!
   TBranch        *b_m2MatchesMu23e12DZFilter;   //!
   TBranch        *b_m2MatchesMu23e12DZPath;   //!
   TBranch        *b_m2MatchesMu23e12Filter;   //!
   TBranch        *b_m2MatchesMu23e12Path;   //!
   TBranch        *b_m2MatchesMu8e23DZFilter;   //!
   TBranch        *b_m2MatchesMu8e23DZPath;   //!
   TBranch        *b_m2MatchesMu8e23Filter;   //!
   TBranch        *b_m2MatchesMu8e23Path;   //!
   TBranch        *b_m2MiniIsoLoose;   //!
   TBranch        *b_m2MiniIsoMedium;   //!
   TBranch        *b_m2MiniIsoTight;   //!
   TBranch        *b_m2MiniIsoVeryTight;   //!
   TBranch        *b_m2MuonHits;   //!
   TBranch        *b_m2MvaLoose;   //!
   TBranch        *b_m2MvaMedium;   //!
   TBranch        *b_m2MvaTight;   //!
   TBranch        *b_m2NearestZMass;   //!
   TBranch        *b_m2NormTrkChi2;   //!
   TBranch        *b_m2NormalizedChi2;   //!
   TBranch        *b_m2PFChargedHadronIsoR04;   //!
   TBranch        *b_m2PFChargedIso;   //!
   TBranch        *b_m2PFIDLoose;   //!
   TBranch        *b_m2PFIDMedium;   //!
   TBranch        *b_m2PFIDTight;   //!
   TBranch        *b_m2PFIsoLoose;   //!
   TBranch        *b_m2PFIsoMedium;   //!
   TBranch        *b_m2PFIsoTight;   //!
   TBranch        *b_m2PFIsoVeryLoose;   //!
   TBranch        *b_m2PFIsoVeryTight;   //!
   TBranch        *b_m2PFNeutralHadronIsoR04;   //!
   TBranch        *b_m2PFNeutralIso;   //!
   TBranch        *b_m2PFPUChargedIso;   //!
   TBranch        *b_m2PFPhotonIso;   //!
   TBranch        *b_m2PFPhotonIsoR04;   //!
   TBranch        *b_m2PFPileupIsoR04;   //!
   TBranch        *b_m2PVDXY;   //!
   TBranch        *b_m2PVDZ;   //!
   TBranch        *b_m2Phi;   //!
   TBranch        *b_m2Phi_MuonEnDown;   //!
   TBranch        *b_m2Phi_MuonEnUp;   //!
   TBranch        *b_m2PixHits;   //!
   TBranch        *b_m2Pt;   //!
   TBranch        *b_m2Pt_MuonEnDown;   //!
   TBranch        *b_m2Pt_MuonEnUp;   //!
   TBranch        *b_m2RelPFIsoDBDefault;   //!
   TBranch        *b_m2RelPFIsoDBDefaultR04;   //!
   TBranch        *b_m2RelPFIsoRho;   //!
   TBranch        *b_m2Rho;   //!
   TBranch        *b_m2SIP2D;   //!
   TBranch        *b_m2SIP3D;   //!
   TBranch        *b_m2SegmentCompatibility;   //!
   TBranch        *b_m2SoftCutBasedId;   //!
   TBranch        *b_m2TkIsoLoose;   //!
   TBranch        *b_m2TkIsoTight;   //!
   TBranch        *b_m2TkLayersWithMeasurement;   //!
   TBranch        *b_m2TrkIsoDR03;   //!
   TBranch        *b_m2TrkKink;   //!
   TBranch        *b_m2TypeCode;   //!
   TBranch        *b_m2VZ;   //!
   TBranch        *b_m2ValidFraction;   //!
   TBranch        *b_m2ZTTGenMatching;   //!
   TBranch        *b_m2_m3_DR;   //!
   TBranch        *b_m2_m3_Mass;   //!
   TBranch        *b_m2_m3_doubleL1IsoTauMatch;   //!
   TBranch        *b_m3BestTrackType;   //!
   TBranch        *b_m3Charge;   //!
   TBranch        *b_m3Chi2LocalPosition;   //!
   TBranch        *b_m3ComesFromHiggs;   //!
   TBranch        *b_m3CutBasedIdGlobalHighPt;   //!
   TBranch        *b_m3CutBasedIdLoose;   //!
   TBranch        *b_m3CutBasedIdMedium;   //!
   TBranch        *b_m3CutBasedIdMediumPrompt;   //!
   TBranch        *b_m3CutBasedIdTight;   //!
   TBranch        *b_m3CutBasedIdTrkHighPt;   //!
   TBranch        *b_m3EcalIsoDR03;   //!
   TBranch        *b_m3EffectiveArea2011;   //!
   TBranch        *b_m3EffectiveArea2012;   //!
   TBranch        *b_m3Eta;   //!
   TBranch        *b_m3Eta_MuonEnDown;   //!
   TBranch        *b_m3Eta_MuonEnUp;   //!
   TBranch        *b_m3GenCharge;   //!
   TBranch        *b_m3GenDirectPromptTauDecayFinalState;   //!
   TBranch        *b_m3GenEnergy;   //!
   TBranch        *b_m3GenEta;   //!
   TBranch        *b_m3GenIsPrompt;   //!
   TBranch        *b_m3GenMotherPdgId;   //!
   TBranch        *b_m3GenParticle;   //!
   TBranch        *b_m3GenPdgId;   //!
   TBranch        *b_m3GenPhi;   //!
   TBranch        *b_m3GenPrompt;   //!
   TBranch        *b_m3GenPromptFinalState;   //!
   TBranch        *b_m3GenPromptTauDecay;   //!
   TBranch        *b_m3GenPt;   //!
   TBranch        *b_m3GenTauDecay;   //!
   TBranch        *b_m3GenVZ;   //!
   TBranch        *b_m3GenVtxPVMatch;   //!
   TBranch        *b_m3HcalIsoDR03;   //!
   TBranch        *b_m3IP3D;   //!
   TBranch        *b_m3IP3DErr;   //!
   TBranch        *b_m3IsGlobal;   //!
   TBranch        *b_m3IsPFMuon;   //!
   TBranch        *b_m3IsTracker;   //!
   TBranch        *b_m3IsoDB03;   //!
   TBranch        *b_m3IsoDB04;   //!
   TBranch        *b_m3JetArea;   //!
   TBranch        *b_m3JetBtag;   //!
   TBranch        *b_m3JetDR;   //!
   TBranch        *b_m3JetEtaEtaMoment;   //!
   TBranch        *b_m3JetEtaPhiMoment;   //!
   TBranch        *b_m3JetEtaPhiSpread;   //!
   TBranch        *b_m3JetHadronFlavour;   //!
   TBranch        *b_m3JetPFCISVBtag;   //!
   TBranch        *b_m3JetPartonFlavour;   //!
   TBranch        *b_m3JetPhiPhiMoment;   //!
   TBranch        *b_m3JetPt;   //!
   TBranch        *b_m3LowestMll;   //!
   TBranch        *b_m3Mass;   //!
   TBranch        *b_m3MatchEmbeddedFilterMu19Tau20_2016;   //!
   TBranch        *b_m3MatchEmbeddedFilterMu20Tau27_2017;   //!
   TBranch        *b_m3MatchEmbeddedFilterMu20Tau27_2018;   //!
   TBranch        *b_m3MatchEmbeddedFilterMu24;   //!
   TBranch        *b_m3MatchEmbeddedFilterMu27;   //!
   TBranch        *b_m3MatchedStations;   //!
   TBranch        *b_m3MatchesIsoMu19Tau20Filter;   //!
   TBranch        *b_m3MatchesIsoMu19Tau20Path;   //!
   TBranch        *b_m3MatchesIsoMu19Tau20SingleL1Filter;   //!
   TBranch        *b_m3MatchesIsoMu19Tau20SingleL1Path;   //!
   TBranch        *b_m3MatchesIsoMu20HPSTau27Filter;   //!
   TBranch        *b_m3MatchesIsoMu20HPSTau27Path;   //!
   TBranch        *b_m3MatchesIsoMu20Tau27Filter;   //!
   TBranch        *b_m3MatchesIsoMu20Tau27Path;   //!
   TBranch        *b_m3MatchesIsoMu22Filter;   //!
   TBranch        *b_m3MatchesIsoMu22Path;   //!
   TBranch        *b_m3MatchesIsoMu22eta2p1Filter;   //!
   TBranch        *b_m3MatchesIsoMu22eta2p1Path;   //!
   TBranch        *b_m3MatchesIsoMu24Filter;   //!
   TBranch        *b_m3MatchesIsoMu24Path;   //!
   TBranch        *b_m3MatchesIsoMu27Filter;   //!
   TBranch        *b_m3MatchesIsoMu27Path;   //!
   TBranch        *b_m3MatchesIsoTkMu22Filter;   //!
   TBranch        *b_m3MatchesIsoTkMu22Path;   //!
   TBranch        *b_m3MatchesIsoTkMu22eta2p1Filter;   //!
   TBranch        *b_m3MatchesIsoTkMu22eta2p1Path;   //!
   TBranch        *b_m3MatchesMu23e12DZFilter;   //!
   TBranch        *b_m3MatchesMu23e12DZPath;   //!
   TBranch        *b_m3MatchesMu23e12Filter;   //!
   TBranch        *b_m3MatchesMu23e12Path;   //!
   TBranch        *b_m3MatchesMu8e23DZFilter;   //!
   TBranch        *b_m3MatchesMu8e23DZPath;   //!
   TBranch        *b_m3MatchesMu8e23Filter;   //!
   TBranch        *b_m3MatchesMu8e23Path;   //!
   TBranch        *b_m3MiniIsoLoose;   //!
   TBranch        *b_m3MiniIsoMedium;   //!
   TBranch        *b_m3MiniIsoTight;   //!
   TBranch        *b_m3MiniIsoVeryTight;   //!
   TBranch        *b_m3MuonHits;   //!
   TBranch        *b_m3MvaLoose;   //!
   TBranch        *b_m3MvaMedium;   //!
   TBranch        *b_m3MvaTight;   //!
   TBranch        *b_m3NearestZMass;   //!
   TBranch        *b_m3NormTrkChi2;   //!
   TBranch        *b_m3NormalizedChi2;   //!
   TBranch        *b_m3PFChargedHadronIsoR04;   //!
   TBranch        *b_m3PFChargedIso;   //!
   TBranch        *b_m3PFIDLoose;   //!
   TBranch        *b_m3PFIDMedium;   //!
   TBranch        *b_m3PFIDTight;   //!
   TBranch        *b_m3PFIsoLoose;   //!
   TBranch        *b_m3PFIsoMedium;   //!
   TBranch        *b_m3PFIsoTight;   //!
   TBranch        *b_m3PFIsoVeryLoose;   //!
   TBranch        *b_m3PFIsoVeryTight;   //!
   TBranch        *b_m3PFNeutralHadronIsoR04;   //!
   TBranch        *b_m3PFNeutralIso;   //!
   TBranch        *b_m3PFPUChargedIso;   //!
   TBranch        *b_m3PFPhotonIso;   //!
   TBranch        *b_m3PFPhotonIsoR04;   //!
   TBranch        *b_m3PFPileupIsoR04;   //!
   TBranch        *b_m3PVDXY;   //!
   TBranch        *b_m3PVDZ;   //!
   TBranch        *b_m3Phi;   //!
   TBranch        *b_m3Phi_MuonEnDown;   //!
   TBranch        *b_m3Phi_MuonEnUp;   //!
   TBranch        *b_m3PixHits;   //!
   TBranch        *b_m3Pt;   //!
   TBranch        *b_m3Pt_MuonEnDown;   //!
   TBranch        *b_m3Pt_MuonEnUp;   //!
   TBranch        *b_m3RelPFIsoDBDefault;   //!
   TBranch        *b_m3RelPFIsoDBDefaultR04;   //!
   TBranch        *b_m3RelPFIsoRho;   //!
   TBranch        *b_m3Rho;   //!
   TBranch        *b_m3SIP2D;   //!
   TBranch        *b_m3SIP3D;   //!
   TBranch        *b_m3SegmentCompatibility;   //!
   TBranch        *b_m3SoftCutBasedId;   //!
   TBranch        *b_m3TkIsoLoose;   //!
   TBranch        *b_m3TkIsoTight;   //!
   TBranch        *b_m3TkLayersWithMeasurement;   //!
   TBranch        *b_m3TrkIsoDR03;   //!
   TBranch        *b_m3TrkKink;   //!
   TBranch        *b_m3TypeCode;   //!
   TBranch        *b_m3VZ;   //!
   TBranch        *b_m3ValidFraction;   //!
   TBranch        *b_m3ZTTGenMatching;   //!
   TBranch        *b_metSig;   //!
   TBranch        *b_metcov00;   //!
   TBranch        *b_metcov01;   //!
   TBranch        *b_metcov10;   //!
   TBranch        *b_metcov11;   //!
   TBranch        *b_mu12e23DZPass;   //!
   TBranch        *b_mu12e23Pass;   //!
   TBranch        *b_mu23e12DZPass;   //!
   TBranch        *b_mu23e12Pass;   //!
   TBranch        *b_mu8diele12DZPass;   //!
   TBranch        *b_mu8diele12Pass;   //!
   TBranch        *b_mu8e23DZPass;   //!
   TBranch        *b_mu8e23Pass;   //!
   TBranch        *b_muGlbIsoVetoPt10;   //!
   TBranch        *b_muVeto5;   //!
   TBranch        *b_muVetoZTTp001dxyz;   //!
   TBranch        *b_muVetoZTTp001dxyzR0;   //!
   TBranch        *b_nTruePU;   //!
   TBranch        *b_npNLO;   //!
   TBranch        *b_numGenJets;   //!
   TBranch        *b_nvtx;   //!
   TBranch        *b_prefiring_weight;   //!
   TBranch        *b_prefiring_weight_down;   //!
   TBranch        *b_prefiring_weight_up;   //!
   TBranch        *b_processID;   //!
   TBranch        *b_puppiMetEt;   //!
   TBranch        *b_puppiMetPhi;   //!
   TBranch        *b_puppiMet_shiftedPhi_JetAbsoluteDown;   //!
   TBranch        *b_puppiMet_shiftedPhi_JetAbsoluteUp;   //!
   TBranch        *b_puppiMet_shiftedPhi_JetAbsoluteyearDown;   //!
   TBranch        *b_puppiMet_shiftedPhi_JetAbsoluteyearUp;   //!
   TBranch        *b_puppiMet_shiftedPhi_JetBBEC1Down;   //!
   TBranch        *b_puppiMet_shiftedPhi_JetBBEC1Up;   //!
   TBranch        *b_puppiMet_shiftedPhi_JetBBEC1yearDown;   //!
   TBranch        *b_puppiMet_shiftedPhi_JetBBEC1yearUp;   //!
   TBranch        *b_puppiMet_shiftedPhi_JetEC2Down;   //!
   TBranch        *b_puppiMet_shiftedPhi_JetEC2Up;   //!
   TBranch        *b_puppiMet_shiftedPhi_JetEC2yearDown;   //!
   TBranch        *b_puppiMet_shiftedPhi_JetEC2yearUp;   //!
   TBranch        *b_puppiMet_shiftedPhi_JetEnDown;   //!
   TBranch        *b_puppiMet_shiftedPhi_JetEnUp;   //!
   TBranch        *b_puppiMet_shiftedPhi_JetFlavorQCDDown;   //!
   TBranch        *b_puppiMet_shiftedPhi_JetFlavorQCDUp;   //!
   TBranch        *b_puppiMet_shiftedPhi_JetHFDown;   //!
   TBranch        *b_puppiMet_shiftedPhi_JetHFUp;   //!
   TBranch        *b_puppiMet_shiftedPhi_JetHFyearDown;   //!
   TBranch        *b_puppiMet_shiftedPhi_JetHFyearUp;   //!
   TBranch        *b_puppiMet_shiftedPhi_JetRelativeBalDown;   //!
   TBranch        *b_puppiMet_shiftedPhi_JetRelativeBalUp;   //!
   TBranch        *b_puppiMet_shiftedPhi_JetRelativeSampleDown;   //!
   TBranch        *b_puppiMet_shiftedPhi_JetRelativeSampleUp;   //!
   TBranch        *b_puppiMet_shiftedPhi_JetTotalDown;   //!
   TBranch        *b_puppiMet_shiftedPhi_JetTotalUp;   //!
   TBranch        *b_puppiMet_shiftedPhi_UnclusteredEnDown;   //!
   TBranch        *b_puppiMet_shiftedPhi_UnclusteredEnUp;   //!
   TBranch        *b_puppiMet_shiftedPt_JetAbsoluteDown;   //!
   TBranch        *b_puppiMet_shiftedPt_JetAbsoluteUp;   //!
   TBranch        *b_puppiMet_shiftedPt_JetAbsoluteyearDown;   //!
   TBranch        *b_puppiMet_shiftedPt_JetAbsoluteyearUp;   //!
   TBranch        *b_puppiMet_shiftedPt_JetBBEC1Down;   //!
   TBranch        *b_puppiMet_shiftedPt_JetBBEC1Up;   //!
   TBranch        *b_puppiMet_shiftedPt_JetBBEC1yearDown;   //!
   TBranch        *b_puppiMet_shiftedPt_JetBBEC1yearUp;   //!
   TBranch        *b_puppiMet_shiftedPt_JetEC2Down;   //!
   TBranch        *b_puppiMet_shiftedPt_JetEC2Up;   //!
   TBranch        *b_puppiMet_shiftedPt_JetEC2yearDown;   //!
   TBranch        *b_puppiMet_shiftedPt_JetEC2yearUp;   //!
   TBranch        *b_puppiMet_shiftedPt_JetEnDown;   //!
   TBranch        *b_puppiMet_shiftedPt_JetEnUp;   //!
   TBranch        *b_puppiMet_shiftedPt_JetFlavorQCDDown;   //!
   TBranch        *b_puppiMet_shiftedPt_JetFlavorQCDUp;   //!
   TBranch        *b_puppiMet_shiftedPt_JetHFDown;   //!
   TBranch        *b_puppiMet_shiftedPt_JetHFUp;   //!
   TBranch        *b_puppiMet_shiftedPt_JetHFyearDown;   //!
   TBranch        *b_puppiMet_shiftedPt_JetHFyearUp;   //!
   TBranch        *b_puppiMet_shiftedPt_JetRelativeBalDown;   //!
   TBranch        *b_puppiMet_shiftedPt_JetRelativeBalUp;   //!
   TBranch        *b_puppiMet_shiftedPt_JetRelativeSampleDown;   //!
   TBranch        *b_puppiMet_shiftedPt_JetRelativeSampleUp;   //!
   TBranch        *b_puppiMet_shiftedPt_JetTotalDown;   //!
   TBranch        *b_puppiMet_shiftedPt_JetTotalUp;   //!
   TBranch        *b_puppiMet_shiftedPt_UnclusteredEnDown;   //!
   TBranch        *b_puppiMet_shiftedPt_UnclusteredEnUp;   //!
   TBranch        *b_puppimetcov00;   //!
   TBranch        *b_puppimetcov01;   //!
   TBranch        *b_puppimetcov10;   //!
   TBranch        *b_puppimetcov11;   //!
   TBranch        *b_pvChi2;   //!
   TBranch        *b_pvDX;   //!
   TBranch        *b_pvDY;   //!
   TBranch        *b_pvDZ;   //!
   TBranch        *b_pvIsFake;   //!
   TBranch        *b_pvIsValid;   //!
   TBranch        *b_pvNormChi2;   //!
   TBranch        *b_pvRho;   //!
   TBranch        *b_pvX;   //!
   TBranch        *b_pvY;   //!
   TBranch        *b_pvZ;   //!
   TBranch        *b_pvndof;   //!
   TBranch        *b_raw_pfMetEt;   //!
   TBranch        *b_raw_pfMetPhi;   //!
   TBranch        *b_recoilDaught;   //!
   TBranch        *b_recoilWithMet;   //!
   TBranch        *b_rho;   //!
   TBranch        *b_run;   //!
   TBranch        *b_singleE25eta2p1TightPass;   //!
   TBranch        *b_singleIsoMu22Pass;   //!
   TBranch        *b_singleIsoMu22eta2p1Pass;   //!
   TBranch        *b_singleIsoTkMu22Pass;   //!
   TBranch        *b_singleIsoTkMu22eta2p1Pass;   //!
   TBranch        *b_singleMu19eta2p1LooseTau20Pass;   //!
   TBranch        *b_singleMu19eta2p1LooseTau20singleL1Pass;   //!
   TBranch        *b_tauVetoPt20Loose3HitsVtx;   //!
   TBranch        *b_tauVetoPt20TightMVALTVtx;   //!
   TBranch        *b_topQuarkPt1;   //!
   TBranch        *b_topQuarkPt2;   //!
   TBranch        *b_tripleEPass;   //!
   TBranch        *b_tripleMu10_5_5Pass;   //!
   TBranch        *b_tripleMu12_10_5Pass;   //!
   TBranch        *b_type1_pfMetEt;   //!
   TBranch        *b_type1_pfMetPhi;   //!
   TBranch        *b_type1_pfMet_shiftedPhi_JERDown;   //!
   TBranch        *b_type1_pfMet_shiftedPhi_JERUp;   //!
   TBranch        *b_type1_pfMet_shiftedPhi_JetAbsoluteDown;   //!
   TBranch        *b_type1_pfMet_shiftedPhi_JetAbsoluteUp;   //!
   TBranch        *b_type1_pfMet_shiftedPhi_JetAbsoluteyearDown;   //!
   TBranch        *b_type1_pfMet_shiftedPhi_JetAbsoluteyearUp;   //!
   TBranch        *b_type1_pfMet_shiftedPhi_JetBBEC1Down;   //!
   TBranch        *b_type1_pfMet_shiftedPhi_JetBBEC1Up;   //!
   TBranch        *b_type1_pfMet_shiftedPhi_JetBBEC1yearDown;   //!
   TBranch        *b_type1_pfMet_shiftedPhi_JetBBEC1yearUp;   //!
   TBranch        *b_type1_pfMet_shiftedPhi_JetEC2Down;   //!
   TBranch        *b_type1_pfMet_shiftedPhi_JetEC2Up;   //!
   TBranch        *b_type1_pfMet_shiftedPhi_JetEC2yearDown;   //!
   TBranch        *b_type1_pfMet_shiftedPhi_JetEC2yearUp;   //!
   TBranch        *b_type1_pfMet_shiftedPhi_JetEnDown;   //!
   TBranch        *b_type1_pfMet_shiftedPhi_JetEnUp;   //!
   TBranch        *b_type1_pfMet_shiftedPhi_JetFlavorQCDDown;   //!
   TBranch        *b_type1_pfMet_shiftedPhi_JetFlavorQCDUp;   //!
   TBranch        *b_type1_pfMet_shiftedPhi_JetHFDown;   //!
   TBranch        *b_type1_pfMet_shiftedPhi_JetHFUp;   //!
   TBranch        *b_type1_pfMet_shiftedPhi_JetHFyearDown;   //!
   TBranch        *b_type1_pfMet_shiftedPhi_JetHFyearUp;   //!
   TBranch        *b_type1_pfMet_shiftedPhi_JetRelativeBalDown;   //!
   TBranch        *b_type1_pfMet_shiftedPhi_JetRelativeBalUp;   //!
   TBranch        *b_type1_pfMet_shiftedPhi_JetRelativeSampleDown;   //!
   TBranch        *b_type1_pfMet_shiftedPhi_JetRelativeSampleUp;   //!
   TBranch        *b_type1_pfMet_shiftedPhi_JetResDown;   //!
   TBranch        *b_type1_pfMet_shiftedPhi_JetResUp;   //!
   TBranch        *b_type1_pfMet_shiftedPhi_JetTotalDown;   //!
   TBranch        *b_type1_pfMet_shiftedPhi_JetTotalUp;   //!
   TBranch        *b_type1_pfMet_shiftedPhi_UnclusteredEnDown;   //!
   TBranch        *b_type1_pfMet_shiftedPhi_UnclusteredEnUp;   //!
   TBranch        *b_type1_pfMet_shiftedPt_JERDown;   //!
   TBranch        *b_type1_pfMet_shiftedPt_JERUp;   //!
   TBranch        *b_type1_pfMet_shiftedPt_JetAbsoluteDown;   //!
   TBranch        *b_type1_pfMet_shiftedPt_JetAbsoluteUp;   //!
   TBranch        *b_type1_pfMet_shiftedPt_JetAbsoluteyearDown;   //!
   TBranch        *b_type1_pfMet_shiftedPt_JetAbsoluteyearUp;   //!
   TBranch        *b_type1_pfMet_shiftedPt_JetBBEC1Down;   //!
   TBranch        *b_type1_pfMet_shiftedPt_JetBBEC1Up;   //!
   TBranch        *b_type1_pfMet_shiftedPt_JetBBEC1yearDown;   //!
   TBranch        *b_type1_pfMet_shiftedPt_JetBBEC1yearUp;   //!
   TBranch        *b_type1_pfMet_shiftedPt_JetEC2Down;   //!
   TBranch        *b_type1_pfMet_shiftedPt_JetEC2Up;   //!
   TBranch        *b_type1_pfMet_shiftedPt_JetEC2yearDown;   //!
   TBranch        *b_type1_pfMet_shiftedPt_JetEC2yearUp;   //!
   TBranch        *b_type1_pfMet_shiftedPt_JetEnDown;   //!
   TBranch        *b_type1_pfMet_shiftedPt_JetEnUp;   //!
   TBranch        *b_type1_pfMet_shiftedPt_JetFlavorQCDDown;   //!
   TBranch        *b_type1_pfMet_shiftedPt_JetFlavorQCDUp;   //!
   TBranch        *b_type1_pfMet_shiftedPt_JetHFDown;   //!
   TBranch        *b_type1_pfMet_shiftedPt_JetHFUp;   //!
   TBranch        *b_type1_pfMet_shiftedPt_JetHFyearDown;   //!
   TBranch        *b_type1_pfMet_shiftedPt_JetHFyearUp;   //!
   TBranch        *b_type1_pfMet_shiftedPt_JetRelativeBalDown;   //!
   TBranch        *b_type1_pfMet_shiftedPt_JetRelativeBalUp;   //!
   TBranch        *b_type1_pfMet_shiftedPt_JetRelativeSampleDown;   //!
   TBranch        *b_type1_pfMet_shiftedPt_JetRelativeSampleUp;   //!
   TBranch        *b_type1_pfMet_shiftedPt_JetResDown;   //!
   TBranch        *b_type1_pfMet_shiftedPt_JetResUp;   //!
   TBranch        *b_type1_pfMet_shiftedPt_JetTotalDown;   //!
   TBranch        *b_type1_pfMet_shiftedPt_JetTotalUp;   //!
   TBranch        *b_type1_pfMet_shiftedPt_UnclusteredEnDown;   //!
   TBranch        *b_type1_pfMet_shiftedPt_UnclusteredEnUp;   //!
   TBranch        *b_vbfDeta;   //!
   TBranch        *b_vbfJetVeto20;   //!
   TBranch        *b_vbfJetVeto30;   //!
   TBranch        *b_vbfMass;   //!
   TBranch        *b_vbfMassWoNoisyJets;   //!
   TBranch        *b_vbfMassWoNoisyJets_JERDown;   //!
   TBranch        *b_vbfMassWoNoisyJets_JERUp;   //!
   TBranch        *b_vbfMassWoNoisyJets_JetAbsoluteDown;   //!
   TBranch        *b_vbfMassWoNoisyJets_JetAbsoluteUp;   //!
   TBranch        *b_vbfMassWoNoisyJets_JetAbsoluteyearDown;   //!
   TBranch        *b_vbfMassWoNoisyJets_JetAbsoluteyearUp;   //!
   TBranch        *b_vbfMassWoNoisyJets_JetBBEC1Down;   //!
   TBranch        *b_vbfMassWoNoisyJets_JetBBEC1Up;   //!
   TBranch        *b_vbfMassWoNoisyJets_JetBBEC1yearDown;   //!
   TBranch        *b_vbfMassWoNoisyJets_JetBBEC1yearUp;   //!
   TBranch        *b_vbfMassWoNoisyJets_JetEC2Down;   //!
   TBranch        *b_vbfMassWoNoisyJets_JetEC2Up;   //!
   TBranch        *b_vbfMassWoNoisyJets_JetEC2yearDown;   //!
   TBranch        *b_vbfMassWoNoisyJets_JetEC2yearUp;   //!
   TBranch        *b_vbfMassWoNoisyJets_JetFlavorQCDDown;   //!
   TBranch        *b_vbfMassWoNoisyJets_JetFlavorQCDUp;   //!
   TBranch        *b_vbfMassWoNoisyJets_JetHFDown;   //!
   TBranch        *b_vbfMassWoNoisyJets_JetHFUp;   //!
   TBranch        *b_vbfMassWoNoisyJets_JetHFyearDown;   //!
   TBranch        *b_vbfMassWoNoisyJets_JetHFyearUp;   //!
   TBranch        *b_vbfMassWoNoisyJets_JetRelativeBalDown;   //!
   TBranch        *b_vbfMassWoNoisyJets_JetRelativeBalUp;   //!
   TBranch        *b_vbfMassWoNoisyJets_JetRelativeSampleDown;   //!
   TBranch        *b_vbfMassWoNoisyJets_JetRelativeSampleUp;   //!
   TBranch        *b_vbfMassWoNoisyJets_JetTotalDown;   //!
   TBranch        *b_vbfMassWoNoisyJets_JetTotalUp;   //!
   TBranch        *b_vbfMass_JERDown;   //!
   TBranch        *b_vbfMass_JERUp;   //!
   TBranch        *b_vbfMass_JetAbsoluteDown;   //!
   TBranch        *b_vbfMass_JetAbsoluteUp;   //!
   TBranch        *b_vbfMass_JetAbsoluteyearDown;   //!
   TBranch        *b_vbfMass_JetAbsoluteyearUp;   //!
   TBranch        *b_vbfMass_JetBBEC1Down;   //!
   TBranch        *b_vbfMass_JetBBEC1Up;   //!
   TBranch        *b_vbfMass_JetBBEC1yearDown;   //!
   TBranch        *b_vbfMass_JetBBEC1yearUp;   //!
   TBranch        *b_vbfMass_JetEC2Down;   //!
   TBranch        *b_vbfMass_JetEC2Up;   //!
   TBranch        *b_vbfMass_JetEC2yearDown;   //!
   TBranch        *b_vbfMass_JetEC2yearUp;   //!
   TBranch        *b_vbfMass_JetFlavorQCDDown;   //!
   TBranch        *b_vbfMass_JetFlavorQCDUp;   //!
   TBranch        *b_vbfMass_JetHFDown;   //!
   TBranch        *b_vbfMass_JetHFUp;   //!
   TBranch        *b_vbfMass_JetHFyearDown;   //!
   TBranch        *b_vbfMass_JetHFyearUp;   //!
   TBranch        *b_vbfMass_JetRelativeBalDown;   //!
   TBranch        *b_vbfMass_JetRelativeBalUp;   //!
   TBranch        *b_vbfMass_JetRelativeSampleDown;   //!
   TBranch        *b_vbfMass_JetRelativeSampleUp;   //!
   TBranch        *b_vbfMass_JetTotalDown;   //!
   TBranch        *b_vbfMass_JetTotalUp;   //!
   TBranch        *b_vbfNJets20;   //!
   TBranch        *b_vbfNJets30;   //!
   TBranch        *b_vbfj1eta;   //!
   TBranch        *b_vbfj1pt;   //!
   TBranch        *b_vbfj2eta;   //!
   TBranch        *b_vbfj2pt;   //!
   TBranch        *b_vispX;   //!
   TBranch        *b_vispY;   //!
   TBranch        *b_idx;   //!

   // methods
   HTauTauTree_mmem (TTree* tree); //ctor
   ~HTauTauTree_mmem();
   void Init(TTree* tree);
   Int_t GetEntry(int entry);
   Long64_t GetEntries();
   TTree* GetTree();
};

HTauTauTree_mmem::HTauTauTree_mmem (TTree* tree)
{
    Init(tree);
}

HTauTauTree_mmem::~HTauTauTree_mmem() {}

void HTauTauTree_mmem::Init(TTree* tree)
{
   // Set object pointer

   // Set branch addresses and branch pointers
   if (!tree) return;
   _tree = tree;
   _tree->SetMakeClass(1); // needed especially when compiling

   _tree->SetBranchAddress("DoubleMediumHPSTau35Pass", &DoubleMediumHPSTau35Pass, &b_DoubleMediumHPSTau35Pass);
   _tree->SetBranchAddress("DoubleMediumHPSTau35TightIDPass", &DoubleMediumHPSTau35TightIDPass, &b_DoubleMediumHPSTau35TightIDPass);
   _tree->SetBranchAddress("DoubleMediumHPSTau40Pass", &DoubleMediumHPSTau40Pass, &b_DoubleMediumHPSTau40Pass);
   _tree->SetBranchAddress("DoubleMediumHPSTau40TightIDPass", &DoubleMediumHPSTau40TightIDPass, &b_DoubleMediumHPSTau40TightIDPass);
   _tree->SetBranchAddress("DoubleMediumTau35Pass", &DoubleMediumTau35Pass, &b_DoubleMediumTau35Pass);
   _tree->SetBranchAddress("DoubleMediumTau35TightIDPass", &DoubleMediumTau35TightIDPass, &b_DoubleMediumTau35TightIDPass);
   _tree->SetBranchAddress("DoubleMediumTau40Pass", &DoubleMediumTau40Pass, &b_DoubleMediumTau40Pass);
   _tree->SetBranchAddress("DoubleMediumTau40TightIDPass", &DoubleMediumTau40TightIDPass, &b_DoubleMediumTau40TightIDPass);
   _tree->SetBranchAddress("DoubleTightHPSTau35Pass", &DoubleTightHPSTau35Pass, &b_DoubleTightHPSTau35Pass);
   _tree->SetBranchAddress("DoubleTightHPSTau35TightIDPass", &DoubleTightHPSTau35TightIDPass, &b_DoubleTightHPSTau35TightIDPass);
   _tree->SetBranchAddress("DoubleTightHPSTau40Pass", &DoubleTightHPSTau40Pass, &b_DoubleTightHPSTau40Pass);
   _tree->SetBranchAddress("DoubleTightHPSTau40TightIDPass", &DoubleTightHPSTau40TightIDPass, &b_DoubleTightHPSTau40TightIDPass);
   _tree->SetBranchAddress("DoubleTightTau35Pass", &DoubleTightTau35Pass, &b_DoubleTightTau35Pass);
   _tree->SetBranchAddress("DoubleTightTau35TightIDPass", &DoubleTightTau35TightIDPass, &b_DoubleTightTau35TightIDPass);
   _tree->SetBranchAddress("DoubleTightTau40Pass", &DoubleTightTau40Pass, &b_DoubleTightTau40Pass);
   _tree->SetBranchAddress("DoubleTightTau40TightIDPass", &DoubleTightTau40TightIDPass, &b_DoubleTightTau40TightIDPass);
   _tree->SetBranchAddress("Ele24LooseHPSTau30Pass", &Ele24LooseHPSTau30Pass, &b_Ele24LooseHPSTau30Pass);
   _tree->SetBranchAddress("Ele24LooseHPSTau30TightIDPass", &Ele24LooseHPSTau30TightIDPass, &b_Ele24LooseHPSTau30TightIDPass);
   _tree->SetBranchAddress("Ele24LooseTau30Pass", &Ele24LooseTau30Pass, &b_Ele24LooseTau30Pass);
   _tree->SetBranchAddress("Ele24LooseTau30TightIDPass", &Ele24LooseTau30TightIDPass, &b_Ele24LooseTau30TightIDPass);
   _tree->SetBranchAddress("Ele27WPTightPass", &Ele27WPTightPass, &b_Ele27WPTightPass);
   _tree->SetBranchAddress("Ele32WPTightPass", &Ele32WPTightPass, &b_Ele32WPTightPass);
   _tree->SetBranchAddress("Ele35WPTightPass", &Ele35WPTightPass, &b_Ele35WPTightPass);
   _tree->SetBranchAddress("Ele38WPTightPass", &Ele38WPTightPass, &b_Ele38WPTightPass);
   _tree->SetBranchAddress("Ele40WPTightPass", &Ele40WPTightPass, &b_Ele40WPTightPass);
   _tree->SetBranchAddress("EmbPtWeight", &EmbPtWeight, &b_EmbPtWeight);
   _tree->SetBranchAddress("Eta", &Eta, &b_Eta);
   _tree->SetBranchAddress("Flag_BadChargedCandidateFilter", &Flag_BadChargedCandidateFilter, &b_Flag_BadChargedCandidateFilter);
   _tree->SetBranchAddress("Flag_BadPFMuonFilter", &Flag_BadPFMuonFilter, &b_Flag_BadPFMuonFilter);
   _tree->SetBranchAddress("Flag_EcalDeadCellTriggerPrimitiveFilter", &Flag_EcalDeadCellTriggerPrimitiveFilter, &b_Flag_EcalDeadCellTriggerPrimitiveFilter);
   _tree->SetBranchAddress("Flag_HBHENoiseFilter", &Flag_HBHENoiseFilter, &b_Flag_HBHENoiseFilter);
   _tree->SetBranchAddress("Flag_HBHENoiseIsoFilter", &Flag_HBHENoiseIsoFilter, &b_Flag_HBHENoiseIsoFilter);
   _tree->SetBranchAddress("Flag_badMuons", &Flag_badMuons, &b_Flag_badMuons);
   _tree->SetBranchAddress("Flag_duplicateMuons", &Flag_duplicateMuons, &b_Flag_duplicateMuons);
   _tree->SetBranchAddress("Flag_ecalBadCalibFilter", &Flag_ecalBadCalibFilter, &b_Flag_ecalBadCalibFilter);
   _tree->SetBranchAddress("Flag_ecalBadCalibReducedMINIAODFilter", &Flag_ecalBadCalibReducedMINIAODFilter, &b_Flag_ecalBadCalibReducedMINIAODFilter);
   _tree->SetBranchAddress("Flag_eeBadScFilter", &Flag_eeBadScFilter, &b_Flag_eeBadScFilter);
   _tree->SetBranchAddress("Flag_globalSuperTightHalo2016Filter", &Flag_globalSuperTightHalo2016Filter, &b_Flag_globalSuperTightHalo2016Filter);
   _tree->SetBranchAddress("Flag_globalTightHalo2016Filter", &Flag_globalTightHalo2016Filter, &b_Flag_globalTightHalo2016Filter);
   _tree->SetBranchAddress("Flag_goodVertices", &Flag_goodVertices, &b_Flag_goodVertices);
   _tree->SetBranchAddress("GenWeight", &GenWeight, &b_GenWeight);
   _tree->SetBranchAddress("Ht", &Ht, &b_Ht);
   _tree->SetBranchAddress("IsoMu24Pass", &IsoMu24Pass, &b_IsoMu24Pass);
   _tree->SetBranchAddress("IsoMu27Pass", &IsoMu27Pass, &b_IsoMu27Pass);
   _tree->SetBranchAddress("LT", &LT, &b_LT);
   _tree->SetBranchAddress("Mass", &Mass, &b_Mass);
   _tree->SetBranchAddress("MassError", &MassError, &b_MassError);
   _tree->SetBranchAddress("MassErrord1", &MassErrord1, &b_MassErrord1);
   _tree->SetBranchAddress("MassErrord2", &MassErrord2, &b_MassErrord2);
   _tree->SetBranchAddress("MassErrord3", &MassErrord3, &b_MassErrord3);
   _tree->SetBranchAddress("MassErrord4", &MassErrord4, &b_MassErrord4);
   _tree->SetBranchAddress("Mt", &Mt, &b_Mt);
   _tree->SetBranchAddress("Mu20LooseHPSTau27Pass", &Mu20LooseHPSTau27Pass, &b_Mu20LooseHPSTau27Pass);
   _tree->SetBranchAddress("Mu20LooseHPSTau27TightIDPass", &Mu20LooseHPSTau27TightIDPass, &b_Mu20LooseHPSTau27TightIDPass);
   _tree->SetBranchAddress("Mu20LooseTau27Pass", &Mu20LooseTau27Pass, &b_Mu20LooseTau27Pass);
   _tree->SetBranchAddress("Mu20LooseTau27TightIDPass", &Mu20LooseTau27TightIDPass, &b_Mu20LooseTau27TightIDPass);
   _tree->SetBranchAddress("Mu50Pass", &Mu50Pass, &b_Mu50Pass);
   _tree->SetBranchAddress("NUP", &NUP, &b_NUP);
   _tree->SetBranchAddress("Phi", &Phi, &b_Phi);
   _tree->SetBranchAddress("Pt", &Pt, &b_Pt);
   _tree->SetBranchAddress("PythiaWeight_fsr_muR0p25", &PythiaWeight_fsr_muR0p25, &b_PythiaWeight_fsr_muR0p25);
   _tree->SetBranchAddress("PythiaWeight_fsr_muR0p5", &PythiaWeight_fsr_muR0p5, &b_PythiaWeight_fsr_muR0p5);
   _tree->SetBranchAddress("PythiaWeight_fsr_muR2", &PythiaWeight_fsr_muR2, &b_PythiaWeight_fsr_muR2);
   _tree->SetBranchAddress("PythiaWeight_fsr_muR4", &PythiaWeight_fsr_muR4, &b_PythiaWeight_fsr_muR4);
   _tree->SetBranchAddress("PythiaWeight_isr_muR0p25", &PythiaWeight_isr_muR0p25, &b_PythiaWeight_isr_muR0p25);
   _tree->SetBranchAddress("PythiaWeight_isr_muR0p5", &PythiaWeight_isr_muR0p5, &b_PythiaWeight_isr_muR0p5);
   _tree->SetBranchAddress("PythiaWeight_isr_muR2", &PythiaWeight_isr_muR2, &b_PythiaWeight_isr_muR2);
   _tree->SetBranchAddress("PythiaWeight_isr_muR4", &PythiaWeight_isr_muR4, &b_PythiaWeight_isr_muR4);
   _tree->SetBranchAddress("Rivet_VEta", &Rivet_VEta, &b_Rivet_VEta);
   _tree->SetBranchAddress("Rivet_VPt", &Rivet_VPt, &b_Rivet_VPt);
   _tree->SetBranchAddress("Rivet_errorCode", &Rivet_errorCode, &b_Rivet_errorCode);
   _tree->SetBranchAddress("Rivet_higgsEta", &Rivet_higgsEta, &b_Rivet_higgsEta);
   _tree->SetBranchAddress("Rivet_higgsPt", &Rivet_higgsPt, &b_Rivet_higgsPt);
   _tree->SetBranchAddress("Rivet_higgsRapidity", &Rivet_higgsRapidity, &b_Rivet_higgsRapidity);
   _tree->SetBranchAddress("Rivet_j1eta", &Rivet_j1eta, &b_Rivet_j1eta);
   _tree->SetBranchAddress("Rivet_j1m", &Rivet_j1m, &b_Rivet_j1m);
   _tree->SetBranchAddress("Rivet_j1phi", &Rivet_j1phi, &b_Rivet_j1phi);
   _tree->SetBranchAddress("Rivet_j1pt", &Rivet_j1pt, &b_Rivet_j1pt);
   _tree->SetBranchAddress("Rivet_j2eta", &Rivet_j2eta, &b_Rivet_j2eta);
   _tree->SetBranchAddress("Rivet_j2m", &Rivet_j2m, &b_Rivet_j2m);
   _tree->SetBranchAddress("Rivet_j2phi", &Rivet_j2phi, &b_Rivet_j2phi);
   _tree->SetBranchAddress("Rivet_j2pt", &Rivet_j2pt, &b_Rivet_j2pt);
   _tree->SetBranchAddress("Rivet_nJets25", &Rivet_nJets25, &b_Rivet_nJets25);
   _tree->SetBranchAddress("Rivet_nJets30", &Rivet_nJets30, &b_Rivet_nJets30);
   _tree->SetBranchAddress("Rivet_p4decay_VEta", &Rivet_p4decay_VEta, &b_Rivet_p4decay_VEta);
   _tree->SetBranchAddress("Rivet_p4decay_VPt", &Rivet_p4decay_VPt, &b_Rivet_p4decay_VPt);
   _tree->SetBranchAddress("Rivet_prodMode", &Rivet_prodMode, &b_Rivet_prodMode);
   _tree->SetBranchAddress("Rivet_stage0_cat", &Rivet_stage0_cat, &b_Rivet_stage0_cat);
   _tree->SetBranchAddress("Rivet_stage1_1_cat_pTjet25GeV", &Rivet_stage1_1_cat_pTjet25GeV, &b_Rivet_stage1_1_cat_pTjet25GeV);
   _tree->SetBranchAddress("Rivet_stage1_1_cat_pTjet30GeV", &Rivet_stage1_1_cat_pTjet30GeV, &b_Rivet_stage1_1_cat_pTjet30GeV);
   _tree->SetBranchAddress("Rivet_stage1_1_fine_cat_pTjet25GeV", &Rivet_stage1_1_fine_cat_pTjet25GeV, &b_Rivet_stage1_1_fine_cat_pTjet25GeV);
   _tree->SetBranchAddress("Rivet_stage1_1_fine_cat_pTjet30GeV", &Rivet_stage1_1_fine_cat_pTjet30GeV, &b_Rivet_stage1_1_fine_cat_pTjet30GeV);
   _tree->SetBranchAddress("Rivet_stage1_cat_pTjet25GeV", &Rivet_stage1_cat_pTjet25GeV, &b_Rivet_stage1_cat_pTjet25GeV);
   _tree->SetBranchAddress("Rivet_stage1_cat_pTjet30GeV", &Rivet_stage1_cat_pTjet30GeV, &b_Rivet_stage1_cat_pTjet30GeV);
   _tree->SetBranchAddress("VBFDoubleLooseHPSTau20Pass", &VBFDoubleLooseHPSTau20Pass, &b_VBFDoubleLooseHPSTau20Pass);
   _tree->SetBranchAddress("VBFDoubleLooseTau20Pass", &VBFDoubleLooseTau20Pass, &b_VBFDoubleLooseTau20Pass);
   _tree->SetBranchAddress("VBFDoubleMediumHPSTau20Pass", &VBFDoubleMediumHPSTau20Pass, &b_VBFDoubleMediumHPSTau20Pass);
   _tree->SetBranchAddress("VBFDoubleMediumTau20Pass", &VBFDoubleMediumTau20Pass, &b_VBFDoubleMediumTau20Pass);
   _tree->SetBranchAddress("VBFDoubleTightHPSTau20Pass", &VBFDoubleTightHPSTau20Pass, &b_VBFDoubleTightHPSTau20Pass);
   _tree->SetBranchAddress("VBFDoubleTightTau20Pass", &VBFDoubleTightTau20Pass, &b_VBFDoubleTightTau20Pass);
   _tree->SetBranchAddress("bjetDeepCSVVeto20Loose_2016_DR0p5", &bjetDeepCSVVeto20Loose_2016_DR0p5, &b_bjetDeepCSVVeto20Loose_2016_DR0p5);
   _tree->SetBranchAddress("bjetDeepCSVVeto20Loose_2017_DR0p5", &bjetDeepCSVVeto20Loose_2017_DR0p5, &b_bjetDeepCSVVeto20Loose_2017_DR0p5);
   _tree->SetBranchAddress("bjetDeepCSVVeto20Loose_2018_DR0p5", &bjetDeepCSVVeto20Loose_2018_DR0p5, &b_bjetDeepCSVVeto20Loose_2018_DR0p5);
   _tree->SetBranchAddress("bjetDeepCSVVeto20Medium_2016_DR0", &bjetDeepCSVVeto20Medium_2016_DR0, &b_bjetDeepCSVVeto20Medium_2016_DR0);
   _tree->SetBranchAddress("bjetDeepCSVVeto20Medium_2016_DR0p5", &bjetDeepCSVVeto20Medium_2016_DR0p5, &b_bjetDeepCSVVeto20Medium_2016_DR0p5);
   _tree->SetBranchAddress("bjetDeepCSVVeto20Medium_2017_DR0", &bjetDeepCSVVeto20Medium_2017_DR0, &b_bjetDeepCSVVeto20Medium_2017_DR0);
   _tree->SetBranchAddress("bjetDeepCSVVeto20Medium_2017_DR0p5", &bjetDeepCSVVeto20Medium_2017_DR0p5, &b_bjetDeepCSVVeto20Medium_2017_DR0p5);
   _tree->SetBranchAddress("bjetDeepCSVVeto20Medium_2018_DR0", &bjetDeepCSVVeto20Medium_2018_DR0, &b_bjetDeepCSVVeto20Medium_2018_DR0);
   _tree->SetBranchAddress("bjetDeepCSVVeto20Medium_2018_DR0p5", &bjetDeepCSVVeto20Medium_2018_DR0p5, &b_bjetDeepCSVVeto20Medium_2018_DR0p5);
   _tree->SetBranchAddress("bjetDeepCSVVeto20Tight_2016_DR0p5", &bjetDeepCSVVeto20Tight_2016_DR0p5, &b_bjetDeepCSVVeto20Tight_2016_DR0p5);
   _tree->SetBranchAddress("bjetDeepCSVVeto20Tight_2017_DR0p5", &bjetDeepCSVVeto20Tight_2017_DR0p5, &b_bjetDeepCSVVeto20Tight_2017_DR0p5);
   _tree->SetBranchAddress("bjetDeepCSVVeto20Tight_2018_DR0p5", &bjetDeepCSVVeto20Tight_2018_DR0p5, &b_bjetDeepCSVVeto20Tight_2018_DR0p5);
   _tree->SetBranchAddress("bweight_2016", &bweight_2016, &b_bweight_2016);
   _tree->SetBranchAddress("bweight_2017", &bweight_2017, &b_bweight_2017);
   _tree->SetBranchAddress("bweight_2018", &bweight_2018, &b_bweight_2018);
   _tree->SetBranchAddress("charge", &charge, &b_charge);
   _tree->SetBranchAddress("dielectronVeto", &dielectronVeto, &b_dielectronVeto);
   _tree->SetBranchAddress("dimu9ele9Pass", &dimu9ele9Pass, &b_dimu9ele9Pass);
   _tree->SetBranchAddress("dimuonVeto", &dimuonVeto, &b_dimuonVeto);
   _tree->SetBranchAddress("doubleE25Pass", &doubleE25Pass, &b_doubleE25Pass);
   _tree->SetBranchAddress("doubleE33Pass", &doubleE33Pass, &b_doubleE33Pass);
   _tree->SetBranchAddress("doubleE_23_12Pass", &doubleE_23_12Pass, &b_doubleE_23_12Pass);
   _tree->SetBranchAddress("doubleMuDZminMass3p8Pass", &doubleMuDZminMass3p8Pass, &b_doubleMuDZminMass3p8Pass);
   _tree->SetBranchAddress("doubleMuDZminMass8Pass", &doubleMuDZminMass8Pass, &b_doubleMuDZminMass8Pass);
   _tree->SetBranchAddress("doubleMuSingleEPass", &doubleMuSingleEPass, &b_doubleMuSingleEPass);
   _tree->SetBranchAddress("doubleTau35Pass", &doubleTau35Pass, &b_doubleTau35Pass);
   _tree->SetBranchAddress("doubleTauCmbIso35RegPass", &doubleTauCmbIso35RegPass, &b_doubleTauCmbIso35RegPass);
   _tree->SetBranchAddress("eCBIDLoose", &eCBIDLoose, &b_eCBIDLoose);
   _tree->SetBranchAddress("eCBIDMedium", &eCBIDMedium, &b_eCBIDMedium);
   _tree->SetBranchAddress("eCBIDTight", &eCBIDTight, &b_eCBIDTight);
   _tree->SetBranchAddress("eCBIDVeto", &eCBIDVeto, &b_eCBIDVeto);
   _tree->SetBranchAddress("eCharge", &eCharge, &b_eCharge);
   _tree->SetBranchAddress("eChargeIdLoose", &eChargeIdLoose, &b_eChargeIdLoose);
   _tree->SetBranchAddress("eChargeIdMed", &eChargeIdMed, &b_eChargeIdMed);
   _tree->SetBranchAddress("eChargeIdTight", &eChargeIdTight, &b_eChargeIdTight);
   _tree->SetBranchAddress("eComesFromHiggs", &eComesFromHiggs, &b_eComesFromHiggs);
   _tree->SetBranchAddress("eCorrectedEt", &eCorrectedEt, &b_eCorrectedEt);
   _tree->SetBranchAddress("eE1x5", &eE1x5, &b_eE1x5);
   _tree->SetBranchAddress("eE2x5Max", &eE2x5Max, &b_eE2x5Max);
   _tree->SetBranchAddress("eE5x5", &eE5x5, &b_eE5x5);
   _tree->SetBranchAddress("eEcalIsoDR03", &eEcalIsoDR03, &b_eEcalIsoDR03);
   _tree->SetBranchAddress("eEnergyError", &eEnergyError, &b_eEnergyError);
   _tree->SetBranchAddress("eEnergyScaleDown", &eEnergyScaleDown, &b_eEnergyScaleDown);
   _tree->SetBranchAddress("eEnergyScaleGainDown", &eEnergyScaleGainDown, &b_eEnergyScaleGainDown);
   _tree->SetBranchAddress("eEnergyScaleGainUp", &eEnergyScaleGainUp, &b_eEnergyScaleGainUp);
   _tree->SetBranchAddress("eEnergyScaleStatDown", &eEnergyScaleStatDown, &b_eEnergyScaleStatDown);
   _tree->SetBranchAddress("eEnergyScaleStatUp", &eEnergyScaleStatUp, &b_eEnergyScaleStatUp);
   _tree->SetBranchAddress("eEnergyScaleSystDown", &eEnergyScaleSystDown, &b_eEnergyScaleSystDown);
   _tree->SetBranchAddress("eEnergyScaleSystUp", &eEnergyScaleSystUp, &b_eEnergyScaleSystUp);
   _tree->SetBranchAddress("eEnergyScaleUp", &eEnergyScaleUp, &b_eEnergyScaleUp);
   _tree->SetBranchAddress("eEnergySigmaDown", &eEnergySigmaDown, &b_eEnergySigmaDown);
   _tree->SetBranchAddress("eEnergySigmaPhiDown", &eEnergySigmaPhiDown, &b_eEnergySigmaPhiDown);
   _tree->SetBranchAddress("eEnergySigmaPhiUp", &eEnergySigmaPhiUp, &b_eEnergySigmaPhiUp);
   _tree->SetBranchAddress("eEnergySigmaRhoDown", &eEnergySigmaRhoDown, &b_eEnergySigmaRhoDown);
   _tree->SetBranchAddress("eEnergySigmaRhoUp", &eEnergySigmaRhoUp, &b_eEnergySigmaRhoUp);
   _tree->SetBranchAddress("eEnergySigmaUp", &eEnergySigmaUp, &b_eEnergySigmaUp);
   _tree->SetBranchAddress("eEta", &eEta, &b_eEta);
   _tree->SetBranchAddress("eGenCharge", &eGenCharge, &b_eGenCharge);
   _tree->SetBranchAddress("eGenDirectPromptTauDecay", &eGenDirectPromptTauDecay, &b_eGenDirectPromptTauDecay);
   _tree->SetBranchAddress("eGenEnergy", &eGenEnergy, &b_eGenEnergy);
   _tree->SetBranchAddress("eGenEta", &eGenEta, &b_eGenEta);
   _tree->SetBranchAddress("eGenIsPrompt", &eGenIsPrompt, &b_eGenIsPrompt);
   _tree->SetBranchAddress("eGenMotherPdgId", &eGenMotherPdgId, &b_eGenMotherPdgId);
   _tree->SetBranchAddress("eGenParticle", &eGenParticle, &b_eGenParticle);
   _tree->SetBranchAddress("eGenPdgId", &eGenPdgId, &b_eGenPdgId);
   _tree->SetBranchAddress("eGenPhi", &eGenPhi, &b_eGenPhi);
   _tree->SetBranchAddress("eGenPrompt", &eGenPrompt, &b_eGenPrompt);
   _tree->SetBranchAddress("eGenPromptTauDecay", &eGenPromptTauDecay, &b_eGenPromptTauDecay);
   _tree->SetBranchAddress("eGenPt", &eGenPt, &b_eGenPt);
   _tree->SetBranchAddress("eGenTauDecay", &eGenTauDecay, &b_eGenTauDecay);
   _tree->SetBranchAddress("eGenVZ", &eGenVZ, &b_eGenVZ);
   _tree->SetBranchAddress("eGenVtxPVMatch", &eGenVtxPVMatch, &b_eGenVtxPVMatch);
   _tree->SetBranchAddress("eHadronicDepth1OverEm", &eHadronicDepth1OverEm, &b_eHadronicDepth1OverEm);
   _tree->SetBranchAddress("eHadronicDepth2OverEm", &eHadronicDepth2OverEm, &b_eHadronicDepth2OverEm);
   _tree->SetBranchAddress("eHadronicOverEM", &eHadronicOverEM, &b_eHadronicOverEM);
   _tree->SetBranchAddress("eHcalIsoDR03", &eHcalIsoDR03, &b_eHcalIsoDR03);
   _tree->SetBranchAddress("eIP3D", &eIP3D, &b_eIP3D);
   _tree->SetBranchAddress("eIP3DErr", &eIP3DErr, &b_eIP3DErr);
   _tree->SetBranchAddress("eIsoDB03", &eIsoDB03, &b_eIsoDB03);
   _tree->SetBranchAddress("eJetArea", &eJetArea, &b_eJetArea);
   _tree->SetBranchAddress("eJetBtag", &eJetBtag, &b_eJetBtag);
   _tree->SetBranchAddress("eJetDR", &eJetDR, &b_eJetDR);
   _tree->SetBranchAddress("eJetEtaEtaMoment", &eJetEtaEtaMoment, &b_eJetEtaEtaMoment);
   _tree->SetBranchAddress("eJetEtaPhiMoment", &eJetEtaPhiMoment, &b_eJetEtaPhiMoment);
   _tree->SetBranchAddress("eJetEtaPhiSpread", &eJetEtaPhiSpread, &b_eJetEtaPhiSpread);
   _tree->SetBranchAddress("eJetHadronFlavour", &eJetHadronFlavour, &b_eJetHadronFlavour);
   _tree->SetBranchAddress("eJetPFCISVBtag", &eJetPFCISVBtag, &b_eJetPFCISVBtag);
   _tree->SetBranchAddress("eJetPartonFlavour", &eJetPartonFlavour, &b_eJetPartonFlavour);
   _tree->SetBranchAddress("eJetPhiPhiMoment", &eJetPhiPhiMoment, &b_eJetPhiPhiMoment);
   _tree->SetBranchAddress("eJetPt", &eJetPt, &b_eJetPt);
   _tree->SetBranchAddress("eLowestMll", &eLowestMll, &b_eLowestMll);
   _tree->SetBranchAddress("eMVAIsoWP80", &eMVAIsoWP80, &b_eMVAIsoWP80);
   _tree->SetBranchAddress("eMVAIsoWP90", &eMVAIsoWP90, &b_eMVAIsoWP90);
   _tree->SetBranchAddress("eMVAIsoWPHZZ", &eMVAIsoWPHZZ, &b_eMVAIsoWPHZZ);
   _tree->SetBranchAddress("eMVAIsoWPLoose", &eMVAIsoWPLoose, &b_eMVAIsoWPLoose);
   _tree->SetBranchAddress("eMVANoisoWP80", &eMVANoisoWP80, &b_eMVANoisoWP80);
   _tree->SetBranchAddress("eMVANoisoWP90", &eMVANoisoWP90, &b_eMVANoisoWP90);
   _tree->SetBranchAddress("eMVANoisoWPLoose", &eMVANoisoWPLoose, &b_eMVANoisoWPLoose);
   _tree->SetBranchAddress("eMass", &eMass, &b_eMass);
   _tree->SetBranchAddress("eMatchEmbeddedFilterEle24Tau30", &eMatchEmbeddedFilterEle24Tau30, &b_eMatchEmbeddedFilterEle24Tau30);
   _tree->SetBranchAddress("eMatchEmbeddedFilterEle27", &eMatchEmbeddedFilterEle27, &b_eMatchEmbeddedFilterEle27);
   _tree->SetBranchAddress("eMatchEmbeddedFilterEle32", &eMatchEmbeddedFilterEle32, &b_eMatchEmbeddedFilterEle32);
   _tree->SetBranchAddress("eMatchEmbeddedFilterEle32DoubleL1_v1", &eMatchEmbeddedFilterEle32DoubleL1_v1, &b_eMatchEmbeddedFilterEle32DoubleL1_v1);
   _tree->SetBranchAddress("eMatchEmbeddedFilterEle32DoubleL1_v2", &eMatchEmbeddedFilterEle32DoubleL1_v2, &b_eMatchEmbeddedFilterEle32DoubleL1_v2);
   _tree->SetBranchAddress("eMatchEmbeddedFilterEle35", &eMatchEmbeddedFilterEle35, &b_eMatchEmbeddedFilterEle35);
   _tree->SetBranchAddress("eMatchesEle24HPSTau30Filter", &eMatchesEle24HPSTau30Filter, &b_eMatchesEle24HPSTau30Filter);
   _tree->SetBranchAddress("eMatchesEle24HPSTau30Path", &eMatchesEle24HPSTau30Path, &b_eMatchesEle24HPSTau30Path);
   _tree->SetBranchAddress("eMatchesEle24Tau30Filter", &eMatchesEle24Tau30Filter, &b_eMatchesEle24Tau30Filter);
   _tree->SetBranchAddress("eMatchesEle24Tau30Path", &eMatchesEle24Tau30Path, &b_eMatchesEle24Tau30Path);
   _tree->SetBranchAddress("eMatchesEle25Filter", &eMatchesEle25Filter, &b_eMatchesEle25Filter);
   _tree->SetBranchAddress("eMatchesEle25Path", &eMatchesEle25Path, &b_eMatchesEle25Path);
   _tree->SetBranchAddress("eMatchesEle27Filter", &eMatchesEle27Filter, &b_eMatchesEle27Filter);
   _tree->SetBranchAddress("eMatchesEle27Path", &eMatchesEle27Path, &b_eMatchesEle27Path);
   _tree->SetBranchAddress("eMatchesEle32Filter", &eMatchesEle32Filter, &b_eMatchesEle32Filter);
   _tree->SetBranchAddress("eMatchesEle32Path", &eMatchesEle32Path, &b_eMatchesEle32Path);
   _tree->SetBranchAddress("eMatchesEle35Filter", &eMatchesEle35Filter, &b_eMatchesEle35Filter);
   _tree->SetBranchAddress("eMatchesEle35Path", &eMatchesEle35Path, &b_eMatchesEle35Path);
   _tree->SetBranchAddress("eMatchesMu23e12DZFilter", &eMatchesMu23e12DZFilter, &b_eMatchesMu23e12DZFilter);
   _tree->SetBranchAddress("eMatchesMu23e12DZPath", &eMatchesMu23e12DZPath, &b_eMatchesMu23e12DZPath);
   _tree->SetBranchAddress("eMatchesMu23e12Filter", &eMatchesMu23e12Filter, &b_eMatchesMu23e12Filter);
   _tree->SetBranchAddress("eMatchesMu23e12Path", &eMatchesMu23e12Path, &b_eMatchesMu23e12Path);
   _tree->SetBranchAddress("eMatchesMu8e23DZFilter", &eMatchesMu8e23DZFilter, &b_eMatchesMu8e23DZFilter);
   _tree->SetBranchAddress("eMatchesMu8e23DZPath", &eMatchesMu8e23DZPath, &b_eMatchesMu8e23DZPath);
   _tree->SetBranchAddress("eMatchesMu8e23Filter", &eMatchesMu8e23Filter, &b_eMatchesMu8e23Filter);
   _tree->SetBranchAddress("eMatchesMu8e23Path", &eMatchesMu8e23Path, &b_eMatchesMu8e23Path);
   _tree->SetBranchAddress("eMissingHits", &eMissingHits, &b_eMissingHits);
   _tree->SetBranchAddress("eNearMuonVeto", &eNearMuonVeto, &b_eNearMuonVeto);
   _tree->SetBranchAddress("eNearestMuonDR", &eNearestMuonDR, &b_eNearestMuonDR);
   _tree->SetBranchAddress("eNearestZMass", &eNearestZMass, &b_eNearestZMass);
   _tree->SetBranchAddress("ePFChargedIso", &ePFChargedIso, &b_ePFChargedIso);
   _tree->SetBranchAddress("ePFNeutralIso", &ePFNeutralIso, &b_ePFNeutralIso);
   _tree->SetBranchAddress("ePFPUChargedIso", &ePFPUChargedIso, &b_ePFPUChargedIso);
   _tree->SetBranchAddress("ePFPhotonIso", &ePFPhotonIso, &b_ePFPhotonIso);
   _tree->SetBranchAddress("ePVDXY", &ePVDXY, &b_ePVDXY);
   _tree->SetBranchAddress("ePVDZ", &ePVDZ, &b_ePVDZ);
   _tree->SetBranchAddress("ePassesConversionVeto", &ePassesConversionVeto, &b_ePassesConversionVeto);
   _tree->SetBranchAddress("ePhi", &ePhi, &b_ePhi);
   _tree->SetBranchAddress("ePt", &ePt, &b_ePt);
   _tree->SetBranchAddress("eRelIso", &eRelIso, &b_eRelIso);
   _tree->SetBranchAddress("eRelPFIsoDB", &eRelPFIsoDB, &b_eRelPFIsoDB);
   _tree->SetBranchAddress("eRelPFIsoRho", &eRelPFIsoRho, &b_eRelPFIsoRho);
   _tree->SetBranchAddress("eRho", &eRho, &b_eRho);
   _tree->SetBranchAddress("eSCEnergy", &eSCEnergy, &b_eSCEnergy);
   _tree->SetBranchAddress("eSCEta", &eSCEta, &b_eSCEta);
   _tree->SetBranchAddress("eSCEtaWidth", &eSCEtaWidth, &b_eSCEtaWidth);
   _tree->SetBranchAddress("eSCPhi", &eSCPhi, &b_eSCPhi);
   _tree->SetBranchAddress("eSCPhiWidth", &eSCPhiWidth, &b_eSCPhiWidth);
   _tree->SetBranchAddress("eSCPreshowerEnergy", &eSCPreshowerEnergy, &b_eSCPreshowerEnergy);
   _tree->SetBranchAddress("eSCRawEnergy", &eSCRawEnergy, &b_eSCRawEnergy);
   _tree->SetBranchAddress("eSIP2D", &eSIP2D, &b_eSIP2D);
   _tree->SetBranchAddress("eSIP3D", &eSIP3D, &b_eSIP3D);
   _tree->SetBranchAddress("eSigmaIEtaIEta", &eSigmaIEtaIEta, &b_eSigmaIEtaIEta);
   _tree->SetBranchAddress("eTrkIsoDR03", &eTrkIsoDR03, &b_eTrkIsoDR03);
   _tree->SetBranchAddress("eVZ", &eVZ, &b_eVZ);
   _tree->SetBranchAddress("eVetoHZZPt5", &eVetoHZZPt5, &b_eVetoHZZPt5);
   _tree->SetBranchAddress("eVetoZTTp001dxyz", &eVetoZTTp001dxyz, &b_eVetoZTTp001dxyz);
   _tree->SetBranchAddress("eVetoZTTp001dxyzR0", &eVetoZTTp001dxyzR0, &b_eVetoZTTp001dxyzR0);
   _tree->SetBranchAddress("eZTTGenMatching", &eZTTGenMatching, &b_eZTTGenMatching);
   _tree->SetBranchAddress("e_m1_DR", &e_m1_DR, &b_e_m1_DR);
   _tree->SetBranchAddress("e_m1_Mass", &e_m1_Mass, &b_e_m1_Mass);
   _tree->SetBranchAddress("e_m1_doubleL1IsoTauMatch", &e_m1_doubleL1IsoTauMatch, &b_e_m1_doubleL1IsoTauMatch);
   _tree->SetBranchAddress("e_m2_DR", &e_m2_DR, &b_e_m2_DR);
   _tree->SetBranchAddress("e_m2_Mass", &e_m2_Mass, &b_e_m2_Mass);
   _tree->SetBranchAddress("e_m2_doubleL1IsoTauMatch", &e_m2_doubleL1IsoTauMatch, &b_e_m2_doubleL1IsoTauMatch);
   _tree->SetBranchAddress("e_m3_DR", &e_m3_DR, &b_e_m3_DR);
   _tree->SetBranchAddress("e_m3_Mass", &e_m3_Mass, &b_e_m3_Mass);
   _tree->SetBranchAddress("e_m3_doubleL1IsoTauMatch", &e_m3_doubleL1IsoTauMatch, &b_e_m3_doubleL1IsoTauMatch);
   _tree->SetBranchAddress("edeltaEtaSuperClusterTrackAtVtx", &edeltaEtaSuperClusterTrackAtVtx, &b_edeltaEtaSuperClusterTrackAtVtx);
   _tree->SetBranchAddress("edeltaPhiSuperClusterTrackAtVtx", &edeltaPhiSuperClusterTrackAtVtx, &b_edeltaPhiSuperClusterTrackAtVtx);
   _tree->SetBranchAddress("eeSuperClusterOverP", &eeSuperClusterOverP, &b_eeSuperClusterOverP);
   _tree->SetBranchAddress("eecalEnergy", &eecalEnergy, &b_eecalEnergy);
   _tree->SetBranchAddress("efBrem", &efBrem, &b_efBrem);
   _tree->SetBranchAddress("etrackMomentumAtVtxP", &etrackMomentumAtVtxP, &b_etrackMomentumAtVtxP);
   _tree->SetBranchAddress("evt", &evt, &b_evt);
   _tree->SetBranchAddress("genEta", &genEta, &b_genEta);
   _tree->SetBranchAddress("genHTT", &genHTT, &b_genHTT);
   _tree->SetBranchAddress("genM", &genM, &b_genM);
   _tree->SetBranchAddress("genMass", &genMass, &b_genMass);
   _tree->SetBranchAddress("genPhi", &genPhi, &b_genPhi);
   _tree->SetBranchAddress("genpT", &genpT, &b_genpT);
   _tree->SetBranchAddress("genpX", &genpX, &b_genpX);
   _tree->SetBranchAddress("genpY", &genpY, &b_genpY);
   _tree->SetBranchAddress("gentau1_eta", &gentau1_eta, &b_gentau1_eta);
   _tree->SetBranchAddress("gentau1_pt", &gentau1_pt, &b_gentau1_pt);
   _tree->SetBranchAddress("gentau2_eta", &gentau2_eta, &b_gentau2_eta);
   _tree->SetBranchAddress("gentau2_pt", &gentau2_pt, &b_gentau2_pt);
   _tree->SetBranchAddress("isdata", &isdata, &b_isdata);
   _tree->SetBranchAddress("isembed", &isembed, &b_isembed);
   _tree->SetBranchAddress("j1csv", &j1csv, &b_j1csv);
   _tree->SetBranchAddress("j1csvWoNoisyJets", &j1csvWoNoisyJets, &b_j1csvWoNoisyJets);
   _tree->SetBranchAddress("j1eta", &j1eta, &b_j1eta);
   _tree->SetBranchAddress("j1etaWoNoisyJets", &j1etaWoNoisyJets, &b_j1etaWoNoisyJets);
   _tree->SetBranchAddress("j1hadronflavor", &j1hadronflavor, &b_j1hadronflavor);
   _tree->SetBranchAddress("j1hadronflavorWoNoisyJets", &j1hadronflavorWoNoisyJets, &b_j1hadronflavorWoNoisyJets);
   _tree->SetBranchAddress("j1phi", &j1phi, &b_j1phi);
   _tree->SetBranchAddress("j1phiWoNoisyJets", &j1phiWoNoisyJets, &b_j1phiWoNoisyJets);
   _tree->SetBranchAddress("j1pt", &j1pt, &b_j1pt);
   _tree->SetBranchAddress("j1ptWoNoisyJets", &j1ptWoNoisyJets, &b_j1ptWoNoisyJets);
   _tree->SetBranchAddress("j1ptWoNoisyJets_JERDown", &j1ptWoNoisyJets_JERDown, &b_j1ptWoNoisyJets_JERDown);
   _tree->SetBranchAddress("j1ptWoNoisyJets_JERUp", &j1ptWoNoisyJets_JERUp, &b_j1ptWoNoisyJets_JERUp);
   _tree->SetBranchAddress("j1ptWoNoisyJets_JetAbsoluteDown", &j1ptWoNoisyJets_JetAbsoluteDown, &b_j1ptWoNoisyJets_JetAbsoluteDown);
   _tree->SetBranchAddress("j1ptWoNoisyJets_JetAbsoluteUp", &j1ptWoNoisyJets_JetAbsoluteUp, &b_j1ptWoNoisyJets_JetAbsoluteUp);
   _tree->SetBranchAddress("j1ptWoNoisyJets_JetAbsoluteyearDown", &j1ptWoNoisyJets_JetAbsoluteyearDown, &b_j1ptWoNoisyJets_JetAbsoluteyearDown);
   _tree->SetBranchAddress("j1ptWoNoisyJets_JetAbsoluteyearUp", &j1ptWoNoisyJets_JetAbsoluteyearUp, &b_j1ptWoNoisyJets_JetAbsoluteyearUp);
   _tree->SetBranchAddress("j1ptWoNoisyJets_JetBBEC1Down", &j1ptWoNoisyJets_JetBBEC1Down, &b_j1ptWoNoisyJets_JetBBEC1Down);
   _tree->SetBranchAddress("j1ptWoNoisyJets_JetBBEC1Up", &j1ptWoNoisyJets_JetBBEC1Up, &b_j1ptWoNoisyJets_JetBBEC1Up);
   _tree->SetBranchAddress("j1ptWoNoisyJets_JetBBEC1yearDown", &j1ptWoNoisyJets_JetBBEC1yearDown, &b_j1ptWoNoisyJets_JetBBEC1yearDown);
   _tree->SetBranchAddress("j1ptWoNoisyJets_JetBBEC1yearUp", &j1ptWoNoisyJets_JetBBEC1yearUp, &b_j1ptWoNoisyJets_JetBBEC1yearUp);
   _tree->SetBranchAddress("j1ptWoNoisyJets_JetEC2Down", &j1ptWoNoisyJets_JetEC2Down, &b_j1ptWoNoisyJets_JetEC2Down);
   _tree->SetBranchAddress("j1ptWoNoisyJets_JetEC2Up", &j1ptWoNoisyJets_JetEC2Up, &b_j1ptWoNoisyJets_JetEC2Up);
   _tree->SetBranchAddress("j1ptWoNoisyJets_JetEC2yearDown", &j1ptWoNoisyJets_JetEC2yearDown, &b_j1ptWoNoisyJets_JetEC2yearDown);
   _tree->SetBranchAddress("j1ptWoNoisyJets_JetEC2yearUp", &j1ptWoNoisyJets_JetEC2yearUp, &b_j1ptWoNoisyJets_JetEC2yearUp);
   _tree->SetBranchAddress("j1ptWoNoisyJets_JetFlavorQCDDown", &j1ptWoNoisyJets_JetFlavorQCDDown, &b_j1ptWoNoisyJets_JetFlavorQCDDown);
   _tree->SetBranchAddress("j1ptWoNoisyJets_JetFlavorQCDUp", &j1ptWoNoisyJets_JetFlavorQCDUp, &b_j1ptWoNoisyJets_JetFlavorQCDUp);
   _tree->SetBranchAddress("j1ptWoNoisyJets_JetHFDown", &j1ptWoNoisyJets_JetHFDown, &b_j1ptWoNoisyJets_JetHFDown);
   _tree->SetBranchAddress("j1ptWoNoisyJets_JetHFUp", &j1ptWoNoisyJets_JetHFUp, &b_j1ptWoNoisyJets_JetHFUp);
   _tree->SetBranchAddress("j1ptWoNoisyJets_JetHFyearDown", &j1ptWoNoisyJets_JetHFyearDown, &b_j1ptWoNoisyJets_JetHFyearDown);
   _tree->SetBranchAddress("j1ptWoNoisyJets_JetHFyearUp", &j1ptWoNoisyJets_JetHFyearUp, &b_j1ptWoNoisyJets_JetHFyearUp);
   _tree->SetBranchAddress("j1ptWoNoisyJets_JetRelativeBalDown", &j1ptWoNoisyJets_JetRelativeBalDown, &b_j1ptWoNoisyJets_JetRelativeBalDown);
   _tree->SetBranchAddress("j1ptWoNoisyJets_JetRelativeBalUp", &j1ptWoNoisyJets_JetRelativeBalUp, &b_j1ptWoNoisyJets_JetRelativeBalUp);
   _tree->SetBranchAddress("j1ptWoNoisyJets_JetRelativeSampleDown", &j1ptWoNoisyJets_JetRelativeSampleDown, &b_j1ptWoNoisyJets_JetRelativeSampleDown);
   _tree->SetBranchAddress("j1ptWoNoisyJets_JetRelativeSampleUp", &j1ptWoNoisyJets_JetRelativeSampleUp, &b_j1ptWoNoisyJets_JetRelativeSampleUp);
   _tree->SetBranchAddress("j1pt_JERDown", &j1pt_JERDown, &b_j1pt_JERDown);
   _tree->SetBranchAddress("j1pt_JERUp", &j1pt_JERUp, &b_j1pt_JERUp);
   _tree->SetBranchAddress("j1pt_JetAbsoluteDown", &j1pt_JetAbsoluteDown, &b_j1pt_JetAbsoluteDown);
   _tree->SetBranchAddress("j1pt_JetAbsoluteUp", &j1pt_JetAbsoluteUp, &b_j1pt_JetAbsoluteUp);
   _tree->SetBranchAddress("j1pt_JetAbsoluteyearDown", &j1pt_JetAbsoluteyearDown, &b_j1pt_JetAbsoluteyearDown);
   _tree->SetBranchAddress("j1pt_JetAbsoluteyearUp", &j1pt_JetAbsoluteyearUp, &b_j1pt_JetAbsoluteyearUp);
   _tree->SetBranchAddress("j1pt_JetBBEC1Down", &j1pt_JetBBEC1Down, &b_j1pt_JetBBEC1Down);
   _tree->SetBranchAddress("j1pt_JetBBEC1Up", &j1pt_JetBBEC1Up, &b_j1pt_JetBBEC1Up);
   _tree->SetBranchAddress("j1pt_JetBBEC1yearDown", &j1pt_JetBBEC1yearDown, &b_j1pt_JetBBEC1yearDown);
   _tree->SetBranchAddress("j1pt_JetBBEC1yearUp", &j1pt_JetBBEC1yearUp, &b_j1pt_JetBBEC1yearUp);
   _tree->SetBranchAddress("j1pt_JetEC2Down", &j1pt_JetEC2Down, &b_j1pt_JetEC2Down);
   _tree->SetBranchAddress("j1pt_JetEC2Up", &j1pt_JetEC2Up, &b_j1pt_JetEC2Up);
   _tree->SetBranchAddress("j1pt_JetEC2yearDown", &j1pt_JetEC2yearDown, &b_j1pt_JetEC2yearDown);
   _tree->SetBranchAddress("j1pt_JetEC2yearUp", &j1pt_JetEC2yearUp, &b_j1pt_JetEC2yearUp);
   _tree->SetBranchAddress("j1pt_JetFlavorQCDDown", &j1pt_JetFlavorQCDDown, &b_j1pt_JetFlavorQCDDown);
   _tree->SetBranchAddress("j1pt_JetFlavorQCDUp", &j1pt_JetFlavorQCDUp, &b_j1pt_JetFlavorQCDUp);
   _tree->SetBranchAddress("j1pt_JetHFDown", &j1pt_JetHFDown, &b_j1pt_JetHFDown);
   _tree->SetBranchAddress("j1pt_JetHFUp", &j1pt_JetHFUp, &b_j1pt_JetHFUp);
   _tree->SetBranchAddress("j1pt_JetHFyearDown", &j1pt_JetHFyearDown, &b_j1pt_JetHFyearDown);
   _tree->SetBranchAddress("j1pt_JetHFyearUp", &j1pt_JetHFyearUp, &b_j1pt_JetHFyearUp);
   _tree->SetBranchAddress("j1pt_JetRelativeBalDown", &j1pt_JetRelativeBalDown, &b_j1pt_JetRelativeBalDown);
   _tree->SetBranchAddress("j1pt_JetRelativeBalUp", &j1pt_JetRelativeBalUp, &b_j1pt_JetRelativeBalUp);
   _tree->SetBranchAddress("j1pt_JetRelativeSampleDown", &j1pt_JetRelativeSampleDown, &b_j1pt_JetRelativeSampleDown);
   _tree->SetBranchAddress("j1pt_JetRelativeSampleUp", &j1pt_JetRelativeSampleUp, &b_j1pt_JetRelativeSampleUp);
   _tree->SetBranchAddress("j2csv", &j2csv, &b_j2csv);
   _tree->SetBranchAddress("j2csvWoNoisyJets", &j2csvWoNoisyJets, &b_j2csvWoNoisyJets);
   _tree->SetBranchAddress("j2eta", &j2eta, &b_j2eta);
   _tree->SetBranchAddress("j2etaWoNoisyJets", &j2etaWoNoisyJets, &b_j2etaWoNoisyJets);
   _tree->SetBranchAddress("j2hadronflavor", &j2hadronflavor, &b_j2hadronflavor);
   _tree->SetBranchAddress("j2hadronflavorWoNoisyJets", &j2hadronflavorWoNoisyJets, &b_j2hadronflavorWoNoisyJets);
   _tree->SetBranchAddress("j2phi", &j2phi, &b_j2phi);
   _tree->SetBranchAddress("j2phiWoNoisyJets", &j2phiWoNoisyJets, &b_j2phiWoNoisyJets);
   _tree->SetBranchAddress("j2pt", &j2pt, &b_j2pt);
   _tree->SetBranchAddress("j2ptWoNoisyJets", &j2ptWoNoisyJets, &b_j2ptWoNoisyJets);
   _tree->SetBranchAddress("j2ptWoNoisyJets_JERDown", &j2ptWoNoisyJets_JERDown, &b_j2ptWoNoisyJets_JERDown);
   _tree->SetBranchAddress("j2ptWoNoisyJets_JERUp", &j2ptWoNoisyJets_JERUp, &b_j2ptWoNoisyJets_JERUp);
   _tree->SetBranchAddress("j2ptWoNoisyJets_JetAbsoluteDown", &j2ptWoNoisyJets_JetAbsoluteDown, &b_j2ptWoNoisyJets_JetAbsoluteDown);
   _tree->SetBranchAddress("j2ptWoNoisyJets_JetAbsoluteUp", &j2ptWoNoisyJets_JetAbsoluteUp, &b_j2ptWoNoisyJets_JetAbsoluteUp);
   _tree->SetBranchAddress("j2ptWoNoisyJets_JetAbsoluteyearDown", &j2ptWoNoisyJets_JetAbsoluteyearDown, &b_j2ptWoNoisyJets_JetAbsoluteyearDown);
   _tree->SetBranchAddress("j2ptWoNoisyJets_JetAbsoluteyearUp", &j2ptWoNoisyJets_JetAbsoluteyearUp, &b_j2ptWoNoisyJets_JetAbsoluteyearUp);
   _tree->SetBranchAddress("j2ptWoNoisyJets_JetBBEC1Down", &j2ptWoNoisyJets_JetBBEC1Down, &b_j2ptWoNoisyJets_JetBBEC1Down);
   _tree->SetBranchAddress("j2ptWoNoisyJets_JetBBEC1Up", &j2ptWoNoisyJets_JetBBEC1Up, &b_j2ptWoNoisyJets_JetBBEC1Up);
   _tree->SetBranchAddress("j2ptWoNoisyJets_JetBBEC1yearDown", &j2ptWoNoisyJets_JetBBEC1yearDown, &b_j2ptWoNoisyJets_JetBBEC1yearDown);
   _tree->SetBranchAddress("j2ptWoNoisyJets_JetBBEC1yearUp", &j2ptWoNoisyJets_JetBBEC1yearUp, &b_j2ptWoNoisyJets_JetBBEC1yearUp);
   _tree->SetBranchAddress("j2ptWoNoisyJets_JetEC2Down", &j2ptWoNoisyJets_JetEC2Down, &b_j2ptWoNoisyJets_JetEC2Down);
   _tree->SetBranchAddress("j2ptWoNoisyJets_JetEC2Up", &j2ptWoNoisyJets_JetEC2Up, &b_j2ptWoNoisyJets_JetEC2Up);
   _tree->SetBranchAddress("j2ptWoNoisyJets_JetEC2yearDown", &j2ptWoNoisyJets_JetEC2yearDown, &b_j2ptWoNoisyJets_JetEC2yearDown);
   _tree->SetBranchAddress("j2ptWoNoisyJets_JetEC2yearUp", &j2ptWoNoisyJets_JetEC2yearUp, &b_j2ptWoNoisyJets_JetEC2yearUp);
   _tree->SetBranchAddress("j2ptWoNoisyJets_JetFlavorQCDDown", &j2ptWoNoisyJets_JetFlavorQCDDown, &b_j2ptWoNoisyJets_JetFlavorQCDDown);
   _tree->SetBranchAddress("j2ptWoNoisyJets_JetFlavorQCDUp", &j2ptWoNoisyJets_JetFlavorQCDUp, &b_j2ptWoNoisyJets_JetFlavorQCDUp);
   _tree->SetBranchAddress("j2ptWoNoisyJets_JetHFDown", &j2ptWoNoisyJets_JetHFDown, &b_j2ptWoNoisyJets_JetHFDown);
   _tree->SetBranchAddress("j2ptWoNoisyJets_JetHFUp", &j2ptWoNoisyJets_JetHFUp, &b_j2ptWoNoisyJets_JetHFUp);
   _tree->SetBranchAddress("j2ptWoNoisyJets_JetHFyearDown", &j2ptWoNoisyJets_JetHFyearDown, &b_j2ptWoNoisyJets_JetHFyearDown);
   _tree->SetBranchAddress("j2ptWoNoisyJets_JetHFyearUp", &j2ptWoNoisyJets_JetHFyearUp, &b_j2ptWoNoisyJets_JetHFyearUp);
   _tree->SetBranchAddress("j2ptWoNoisyJets_JetRelativeBalDown", &j2ptWoNoisyJets_JetRelativeBalDown, &b_j2ptWoNoisyJets_JetRelativeBalDown);
   _tree->SetBranchAddress("j2ptWoNoisyJets_JetRelativeBalUp", &j2ptWoNoisyJets_JetRelativeBalUp, &b_j2ptWoNoisyJets_JetRelativeBalUp);
   _tree->SetBranchAddress("j2ptWoNoisyJets_JetRelativeSampleDown", &j2ptWoNoisyJets_JetRelativeSampleDown, &b_j2ptWoNoisyJets_JetRelativeSampleDown);
   _tree->SetBranchAddress("j2ptWoNoisyJets_JetRelativeSampleUp", &j2ptWoNoisyJets_JetRelativeSampleUp, &b_j2ptWoNoisyJets_JetRelativeSampleUp);
   _tree->SetBranchAddress("j2pt_JERDown", &j2pt_JERDown, &b_j2pt_JERDown);
   _tree->SetBranchAddress("j2pt_JERUp", &j2pt_JERUp, &b_j2pt_JERUp);
   _tree->SetBranchAddress("j2pt_JetAbsoluteDown", &j2pt_JetAbsoluteDown, &b_j2pt_JetAbsoluteDown);
   _tree->SetBranchAddress("j2pt_JetAbsoluteUp", &j2pt_JetAbsoluteUp, &b_j2pt_JetAbsoluteUp);
   _tree->SetBranchAddress("j2pt_JetAbsoluteyearDown", &j2pt_JetAbsoluteyearDown, &b_j2pt_JetAbsoluteyearDown);
   _tree->SetBranchAddress("j2pt_JetAbsoluteyearUp", &j2pt_JetAbsoluteyearUp, &b_j2pt_JetAbsoluteyearUp);
   _tree->SetBranchAddress("j2pt_JetBBEC1Down", &j2pt_JetBBEC1Down, &b_j2pt_JetBBEC1Down);
   _tree->SetBranchAddress("j2pt_JetBBEC1Up", &j2pt_JetBBEC1Up, &b_j2pt_JetBBEC1Up);
   _tree->SetBranchAddress("j2pt_JetBBEC1yearDown", &j2pt_JetBBEC1yearDown, &b_j2pt_JetBBEC1yearDown);
   _tree->SetBranchAddress("j2pt_JetBBEC1yearUp", &j2pt_JetBBEC1yearUp, &b_j2pt_JetBBEC1yearUp);
   _tree->SetBranchAddress("j2pt_JetEC2Down", &j2pt_JetEC2Down, &b_j2pt_JetEC2Down);
   _tree->SetBranchAddress("j2pt_JetEC2Up", &j2pt_JetEC2Up, &b_j2pt_JetEC2Up);
   _tree->SetBranchAddress("j2pt_JetEC2yearDown", &j2pt_JetEC2yearDown, &b_j2pt_JetEC2yearDown);
   _tree->SetBranchAddress("j2pt_JetEC2yearUp", &j2pt_JetEC2yearUp, &b_j2pt_JetEC2yearUp);
   _tree->SetBranchAddress("j2pt_JetFlavorQCDDown", &j2pt_JetFlavorQCDDown, &b_j2pt_JetFlavorQCDDown);
   _tree->SetBranchAddress("j2pt_JetFlavorQCDUp", &j2pt_JetFlavorQCDUp, &b_j2pt_JetFlavorQCDUp);
   _tree->SetBranchAddress("j2pt_JetHFDown", &j2pt_JetHFDown, &b_j2pt_JetHFDown);
   _tree->SetBranchAddress("j2pt_JetHFUp", &j2pt_JetHFUp, &b_j2pt_JetHFUp);
   _tree->SetBranchAddress("j2pt_JetHFyearDown", &j2pt_JetHFyearDown, &b_j2pt_JetHFyearDown);
   _tree->SetBranchAddress("j2pt_JetHFyearUp", &j2pt_JetHFyearUp, &b_j2pt_JetHFyearUp);
   _tree->SetBranchAddress("j2pt_JetRelativeBalDown", &j2pt_JetRelativeBalDown, &b_j2pt_JetRelativeBalDown);
   _tree->SetBranchAddress("j2pt_JetRelativeBalUp", &j2pt_JetRelativeBalUp, &b_j2pt_JetRelativeBalUp);
   _tree->SetBranchAddress("j2pt_JetRelativeSampleDown", &j2pt_JetRelativeSampleDown, &b_j2pt_JetRelativeSampleDown);
   _tree->SetBranchAddress("j2pt_JetRelativeSampleUp", &j2pt_JetRelativeSampleUp, &b_j2pt_JetRelativeSampleUp);
   _tree->SetBranchAddress("jb1eta_2016", &jb1eta_2016, &b_jb1eta_2016);
   _tree->SetBranchAddress("jb1eta_2017", &jb1eta_2017, &b_jb1eta_2017);
   _tree->SetBranchAddress("jb1eta_2018", &jb1eta_2018, &b_jb1eta_2018);
   _tree->SetBranchAddress("jb1hadronflavor_2016", &jb1hadronflavor_2016, &b_jb1hadronflavor_2016);
   _tree->SetBranchAddress("jb1hadronflavor_2017", &jb1hadronflavor_2017, &b_jb1hadronflavor_2017);
   _tree->SetBranchAddress("jb1hadronflavor_2018", &jb1hadronflavor_2018, &b_jb1hadronflavor_2018);
   _tree->SetBranchAddress("jb1phi_2016", &jb1phi_2016, &b_jb1phi_2016);
   _tree->SetBranchAddress("jb1phi_2017", &jb1phi_2017, &b_jb1phi_2017);
   _tree->SetBranchAddress("jb1phi_2018", &jb1phi_2018, &b_jb1phi_2018);
   _tree->SetBranchAddress("jb1pt_2016", &jb1pt_2016, &b_jb1pt_2016);
   _tree->SetBranchAddress("jb1pt_2017", &jb1pt_2017, &b_jb1pt_2017);
   _tree->SetBranchAddress("jb1pt_2018", &jb1pt_2018, &b_jb1pt_2018);
   _tree->SetBranchAddress("jb2eta_2016", &jb2eta_2016, &b_jb2eta_2016);
   _tree->SetBranchAddress("jb2eta_2017", &jb2eta_2017, &b_jb2eta_2017);
   _tree->SetBranchAddress("jb2eta_2018", &jb2eta_2018, &b_jb2eta_2018);
   _tree->SetBranchAddress("jb2hadronflavor_2016", &jb2hadronflavor_2016, &b_jb2hadronflavor_2016);
   _tree->SetBranchAddress("jb2hadronflavor_2017", &jb2hadronflavor_2017, &b_jb2hadronflavor_2017);
   _tree->SetBranchAddress("jb2hadronflavor_2018", &jb2hadronflavor_2018, &b_jb2hadronflavor_2018);
   _tree->SetBranchAddress("jb2phi_2016", &jb2phi_2016, &b_jb2phi_2016);
   _tree->SetBranchAddress("jb2phi_2017", &jb2phi_2017, &b_jb2phi_2017);
   _tree->SetBranchAddress("jb2phi_2018", &jb2phi_2018, &b_jb2phi_2018);
   _tree->SetBranchAddress("jb2pt_2016", &jb2pt_2016, &b_jb2pt_2016);
   _tree->SetBranchAddress("jb2pt_2017", &jb2pt_2017, &b_jb2pt_2017);
   _tree->SetBranchAddress("jb2pt_2018", &jb2pt_2018, &b_jb2pt_2018);
   _tree->SetBranchAddress("jetVeto20", &jetVeto20, &b_jetVeto20);
   _tree->SetBranchAddress("jetVeto20WoNoisyJets", &jetVeto20WoNoisyJets, &b_jetVeto20WoNoisyJets);
   _tree->SetBranchAddress("jetVeto20_JetEnDown", &jetVeto20_JetEnDown, &b_jetVeto20_JetEnDown);
   _tree->SetBranchAddress("jetVeto20_JetEnUp", &jetVeto20_JetEnUp, &b_jetVeto20_JetEnUp);
   _tree->SetBranchAddress("jetVeto30", &jetVeto30, &b_jetVeto30);
   _tree->SetBranchAddress("jetVeto30WoNoisyJets", &jetVeto30WoNoisyJets, &b_jetVeto30WoNoisyJets);
   _tree->SetBranchAddress("jetVeto30WoNoisyJets_JERDown", &jetVeto30WoNoisyJets_JERDown, &b_jetVeto30WoNoisyJets_JERDown);
   _tree->SetBranchAddress("jetVeto30WoNoisyJets_JERUp", &jetVeto30WoNoisyJets_JERUp, &b_jetVeto30WoNoisyJets_JERUp);
   _tree->SetBranchAddress("jetVeto30WoNoisyJets_JetAbsoluteDown", &jetVeto30WoNoisyJets_JetAbsoluteDown, &b_jetVeto30WoNoisyJets_JetAbsoluteDown);
   _tree->SetBranchAddress("jetVeto30WoNoisyJets_JetAbsoluteUp", &jetVeto30WoNoisyJets_JetAbsoluteUp, &b_jetVeto30WoNoisyJets_JetAbsoluteUp);
   _tree->SetBranchAddress("jetVeto30WoNoisyJets_JetAbsoluteyearDown", &jetVeto30WoNoisyJets_JetAbsoluteyearDown, &b_jetVeto30WoNoisyJets_JetAbsoluteyearDown);
   _tree->SetBranchAddress("jetVeto30WoNoisyJets_JetAbsoluteyearUp", &jetVeto30WoNoisyJets_JetAbsoluteyearUp, &b_jetVeto30WoNoisyJets_JetAbsoluteyearUp);
   _tree->SetBranchAddress("jetVeto30WoNoisyJets_JetBBEC1Down", &jetVeto30WoNoisyJets_JetBBEC1Down, &b_jetVeto30WoNoisyJets_JetBBEC1Down);
   _tree->SetBranchAddress("jetVeto30WoNoisyJets_JetBBEC1Up", &jetVeto30WoNoisyJets_JetBBEC1Up, &b_jetVeto30WoNoisyJets_JetBBEC1Up);
   _tree->SetBranchAddress("jetVeto30WoNoisyJets_JetBBEC1yearDown", &jetVeto30WoNoisyJets_JetBBEC1yearDown, &b_jetVeto30WoNoisyJets_JetBBEC1yearDown);
   _tree->SetBranchAddress("jetVeto30WoNoisyJets_JetBBEC1yearUp", &jetVeto30WoNoisyJets_JetBBEC1yearUp, &b_jetVeto30WoNoisyJets_JetBBEC1yearUp);
   _tree->SetBranchAddress("jetVeto30WoNoisyJets_JetEC2Down", &jetVeto30WoNoisyJets_JetEC2Down, &b_jetVeto30WoNoisyJets_JetEC2Down);
   _tree->SetBranchAddress("jetVeto30WoNoisyJets_JetEC2Up", &jetVeto30WoNoisyJets_JetEC2Up, &b_jetVeto30WoNoisyJets_JetEC2Up);
   _tree->SetBranchAddress("jetVeto30WoNoisyJets_JetEC2yearDown", &jetVeto30WoNoisyJets_JetEC2yearDown, &b_jetVeto30WoNoisyJets_JetEC2yearDown);
   _tree->SetBranchAddress("jetVeto30WoNoisyJets_JetEC2yearUp", &jetVeto30WoNoisyJets_JetEC2yearUp, &b_jetVeto30WoNoisyJets_JetEC2yearUp);
   _tree->SetBranchAddress("jetVeto30WoNoisyJets_JetEnDown", &jetVeto30WoNoisyJets_JetEnDown, &b_jetVeto30WoNoisyJets_JetEnDown);
   _tree->SetBranchAddress("jetVeto30WoNoisyJets_JetEnUp", &jetVeto30WoNoisyJets_JetEnUp, &b_jetVeto30WoNoisyJets_JetEnUp);
   _tree->SetBranchAddress("jetVeto30WoNoisyJets_JetFlavorQCDDown", &jetVeto30WoNoisyJets_JetFlavorQCDDown, &b_jetVeto30WoNoisyJets_JetFlavorQCDDown);
   _tree->SetBranchAddress("jetVeto30WoNoisyJets_JetFlavorQCDUp", &jetVeto30WoNoisyJets_JetFlavorQCDUp, &b_jetVeto30WoNoisyJets_JetFlavorQCDUp);
   _tree->SetBranchAddress("jetVeto30WoNoisyJets_JetHFDown", &jetVeto30WoNoisyJets_JetHFDown, &b_jetVeto30WoNoisyJets_JetHFDown);
   _tree->SetBranchAddress("jetVeto30WoNoisyJets_JetHFUp", &jetVeto30WoNoisyJets_JetHFUp, &b_jetVeto30WoNoisyJets_JetHFUp);
   _tree->SetBranchAddress("jetVeto30WoNoisyJets_JetHFyearDown", &jetVeto30WoNoisyJets_JetHFyearDown, &b_jetVeto30WoNoisyJets_JetHFyearDown);
   _tree->SetBranchAddress("jetVeto30WoNoisyJets_JetHFyearUp", &jetVeto30WoNoisyJets_JetHFyearUp, &b_jetVeto30WoNoisyJets_JetHFyearUp);
   _tree->SetBranchAddress("jetVeto30WoNoisyJets_JetRelativeBalDownWoNoisyJets", &jetVeto30WoNoisyJets_JetRelativeBalDownWoNoisyJets, &b_jetVeto30WoNoisyJets_JetRelativeBalDownWoNoisyJets);
   _tree->SetBranchAddress("jetVeto30WoNoisyJets_JetRelativeBalUpWoNoisyJets", &jetVeto30WoNoisyJets_JetRelativeBalUpWoNoisyJets, &b_jetVeto30WoNoisyJets_JetRelativeBalUpWoNoisyJets);
   _tree->SetBranchAddress("jetVeto30WoNoisyJets_JetRelativeSampleDown", &jetVeto30WoNoisyJets_JetRelativeSampleDown, &b_jetVeto30WoNoisyJets_JetRelativeSampleDown);
   _tree->SetBranchAddress("jetVeto30WoNoisyJets_JetRelativeSampleUp", &jetVeto30WoNoisyJets_JetRelativeSampleUp, &b_jetVeto30WoNoisyJets_JetRelativeSampleUp);
   _tree->SetBranchAddress("jetVeto30WoNoisyJets_JetTotalDown", &jetVeto30WoNoisyJets_JetTotalDown, &b_jetVeto30WoNoisyJets_JetTotalDown);
   _tree->SetBranchAddress("jetVeto30WoNoisyJets_JetTotalUp", &jetVeto30WoNoisyJets_JetTotalUp, &b_jetVeto30WoNoisyJets_JetTotalUp);
   _tree->SetBranchAddress("jetVeto30_JERDown", &jetVeto30_JERDown, &b_jetVeto30_JERDown);
   _tree->SetBranchAddress("jetVeto30_JERUp", &jetVeto30_JERUp, &b_jetVeto30_JERUp);
   _tree->SetBranchAddress("jetVeto30_JetAbsoluteDown", &jetVeto30_JetAbsoluteDown, &b_jetVeto30_JetAbsoluteDown);
   _tree->SetBranchAddress("jetVeto30_JetAbsoluteUp", &jetVeto30_JetAbsoluteUp, &b_jetVeto30_JetAbsoluteUp);
   _tree->SetBranchAddress("jetVeto30_JetAbsoluteyearDown", &jetVeto30_JetAbsoluteyearDown, &b_jetVeto30_JetAbsoluteyearDown);
   _tree->SetBranchAddress("jetVeto30_JetAbsoluteyearUp", &jetVeto30_JetAbsoluteyearUp, &b_jetVeto30_JetAbsoluteyearUp);
   _tree->SetBranchAddress("jetVeto30_JetBBEC1Down", &jetVeto30_JetBBEC1Down, &b_jetVeto30_JetBBEC1Down);
   _tree->SetBranchAddress("jetVeto30_JetBBEC1Up", &jetVeto30_JetBBEC1Up, &b_jetVeto30_JetBBEC1Up);
   _tree->SetBranchAddress("jetVeto30_JetBBEC1yearDown", &jetVeto30_JetBBEC1yearDown, &b_jetVeto30_JetBBEC1yearDown);
   _tree->SetBranchAddress("jetVeto30_JetBBEC1yearUp", &jetVeto30_JetBBEC1yearUp, &b_jetVeto30_JetBBEC1yearUp);
   _tree->SetBranchAddress("jetVeto30_JetEC2Down", &jetVeto30_JetEC2Down, &b_jetVeto30_JetEC2Down);
   _tree->SetBranchAddress("jetVeto30_JetEC2Up", &jetVeto30_JetEC2Up, &b_jetVeto30_JetEC2Up);
   _tree->SetBranchAddress("jetVeto30_JetEC2yearDown", &jetVeto30_JetEC2yearDown, &b_jetVeto30_JetEC2yearDown);
   _tree->SetBranchAddress("jetVeto30_JetEC2yearUp", &jetVeto30_JetEC2yearUp, &b_jetVeto30_JetEC2yearUp);
   _tree->SetBranchAddress("jetVeto30_JetEnDown", &jetVeto30_JetEnDown, &b_jetVeto30_JetEnDown);
   _tree->SetBranchAddress("jetVeto30_JetEnUp", &jetVeto30_JetEnUp, &b_jetVeto30_JetEnUp);
   _tree->SetBranchAddress("jetVeto30_JetFlavorQCDDown", &jetVeto30_JetFlavorQCDDown, &b_jetVeto30_JetFlavorQCDDown);
   _tree->SetBranchAddress("jetVeto30_JetFlavorQCDUp", &jetVeto30_JetFlavorQCDUp, &b_jetVeto30_JetFlavorQCDUp);
   _tree->SetBranchAddress("jetVeto30_JetHFDown", &jetVeto30_JetHFDown, &b_jetVeto30_JetHFDown);
   _tree->SetBranchAddress("jetVeto30_JetHFUp", &jetVeto30_JetHFUp, &b_jetVeto30_JetHFUp);
   _tree->SetBranchAddress("jetVeto30_JetHFyearDown", &jetVeto30_JetHFyearDown, &b_jetVeto30_JetHFyearDown);
   _tree->SetBranchAddress("jetVeto30_JetHFyearUp", &jetVeto30_JetHFyearUp, &b_jetVeto30_JetHFyearUp);
   _tree->SetBranchAddress("jetVeto30_JetRelativeBalDown", &jetVeto30_JetRelativeBalDown, &b_jetVeto30_JetRelativeBalDown);
   _tree->SetBranchAddress("jetVeto30_JetRelativeBalUp", &jetVeto30_JetRelativeBalUp, &b_jetVeto30_JetRelativeBalUp);
   _tree->SetBranchAddress("jetVeto30_JetRelativeSampleDown", &jetVeto30_JetRelativeSampleDown, &b_jetVeto30_JetRelativeSampleDown);
   _tree->SetBranchAddress("jetVeto30_JetRelativeSampleUp", &jetVeto30_JetRelativeSampleUp, &b_jetVeto30_JetRelativeSampleUp);
   _tree->SetBranchAddress("jetVeto30_JetTotalDown", &jetVeto30_JetTotalDown, &b_jetVeto30_JetTotalDown);
   _tree->SetBranchAddress("jetVeto30_JetTotalUp", &jetVeto30_JetTotalUp, &b_jetVeto30_JetTotalUp);
   _tree->SetBranchAddress("lheweight_muR0p5_muF0p5", &lheweight_muR0p5_muF0p5, &b_lheweight_muR0p5_muF0p5);
   _tree->SetBranchAddress("lheweight_muR0p5_muF1", &lheweight_muR0p5_muF1, &b_lheweight_muR0p5_muF1);
   _tree->SetBranchAddress("lheweight_muR0p5_muF2", &lheweight_muR0p5_muF2, &b_lheweight_muR0p5_muF2);
   _tree->SetBranchAddress("lheweight_muR1_muF0p5", &lheweight_muR1_muF0p5, &b_lheweight_muR1_muF0p5);
   _tree->SetBranchAddress("lheweight_muR1_muF2", &lheweight_muR1_muF2, &b_lheweight_muR1_muF2);
   _tree->SetBranchAddress("lheweight_muR2_muF0p5", &lheweight_muR2_muF0p5, &b_lheweight_muR2_muF0p5);
   _tree->SetBranchAddress("lheweight_muR2_muF1", &lheweight_muR2_muF1, &b_lheweight_muR2_muF1);
   _tree->SetBranchAddress("lheweight_muR2_muF2", &lheweight_muR2_muF2, &b_lheweight_muR2_muF2);
   _tree->SetBranchAddress("lheweight_nominal", &lheweight_nominal, &b_lheweight_nominal);
   _tree->SetBranchAddress("lumi", &lumi, &b_lumi);
   _tree->SetBranchAddress("m1BestTrackType", &m1BestTrackType, &b_m1BestTrackType);
   _tree->SetBranchAddress("m1Charge", &m1Charge, &b_m1Charge);
   _tree->SetBranchAddress("m1Chi2LocalPosition", &m1Chi2LocalPosition, &b_m1Chi2LocalPosition);
   _tree->SetBranchAddress("m1ComesFromHiggs", &m1ComesFromHiggs, &b_m1ComesFromHiggs);
   _tree->SetBranchAddress("m1CutBasedIdGlobalHighPt", &m1CutBasedIdGlobalHighPt, &b_m1CutBasedIdGlobalHighPt);
   _tree->SetBranchAddress("m1CutBasedIdLoose", &m1CutBasedIdLoose, &b_m1CutBasedIdLoose);
   _tree->SetBranchAddress("m1CutBasedIdMedium", &m1CutBasedIdMedium, &b_m1CutBasedIdMedium);
   _tree->SetBranchAddress("m1CutBasedIdMediumPrompt", &m1CutBasedIdMediumPrompt, &b_m1CutBasedIdMediumPrompt);
   _tree->SetBranchAddress("m1CutBasedIdTight", &m1CutBasedIdTight, &b_m1CutBasedIdTight);
   _tree->SetBranchAddress("m1CutBasedIdTrkHighPt", &m1CutBasedIdTrkHighPt, &b_m1CutBasedIdTrkHighPt);
   _tree->SetBranchAddress("m1EcalIsoDR03", &m1EcalIsoDR03, &b_m1EcalIsoDR03);
   _tree->SetBranchAddress("m1EffectiveArea2011", &m1EffectiveArea2011, &b_m1EffectiveArea2011);
   _tree->SetBranchAddress("m1EffectiveArea2012", &m1EffectiveArea2012, &b_m1EffectiveArea2012);
   _tree->SetBranchAddress("m1Eta", &m1Eta, &b_m1Eta);
   _tree->SetBranchAddress("m1Eta_MuonEnDown", &m1Eta_MuonEnDown, &b_m1Eta_MuonEnDown);
   _tree->SetBranchAddress("m1Eta_MuonEnUp", &m1Eta_MuonEnUp, &b_m1Eta_MuonEnUp);
   _tree->SetBranchAddress("m1GenCharge", &m1GenCharge, &b_m1GenCharge);
   _tree->SetBranchAddress("m1GenDirectPromptTauDecayFinalState", &m1GenDirectPromptTauDecayFinalState, &b_m1GenDirectPromptTauDecayFinalState);
   _tree->SetBranchAddress("m1GenEnergy", &m1GenEnergy, &b_m1GenEnergy);
   _tree->SetBranchAddress("m1GenEta", &m1GenEta, &b_m1GenEta);
   _tree->SetBranchAddress("m1GenIsPrompt", &m1GenIsPrompt, &b_m1GenIsPrompt);
   _tree->SetBranchAddress("m1GenMotherPdgId", &m1GenMotherPdgId, &b_m1GenMotherPdgId);
   _tree->SetBranchAddress("m1GenParticle", &m1GenParticle, &b_m1GenParticle);
   _tree->SetBranchAddress("m1GenPdgId", &m1GenPdgId, &b_m1GenPdgId);
   _tree->SetBranchAddress("m1GenPhi", &m1GenPhi, &b_m1GenPhi);
   _tree->SetBranchAddress("m1GenPrompt", &m1GenPrompt, &b_m1GenPrompt);
   _tree->SetBranchAddress("m1GenPromptFinalState", &m1GenPromptFinalState, &b_m1GenPromptFinalState);
   _tree->SetBranchAddress("m1GenPromptTauDecay", &m1GenPromptTauDecay, &b_m1GenPromptTauDecay);
   _tree->SetBranchAddress("m1GenPt", &m1GenPt, &b_m1GenPt);
   _tree->SetBranchAddress("m1GenTauDecay", &m1GenTauDecay, &b_m1GenTauDecay);
   _tree->SetBranchAddress("m1GenVZ", &m1GenVZ, &b_m1GenVZ);
   _tree->SetBranchAddress("m1GenVtxPVMatch", &m1GenVtxPVMatch, &b_m1GenVtxPVMatch);
   _tree->SetBranchAddress("m1HcalIsoDR03", &m1HcalIsoDR03, &b_m1HcalIsoDR03);
   _tree->SetBranchAddress("m1IP3D", &m1IP3D, &b_m1IP3D);
   _tree->SetBranchAddress("m1IP3DErr", &m1IP3DErr, &b_m1IP3DErr);
   _tree->SetBranchAddress("m1IsGlobal", &m1IsGlobal, &b_m1IsGlobal);
   _tree->SetBranchAddress("m1IsPFMuon", &m1IsPFMuon, &b_m1IsPFMuon);
   _tree->SetBranchAddress("m1IsTracker", &m1IsTracker, &b_m1IsTracker);
   _tree->SetBranchAddress("m1IsoDB03", &m1IsoDB03, &b_m1IsoDB03);
   _tree->SetBranchAddress("m1IsoDB04", &m1IsoDB04, &b_m1IsoDB04);
   _tree->SetBranchAddress("m1JetArea", &m1JetArea, &b_m1JetArea);
   _tree->SetBranchAddress("m1JetBtag", &m1JetBtag, &b_m1JetBtag);
   _tree->SetBranchAddress("m1JetDR", &m1JetDR, &b_m1JetDR);
   _tree->SetBranchAddress("m1JetEtaEtaMoment", &m1JetEtaEtaMoment, &b_m1JetEtaEtaMoment);
   _tree->SetBranchAddress("m1JetEtaPhiMoment", &m1JetEtaPhiMoment, &b_m1JetEtaPhiMoment);
   _tree->SetBranchAddress("m1JetEtaPhiSpread", &m1JetEtaPhiSpread, &b_m1JetEtaPhiSpread);
   _tree->SetBranchAddress("m1JetHadronFlavour", &m1JetHadronFlavour, &b_m1JetHadronFlavour);
   _tree->SetBranchAddress("m1JetPFCISVBtag", &m1JetPFCISVBtag, &b_m1JetPFCISVBtag);
   _tree->SetBranchAddress("m1JetPartonFlavour", &m1JetPartonFlavour, &b_m1JetPartonFlavour);
   _tree->SetBranchAddress("m1JetPhiPhiMoment", &m1JetPhiPhiMoment, &b_m1JetPhiPhiMoment);
   _tree->SetBranchAddress("m1JetPt", &m1JetPt, &b_m1JetPt);
   _tree->SetBranchAddress("m1LowestMll", &m1LowestMll, &b_m1LowestMll);
   _tree->SetBranchAddress("m1Mass", &m1Mass, &b_m1Mass);
   _tree->SetBranchAddress("m1MatchEmbeddedFilterMu19Tau20_2016", &m1MatchEmbeddedFilterMu19Tau20_2016, &b_m1MatchEmbeddedFilterMu19Tau20_2016);
   _tree->SetBranchAddress("m1MatchEmbeddedFilterMu20Tau27_2017", &m1MatchEmbeddedFilterMu20Tau27_2017, &b_m1MatchEmbeddedFilterMu20Tau27_2017);
   _tree->SetBranchAddress("m1MatchEmbeddedFilterMu20Tau27_2018", &m1MatchEmbeddedFilterMu20Tau27_2018, &b_m1MatchEmbeddedFilterMu20Tau27_2018);
   _tree->SetBranchAddress("m1MatchEmbeddedFilterMu24", &m1MatchEmbeddedFilterMu24, &b_m1MatchEmbeddedFilterMu24);
   _tree->SetBranchAddress("m1MatchEmbeddedFilterMu27", &m1MatchEmbeddedFilterMu27, &b_m1MatchEmbeddedFilterMu27);
   _tree->SetBranchAddress("m1MatchedStations", &m1MatchedStations, &b_m1MatchedStations);
   _tree->SetBranchAddress("m1MatchesIsoMu19Tau20Filter", &m1MatchesIsoMu19Tau20Filter, &b_m1MatchesIsoMu19Tau20Filter);
   _tree->SetBranchAddress("m1MatchesIsoMu19Tau20Path", &m1MatchesIsoMu19Tau20Path, &b_m1MatchesIsoMu19Tau20Path);
   _tree->SetBranchAddress("m1MatchesIsoMu19Tau20SingleL1Filter", &m1MatchesIsoMu19Tau20SingleL1Filter, &b_m1MatchesIsoMu19Tau20SingleL1Filter);
   _tree->SetBranchAddress("m1MatchesIsoMu19Tau20SingleL1Path", &m1MatchesIsoMu19Tau20SingleL1Path, &b_m1MatchesIsoMu19Tau20SingleL1Path);
   _tree->SetBranchAddress("m1MatchesIsoMu20HPSTau27Filter", &m1MatchesIsoMu20HPSTau27Filter, &b_m1MatchesIsoMu20HPSTau27Filter);
   _tree->SetBranchAddress("m1MatchesIsoMu20HPSTau27Path", &m1MatchesIsoMu20HPSTau27Path, &b_m1MatchesIsoMu20HPSTau27Path);
   _tree->SetBranchAddress("m1MatchesIsoMu20Tau27Filter", &m1MatchesIsoMu20Tau27Filter, &b_m1MatchesIsoMu20Tau27Filter);
   _tree->SetBranchAddress("m1MatchesIsoMu20Tau27Path", &m1MatchesIsoMu20Tau27Path, &b_m1MatchesIsoMu20Tau27Path);
   _tree->SetBranchAddress("m1MatchesIsoMu22Filter", &m1MatchesIsoMu22Filter, &b_m1MatchesIsoMu22Filter);
   _tree->SetBranchAddress("m1MatchesIsoMu22Path", &m1MatchesIsoMu22Path, &b_m1MatchesIsoMu22Path);
   _tree->SetBranchAddress("m1MatchesIsoMu22eta2p1Filter", &m1MatchesIsoMu22eta2p1Filter, &b_m1MatchesIsoMu22eta2p1Filter);
   _tree->SetBranchAddress("m1MatchesIsoMu22eta2p1Path", &m1MatchesIsoMu22eta2p1Path, &b_m1MatchesIsoMu22eta2p1Path);
   _tree->SetBranchAddress("m1MatchesIsoMu24Filter", &m1MatchesIsoMu24Filter, &b_m1MatchesIsoMu24Filter);
   _tree->SetBranchAddress("m1MatchesIsoMu24Path", &m1MatchesIsoMu24Path, &b_m1MatchesIsoMu24Path);
   _tree->SetBranchAddress("m1MatchesIsoMu27Filter", &m1MatchesIsoMu27Filter, &b_m1MatchesIsoMu27Filter);
   _tree->SetBranchAddress("m1MatchesIsoMu27Path", &m1MatchesIsoMu27Path, &b_m1MatchesIsoMu27Path);
   _tree->SetBranchAddress("m1MatchesIsoTkMu22Filter", &m1MatchesIsoTkMu22Filter, &b_m1MatchesIsoTkMu22Filter);
   _tree->SetBranchAddress("m1MatchesIsoTkMu22Path", &m1MatchesIsoTkMu22Path, &b_m1MatchesIsoTkMu22Path);
   _tree->SetBranchAddress("m1MatchesIsoTkMu22eta2p1Filter", &m1MatchesIsoTkMu22eta2p1Filter, &b_m1MatchesIsoTkMu22eta2p1Filter);
   _tree->SetBranchAddress("m1MatchesIsoTkMu22eta2p1Path", &m1MatchesIsoTkMu22eta2p1Path, &b_m1MatchesIsoTkMu22eta2p1Path);
   _tree->SetBranchAddress("m1MatchesMu23e12DZFilter", &m1MatchesMu23e12DZFilter, &b_m1MatchesMu23e12DZFilter);
   _tree->SetBranchAddress("m1MatchesMu23e12DZPath", &m1MatchesMu23e12DZPath, &b_m1MatchesMu23e12DZPath);
   _tree->SetBranchAddress("m1MatchesMu23e12Filter", &m1MatchesMu23e12Filter, &b_m1MatchesMu23e12Filter);
   _tree->SetBranchAddress("m1MatchesMu23e12Path", &m1MatchesMu23e12Path, &b_m1MatchesMu23e12Path);
   _tree->SetBranchAddress("m1MatchesMu8e23DZFilter", &m1MatchesMu8e23DZFilter, &b_m1MatchesMu8e23DZFilter);
   _tree->SetBranchAddress("m1MatchesMu8e23DZPath", &m1MatchesMu8e23DZPath, &b_m1MatchesMu8e23DZPath);
   _tree->SetBranchAddress("m1MatchesMu8e23Filter", &m1MatchesMu8e23Filter, &b_m1MatchesMu8e23Filter);
   _tree->SetBranchAddress("m1MatchesMu8e23Path", &m1MatchesMu8e23Path, &b_m1MatchesMu8e23Path);
   _tree->SetBranchAddress("m1MiniIsoLoose", &m1MiniIsoLoose, &b_m1MiniIsoLoose);
   _tree->SetBranchAddress("m1MiniIsoMedium", &m1MiniIsoMedium, &b_m1MiniIsoMedium);
   _tree->SetBranchAddress("m1MiniIsoTight", &m1MiniIsoTight, &b_m1MiniIsoTight);
   _tree->SetBranchAddress("m1MiniIsoVeryTight", &m1MiniIsoVeryTight, &b_m1MiniIsoVeryTight);
   _tree->SetBranchAddress("m1MuonHits", &m1MuonHits, &b_m1MuonHits);
   _tree->SetBranchAddress("m1MvaLoose", &m1MvaLoose, &b_m1MvaLoose);
   _tree->SetBranchAddress("m1MvaMedium", &m1MvaMedium, &b_m1MvaMedium);
   _tree->SetBranchAddress("m1MvaTight", &m1MvaTight, &b_m1MvaTight);
   _tree->SetBranchAddress("m1NearestZMass", &m1NearestZMass, &b_m1NearestZMass);
   _tree->SetBranchAddress("m1NormTrkChi2", &m1NormTrkChi2, &b_m1NormTrkChi2);
   _tree->SetBranchAddress("m1NormalizedChi2", &m1NormalizedChi2, &b_m1NormalizedChi2);
   _tree->SetBranchAddress("m1PFChargedHadronIsoR04", &m1PFChargedHadronIsoR04, &b_m1PFChargedHadronIsoR04);
   _tree->SetBranchAddress("m1PFChargedIso", &m1PFChargedIso, &b_m1PFChargedIso);
   _tree->SetBranchAddress("m1PFIDLoose", &m1PFIDLoose, &b_m1PFIDLoose);
   _tree->SetBranchAddress("m1PFIDMedium", &m1PFIDMedium, &b_m1PFIDMedium);
   _tree->SetBranchAddress("m1PFIDTight", &m1PFIDTight, &b_m1PFIDTight);
   _tree->SetBranchAddress("m1PFIsoLoose", &m1PFIsoLoose, &b_m1PFIsoLoose);
   _tree->SetBranchAddress("m1PFIsoMedium", &m1PFIsoMedium, &b_m1PFIsoMedium);
   _tree->SetBranchAddress("m1PFIsoTight", &m1PFIsoTight, &b_m1PFIsoTight);
   _tree->SetBranchAddress("m1PFIsoVeryLoose", &m1PFIsoVeryLoose, &b_m1PFIsoVeryLoose);
   _tree->SetBranchAddress("m1PFIsoVeryTight", &m1PFIsoVeryTight, &b_m1PFIsoVeryTight);
   _tree->SetBranchAddress("m1PFNeutralHadronIsoR04", &m1PFNeutralHadronIsoR04, &b_m1PFNeutralHadronIsoR04);
   _tree->SetBranchAddress("m1PFNeutralIso", &m1PFNeutralIso, &b_m1PFNeutralIso);
   _tree->SetBranchAddress("m1PFPUChargedIso", &m1PFPUChargedIso, &b_m1PFPUChargedIso);
   _tree->SetBranchAddress("m1PFPhotonIso", &m1PFPhotonIso, &b_m1PFPhotonIso);
   _tree->SetBranchAddress("m1PFPhotonIsoR04", &m1PFPhotonIsoR04, &b_m1PFPhotonIsoR04);
   _tree->SetBranchAddress("m1PFPileupIsoR04", &m1PFPileupIsoR04, &b_m1PFPileupIsoR04);
   _tree->SetBranchAddress("m1PVDXY", &m1PVDXY, &b_m1PVDXY);
   _tree->SetBranchAddress("m1PVDZ", &m1PVDZ, &b_m1PVDZ);
   _tree->SetBranchAddress("m1Phi", &m1Phi, &b_m1Phi);
   _tree->SetBranchAddress("m1Phi_MuonEnDown", &m1Phi_MuonEnDown, &b_m1Phi_MuonEnDown);
   _tree->SetBranchAddress("m1Phi_MuonEnUp", &m1Phi_MuonEnUp, &b_m1Phi_MuonEnUp);
   _tree->SetBranchAddress("m1PixHits", &m1PixHits, &b_m1PixHits);
   _tree->SetBranchAddress("m1Pt", &m1Pt, &b_m1Pt);
   _tree->SetBranchAddress("m1Pt_MuonEnDown", &m1Pt_MuonEnDown, &b_m1Pt_MuonEnDown);
   _tree->SetBranchAddress("m1Pt_MuonEnUp", &m1Pt_MuonEnUp, &b_m1Pt_MuonEnUp);
   _tree->SetBranchAddress("m1RelPFIsoDBDefault", &m1RelPFIsoDBDefault, &b_m1RelPFIsoDBDefault);
   _tree->SetBranchAddress("m1RelPFIsoDBDefaultR04", &m1RelPFIsoDBDefaultR04, &b_m1RelPFIsoDBDefaultR04);
   _tree->SetBranchAddress("m1RelPFIsoRho", &m1RelPFIsoRho, &b_m1RelPFIsoRho);
   _tree->SetBranchAddress("m1Rho", &m1Rho, &b_m1Rho);
   _tree->SetBranchAddress("m1SIP2D", &m1SIP2D, &b_m1SIP2D);
   _tree->SetBranchAddress("m1SIP3D", &m1SIP3D, &b_m1SIP3D);
   _tree->SetBranchAddress("m1SegmentCompatibility", &m1SegmentCompatibility, &b_m1SegmentCompatibility);
   _tree->SetBranchAddress("m1SoftCutBasedId", &m1SoftCutBasedId, &b_m1SoftCutBasedId);
   _tree->SetBranchAddress("m1TkIsoLoose", &m1TkIsoLoose, &b_m1TkIsoLoose);
   _tree->SetBranchAddress("m1TkIsoTight", &m1TkIsoTight, &b_m1TkIsoTight);
   _tree->SetBranchAddress("m1TkLayersWithMeasurement", &m1TkLayersWithMeasurement, &b_m1TkLayersWithMeasurement);
   _tree->SetBranchAddress("m1TrkIsoDR03", &m1TrkIsoDR03, &b_m1TrkIsoDR03);
   _tree->SetBranchAddress("m1TrkKink", &m1TrkKink, &b_m1TrkKink);
   _tree->SetBranchAddress("m1TypeCode", &m1TypeCode, &b_m1TypeCode);
   _tree->SetBranchAddress("m1VZ", &m1VZ, &b_m1VZ);
   _tree->SetBranchAddress("m1ValidFraction", &m1ValidFraction, &b_m1ValidFraction);
   _tree->SetBranchAddress("m1ZTTGenMatching", &m1ZTTGenMatching, &b_m1ZTTGenMatching);
   _tree->SetBranchAddress("m1_m2_DR", &m1_m2_DR, &b_m1_m2_DR);
   _tree->SetBranchAddress("m1_m2_Mass", &m1_m2_Mass, &b_m1_m2_Mass);
   _tree->SetBranchAddress("m1_m2_doubleL1IsoTauMatch", &m1_m2_doubleL1IsoTauMatch, &b_m1_m2_doubleL1IsoTauMatch);
   _tree->SetBranchAddress("m1_m3_DR", &m1_m3_DR, &b_m1_m3_DR);
   _tree->SetBranchAddress("m1_m3_Mass", &m1_m3_Mass, &b_m1_m3_Mass);
   _tree->SetBranchAddress("m1_m3_doubleL1IsoTauMatch", &m1_m3_doubleL1IsoTauMatch, &b_m1_m3_doubleL1IsoTauMatch);
   _tree->SetBranchAddress("m2BestTrackType", &m2BestTrackType, &b_m2BestTrackType);
   _tree->SetBranchAddress("m2Charge", &m2Charge, &b_m2Charge);
   _tree->SetBranchAddress("m2Chi2LocalPosition", &m2Chi2LocalPosition, &b_m2Chi2LocalPosition);
   _tree->SetBranchAddress("m2ComesFromHiggs", &m2ComesFromHiggs, &b_m2ComesFromHiggs);
   _tree->SetBranchAddress("m2CutBasedIdGlobalHighPt", &m2CutBasedIdGlobalHighPt, &b_m2CutBasedIdGlobalHighPt);
   _tree->SetBranchAddress("m2CutBasedIdLoose", &m2CutBasedIdLoose, &b_m2CutBasedIdLoose);
   _tree->SetBranchAddress("m2CutBasedIdMedium", &m2CutBasedIdMedium, &b_m2CutBasedIdMedium);
   _tree->SetBranchAddress("m2CutBasedIdMediumPrompt", &m2CutBasedIdMediumPrompt, &b_m2CutBasedIdMediumPrompt);
   _tree->SetBranchAddress("m2CutBasedIdTight", &m2CutBasedIdTight, &b_m2CutBasedIdTight);
   _tree->SetBranchAddress("m2CutBasedIdTrkHighPt", &m2CutBasedIdTrkHighPt, &b_m2CutBasedIdTrkHighPt);
   _tree->SetBranchAddress("m2EcalIsoDR03", &m2EcalIsoDR03, &b_m2EcalIsoDR03);
   _tree->SetBranchAddress("m2EffectiveArea2011", &m2EffectiveArea2011, &b_m2EffectiveArea2011);
   _tree->SetBranchAddress("m2EffectiveArea2012", &m2EffectiveArea2012, &b_m2EffectiveArea2012);
   _tree->SetBranchAddress("m2Eta", &m2Eta, &b_m2Eta);
   _tree->SetBranchAddress("m2Eta_MuonEnDown", &m2Eta_MuonEnDown, &b_m2Eta_MuonEnDown);
   _tree->SetBranchAddress("m2Eta_MuonEnUp", &m2Eta_MuonEnUp, &b_m2Eta_MuonEnUp);
   _tree->SetBranchAddress("m2GenCharge", &m2GenCharge, &b_m2GenCharge);
   _tree->SetBranchAddress("m2GenDirectPromptTauDecayFinalState", &m2GenDirectPromptTauDecayFinalState, &b_m2GenDirectPromptTauDecayFinalState);
   _tree->SetBranchAddress("m2GenEnergy", &m2GenEnergy, &b_m2GenEnergy);
   _tree->SetBranchAddress("m2GenEta", &m2GenEta, &b_m2GenEta);
   _tree->SetBranchAddress("m2GenIsPrompt", &m2GenIsPrompt, &b_m2GenIsPrompt);
   _tree->SetBranchAddress("m2GenMotherPdgId", &m2GenMotherPdgId, &b_m2GenMotherPdgId);
   _tree->SetBranchAddress("m2GenParticle", &m2GenParticle, &b_m2GenParticle);
   _tree->SetBranchAddress("m2GenPdgId", &m2GenPdgId, &b_m2GenPdgId);
   _tree->SetBranchAddress("m2GenPhi", &m2GenPhi, &b_m2GenPhi);
   _tree->SetBranchAddress("m2GenPrompt", &m2GenPrompt, &b_m2GenPrompt);
   _tree->SetBranchAddress("m2GenPromptFinalState", &m2GenPromptFinalState, &b_m2GenPromptFinalState);
   _tree->SetBranchAddress("m2GenPromptTauDecay", &m2GenPromptTauDecay, &b_m2GenPromptTauDecay);
   _tree->SetBranchAddress("m2GenPt", &m2GenPt, &b_m2GenPt);
   _tree->SetBranchAddress("m2GenTauDecay", &m2GenTauDecay, &b_m2GenTauDecay);
   _tree->SetBranchAddress("m2GenVZ", &m2GenVZ, &b_m2GenVZ);
   _tree->SetBranchAddress("m2GenVtxPVMatch", &m2GenVtxPVMatch, &b_m2GenVtxPVMatch);
   _tree->SetBranchAddress("m2HcalIsoDR03", &m2HcalIsoDR03, &b_m2HcalIsoDR03);
   _tree->SetBranchAddress("m2IP3D", &m2IP3D, &b_m2IP3D);
   _tree->SetBranchAddress("m2IP3DErr", &m2IP3DErr, &b_m2IP3DErr);
   _tree->SetBranchAddress("m2IsGlobal", &m2IsGlobal, &b_m2IsGlobal);
   _tree->SetBranchAddress("m2IsPFMuon", &m2IsPFMuon, &b_m2IsPFMuon);
   _tree->SetBranchAddress("m2IsTracker", &m2IsTracker, &b_m2IsTracker);
   _tree->SetBranchAddress("m2IsoDB03", &m2IsoDB03, &b_m2IsoDB03);
   _tree->SetBranchAddress("m2IsoDB04", &m2IsoDB04, &b_m2IsoDB04);
   _tree->SetBranchAddress("m2JetArea", &m2JetArea, &b_m2JetArea);
   _tree->SetBranchAddress("m2JetBtag", &m2JetBtag, &b_m2JetBtag);
   _tree->SetBranchAddress("m2JetDR", &m2JetDR, &b_m2JetDR);
   _tree->SetBranchAddress("m2JetEtaEtaMoment", &m2JetEtaEtaMoment, &b_m2JetEtaEtaMoment);
   _tree->SetBranchAddress("m2JetEtaPhiMoment", &m2JetEtaPhiMoment, &b_m2JetEtaPhiMoment);
   _tree->SetBranchAddress("m2JetEtaPhiSpread", &m2JetEtaPhiSpread, &b_m2JetEtaPhiSpread);
   _tree->SetBranchAddress("m2JetHadronFlavour", &m2JetHadronFlavour, &b_m2JetHadronFlavour);
   _tree->SetBranchAddress("m2JetPFCISVBtag", &m2JetPFCISVBtag, &b_m2JetPFCISVBtag);
   _tree->SetBranchAddress("m2JetPartonFlavour", &m2JetPartonFlavour, &b_m2JetPartonFlavour);
   _tree->SetBranchAddress("m2JetPhiPhiMoment", &m2JetPhiPhiMoment, &b_m2JetPhiPhiMoment);
   _tree->SetBranchAddress("m2JetPt", &m2JetPt, &b_m2JetPt);
   _tree->SetBranchAddress("m2LowestMll", &m2LowestMll, &b_m2LowestMll);
   _tree->SetBranchAddress("m2Mass", &m2Mass, &b_m2Mass);
   _tree->SetBranchAddress("m2MatchEmbeddedFilterMu19Tau20_2016", &m2MatchEmbeddedFilterMu19Tau20_2016, &b_m2MatchEmbeddedFilterMu19Tau20_2016);
   _tree->SetBranchAddress("m2MatchEmbeddedFilterMu20Tau27_2017", &m2MatchEmbeddedFilterMu20Tau27_2017, &b_m2MatchEmbeddedFilterMu20Tau27_2017);
   _tree->SetBranchAddress("m2MatchEmbeddedFilterMu20Tau27_2018", &m2MatchEmbeddedFilterMu20Tau27_2018, &b_m2MatchEmbeddedFilterMu20Tau27_2018);
   _tree->SetBranchAddress("m2MatchEmbeddedFilterMu24", &m2MatchEmbeddedFilterMu24, &b_m2MatchEmbeddedFilterMu24);
   _tree->SetBranchAddress("m2MatchEmbeddedFilterMu27", &m2MatchEmbeddedFilterMu27, &b_m2MatchEmbeddedFilterMu27);
   _tree->SetBranchAddress("m2MatchedStations", &m2MatchedStations, &b_m2MatchedStations);
   _tree->SetBranchAddress("m2MatchesIsoMu19Tau20Filter", &m2MatchesIsoMu19Tau20Filter, &b_m2MatchesIsoMu19Tau20Filter);
   _tree->SetBranchAddress("m2MatchesIsoMu19Tau20Path", &m2MatchesIsoMu19Tau20Path, &b_m2MatchesIsoMu19Tau20Path);
   _tree->SetBranchAddress("m2MatchesIsoMu19Tau20SingleL1Filter", &m2MatchesIsoMu19Tau20SingleL1Filter, &b_m2MatchesIsoMu19Tau20SingleL1Filter);
   _tree->SetBranchAddress("m2MatchesIsoMu19Tau20SingleL1Path", &m2MatchesIsoMu19Tau20SingleL1Path, &b_m2MatchesIsoMu19Tau20SingleL1Path);
   _tree->SetBranchAddress("m2MatchesIsoMu20HPSTau27Filter", &m2MatchesIsoMu20HPSTau27Filter, &b_m2MatchesIsoMu20HPSTau27Filter);
   _tree->SetBranchAddress("m2MatchesIsoMu20HPSTau27Path", &m2MatchesIsoMu20HPSTau27Path, &b_m2MatchesIsoMu20HPSTau27Path);
   _tree->SetBranchAddress("m2MatchesIsoMu20Tau27Filter", &m2MatchesIsoMu20Tau27Filter, &b_m2MatchesIsoMu20Tau27Filter);
   _tree->SetBranchAddress("m2MatchesIsoMu20Tau27Path", &m2MatchesIsoMu20Tau27Path, &b_m2MatchesIsoMu20Tau27Path);
   _tree->SetBranchAddress("m2MatchesIsoMu22Filter", &m2MatchesIsoMu22Filter, &b_m2MatchesIsoMu22Filter);
   _tree->SetBranchAddress("m2MatchesIsoMu22Path", &m2MatchesIsoMu22Path, &b_m2MatchesIsoMu22Path);
   _tree->SetBranchAddress("m2MatchesIsoMu22eta2p1Filter", &m2MatchesIsoMu22eta2p1Filter, &b_m2MatchesIsoMu22eta2p1Filter);
   _tree->SetBranchAddress("m2MatchesIsoMu22eta2p1Path", &m2MatchesIsoMu22eta2p1Path, &b_m2MatchesIsoMu22eta2p1Path);
   _tree->SetBranchAddress("m2MatchesIsoMu24Filter", &m2MatchesIsoMu24Filter, &b_m2MatchesIsoMu24Filter);
   _tree->SetBranchAddress("m2MatchesIsoMu24Path", &m2MatchesIsoMu24Path, &b_m2MatchesIsoMu24Path);
   _tree->SetBranchAddress("m2MatchesIsoMu27Filter", &m2MatchesIsoMu27Filter, &b_m2MatchesIsoMu27Filter);
   _tree->SetBranchAddress("m2MatchesIsoMu27Path", &m2MatchesIsoMu27Path, &b_m2MatchesIsoMu27Path);
   _tree->SetBranchAddress("m2MatchesIsoTkMu22Filter", &m2MatchesIsoTkMu22Filter, &b_m2MatchesIsoTkMu22Filter);
   _tree->SetBranchAddress("m2MatchesIsoTkMu22Path", &m2MatchesIsoTkMu22Path, &b_m2MatchesIsoTkMu22Path);
   _tree->SetBranchAddress("m2MatchesIsoTkMu22eta2p1Filter", &m2MatchesIsoTkMu22eta2p1Filter, &b_m2MatchesIsoTkMu22eta2p1Filter);
   _tree->SetBranchAddress("m2MatchesIsoTkMu22eta2p1Path", &m2MatchesIsoTkMu22eta2p1Path, &b_m2MatchesIsoTkMu22eta2p1Path);
   _tree->SetBranchAddress("m2MatchesMu23e12DZFilter", &m2MatchesMu23e12DZFilter, &b_m2MatchesMu23e12DZFilter);
   _tree->SetBranchAddress("m2MatchesMu23e12DZPath", &m2MatchesMu23e12DZPath, &b_m2MatchesMu23e12DZPath);
   _tree->SetBranchAddress("m2MatchesMu23e12Filter", &m2MatchesMu23e12Filter, &b_m2MatchesMu23e12Filter);
   _tree->SetBranchAddress("m2MatchesMu23e12Path", &m2MatchesMu23e12Path, &b_m2MatchesMu23e12Path);
   _tree->SetBranchAddress("m2MatchesMu8e23DZFilter", &m2MatchesMu8e23DZFilter, &b_m2MatchesMu8e23DZFilter);
   _tree->SetBranchAddress("m2MatchesMu8e23DZPath", &m2MatchesMu8e23DZPath, &b_m2MatchesMu8e23DZPath);
   _tree->SetBranchAddress("m2MatchesMu8e23Filter", &m2MatchesMu8e23Filter, &b_m2MatchesMu8e23Filter);
   _tree->SetBranchAddress("m2MatchesMu8e23Path", &m2MatchesMu8e23Path, &b_m2MatchesMu8e23Path);
   _tree->SetBranchAddress("m2MiniIsoLoose", &m2MiniIsoLoose, &b_m2MiniIsoLoose);
   _tree->SetBranchAddress("m2MiniIsoMedium", &m2MiniIsoMedium, &b_m2MiniIsoMedium);
   _tree->SetBranchAddress("m2MiniIsoTight", &m2MiniIsoTight, &b_m2MiniIsoTight);
   _tree->SetBranchAddress("m2MiniIsoVeryTight", &m2MiniIsoVeryTight, &b_m2MiniIsoVeryTight);
   _tree->SetBranchAddress("m2MuonHits", &m2MuonHits, &b_m2MuonHits);
   _tree->SetBranchAddress("m2MvaLoose", &m2MvaLoose, &b_m2MvaLoose);
   _tree->SetBranchAddress("m2MvaMedium", &m2MvaMedium, &b_m2MvaMedium);
   _tree->SetBranchAddress("m2MvaTight", &m2MvaTight, &b_m2MvaTight);
   _tree->SetBranchAddress("m2NearestZMass", &m2NearestZMass, &b_m2NearestZMass);
   _tree->SetBranchAddress("m2NormTrkChi2", &m2NormTrkChi2, &b_m2NormTrkChi2);
   _tree->SetBranchAddress("m2NormalizedChi2", &m2NormalizedChi2, &b_m2NormalizedChi2);
   _tree->SetBranchAddress("m2PFChargedHadronIsoR04", &m2PFChargedHadronIsoR04, &b_m2PFChargedHadronIsoR04);
   _tree->SetBranchAddress("m2PFChargedIso", &m2PFChargedIso, &b_m2PFChargedIso);
   _tree->SetBranchAddress("m2PFIDLoose", &m2PFIDLoose, &b_m2PFIDLoose);
   _tree->SetBranchAddress("m2PFIDMedium", &m2PFIDMedium, &b_m2PFIDMedium);
   _tree->SetBranchAddress("m2PFIDTight", &m2PFIDTight, &b_m2PFIDTight);
   _tree->SetBranchAddress("m2PFIsoLoose", &m2PFIsoLoose, &b_m2PFIsoLoose);
   _tree->SetBranchAddress("m2PFIsoMedium", &m2PFIsoMedium, &b_m2PFIsoMedium);
   _tree->SetBranchAddress("m2PFIsoTight", &m2PFIsoTight, &b_m2PFIsoTight);
   _tree->SetBranchAddress("m2PFIsoVeryLoose", &m2PFIsoVeryLoose, &b_m2PFIsoVeryLoose);
   _tree->SetBranchAddress("m2PFIsoVeryTight", &m2PFIsoVeryTight, &b_m2PFIsoVeryTight);
   _tree->SetBranchAddress("m2PFNeutralHadronIsoR04", &m2PFNeutralHadronIsoR04, &b_m2PFNeutralHadronIsoR04);
   _tree->SetBranchAddress("m2PFNeutralIso", &m2PFNeutralIso, &b_m2PFNeutralIso);
   _tree->SetBranchAddress("m2PFPUChargedIso", &m2PFPUChargedIso, &b_m2PFPUChargedIso);
   _tree->SetBranchAddress("m2PFPhotonIso", &m2PFPhotonIso, &b_m2PFPhotonIso);
   _tree->SetBranchAddress("m2PFPhotonIsoR04", &m2PFPhotonIsoR04, &b_m2PFPhotonIsoR04);
   _tree->SetBranchAddress("m2PFPileupIsoR04", &m2PFPileupIsoR04, &b_m2PFPileupIsoR04);
   _tree->SetBranchAddress("m2PVDXY", &m2PVDXY, &b_m2PVDXY);
   _tree->SetBranchAddress("m2PVDZ", &m2PVDZ, &b_m2PVDZ);
   _tree->SetBranchAddress("m2Phi", &m2Phi, &b_m2Phi);
   _tree->SetBranchAddress("m2Phi_MuonEnDown", &m2Phi_MuonEnDown, &b_m2Phi_MuonEnDown);
   _tree->SetBranchAddress("m2Phi_MuonEnUp", &m2Phi_MuonEnUp, &b_m2Phi_MuonEnUp);
   _tree->SetBranchAddress("m2PixHits", &m2PixHits, &b_m2PixHits);
   _tree->SetBranchAddress("m2Pt", &m2Pt, &b_m2Pt);
   _tree->SetBranchAddress("m2Pt_MuonEnDown", &m2Pt_MuonEnDown, &b_m2Pt_MuonEnDown);
   _tree->SetBranchAddress("m2Pt_MuonEnUp", &m2Pt_MuonEnUp, &b_m2Pt_MuonEnUp);
   _tree->SetBranchAddress("m2RelPFIsoDBDefault", &m2RelPFIsoDBDefault, &b_m2RelPFIsoDBDefault);
   _tree->SetBranchAddress("m2RelPFIsoDBDefaultR04", &m2RelPFIsoDBDefaultR04, &b_m2RelPFIsoDBDefaultR04);
   _tree->SetBranchAddress("m2RelPFIsoRho", &m2RelPFIsoRho, &b_m2RelPFIsoRho);
   _tree->SetBranchAddress("m2Rho", &m2Rho, &b_m2Rho);
   _tree->SetBranchAddress("m2SIP2D", &m2SIP2D, &b_m2SIP2D);
   _tree->SetBranchAddress("m2SIP3D", &m2SIP3D, &b_m2SIP3D);
   _tree->SetBranchAddress("m2SegmentCompatibility", &m2SegmentCompatibility, &b_m2SegmentCompatibility);
   _tree->SetBranchAddress("m2SoftCutBasedId", &m2SoftCutBasedId, &b_m2SoftCutBasedId);
   _tree->SetBranchAddress("m2TkIsoLoose", &m2TkIsoLoose, &b_m2TkIsoLoose);
   _tree->SetBranchAddress("m2TkIsoTight", &m2TkIsoTight, &b_m2TkIsoTight);
   _tree->SetBranchAddress("m2TkLayersWithMeasurement", &m2TkLayersWithMeasurement, &b_m2TkLayersWithMeasurement);
   _tree->SetBranchAddress("m2TrkIsoDR03", &m2TrkIsoDR03, &b_m2TrkIsoDR03);
   _tree->SetBranchAddress("m2TrkKink", &m2TrkKink, &b_m2TrkKink);
   _tree->SetBranchAddress("m2TypeCode", &m2TypeCode, &b_m2TypeCode);
   _tree->SetBranchAddress("m2VZ", &m2VZ, &b_m2VZ);
   _tree->SetBranchAddress("m2ValidFraction", &m2ValidFraction, &b_m2ValidFraction);
   _tree->SetBranchAddress("m2ZTTGenMatching", &m2ZTTGenMatching, &b_m2ZTTGenMatching);
   _tree->SetBranchAddress("m2_m3_DR", &m2_m3_DR, &b_m2_m3_DR);
   _tree->SetBranchAddress("m2_m3_Mass", &m2_m3_Mass, &b_m2_m3_Mass);
   _tree->SetBranchAddress("m2_m3_doubleL1IsoTauMatch", &m2_m3_doubleL1IsoTauMatch, &b_m2_m3_doubleL1IsoTauMatch);
   _tree->SetBranchAddress("m3BestTrackType", &m3BestTrackType, &b_m3BestTrackType);
   _tree->SetBranchAddress("m3Charge", &m3Charge, &b_m3Charge);
   _tree->SetBranchAddress("m3Chi2LocalPosition", &m3Chi2LocalPosition, &b_m3Chi2LocalPosition);
   _tree->SetBranchAddress("m3ComesFromHiggs", &m3ComesFromHiggs, &b_m3ComesFromHiggs);
   _tree->SetBranchAddress("m3CutBasedIdGlobalHighPt", &m3CutBasedIdGlobalHighPt, &b_m3CutBasedIdGlobalHighPt);
   _tree->SetBranchAddress("m3CutBasedIdLoose", &m3CutBasedIdLoose, &b_m3CutBasedIdLoose);
   _tree->SetBranchAddress("m3CutBasedIdMedium", &m3CutBasedIdMedium, &b_m3CutBasedIdMedium);
   _tree->SetBranchAddress("m3CutBasedIdMediumPrompt", &m3CutBasedIdMediumPrompt, &b_m3CutBasedIdMediumPrompt);
   _tree->SetBranchAddress("m3CutBasedIdTight", &m3CutBasedIdTight, &b_m3CutBasedIdTight);
   _tree->SetBranchAddress("m3CutBasedIdTrkHighPt", &m3CutBasedIdTrkHighPt, &b_m3CutBasedIdTrkHighPt);
   _tree->SetBranchAddress("m3EcalIsoDR03", &m3EcalIsoDR03, &b_m3EcalIsoDR03);
   _tree->SetBranchAddress("m3EffectiveArea2011", &m3EffectiveArea2011, &b_m3EffectiveArea2011);
   _tree->SetBranchAddress("m3EffectiveArea2012", &m3EffectiveArea2012, &b_m3EffectiveArea2012);
   _tree->SetBranchAddress("m3Eta", &m3Eta, &b_m3Eta);
   _tree->SetBranchAddress("m3Eta_MuonEnDown", &m3Eta_MuonEnDown, &b_m3Eta_MuonEnDown);
   _tree->SetBranchAddress("m3Eta_MuonEnUp", &m3Eta_MuonEnUp, &b_m3Eta_MuonEnUp);
   _tree->SetBranchAddress("m3GenCharge", &m3GenCharge, &b_m3GenCharge);
   _tree->SetBranchAddress("m3GenDirectPromptTauDecayFinalState", &m3GenDirectPromptTauDecayFinalState, &b_m3GenDirectPromptTauDecayFinalState);
   _tree->SetBranchAddress("m3GenEnergy", &m3GenEnergy, &b_m3GenEnergy);
   _tree->SetBranchAddress("m3GenEta", &m3GenEta, &b_m3GenEta);
   _tree->SetBranchAddress("m3GenIsPrompt", &m3GenIsPrompt, &b_m3GenIsPrompt);
   _tree->SetBranchAddress("m3GenMotherPdgId", &m3GenMotherPdgId, &b_m3GenMotherPdgId);
   _tree->SetBranchAddress("m3GenParticle", &m3GenParticle, &b_m3GenParticle);
   _tree->SetBranchAddress("m3GenPdgId", &m3GenPdgId, &b_m3GenPdgId);
   _tree->SetBranchAddress("m3GenPhi", &m3GenPhi, &b_m3GenPhi);
   _tree->SetBranchAddress("m3GenPrompt", &m3GenPrompt, &b_m3GenPrompt);
   _tree->SetBranchAddress("m3GenPromptFinalState", &m3GenPromptFinalState, &b_m3GenPromptFinalState);
   _tree->SetBranchAddress("m3GenPromptTauDecay", &m3GenPromptTauDecay, &b_m3GenPromptTauDecay);
   _tree->SetBranchAddress("m3GenPt", &m3GenPt, &b_m3GenPt);
   _tree->SetBranchAddress("m3GenTauDecay", &m3GenTauDecay, &b_m3GenTauDecay);
   _tree->SetBranchAddress("m3GenVZ", &m3GenVZ, &b_m3GenVZ);
   _tree->SetBranchAddress("m3GenVtxPVMatch", &m3GenVtxPVMatch, &b_m3GenVtxPVMatch);
   _tree->SetBranchAddress("m3HcalIsoDR03", &m3HcalIsoDR03, &b_m3HcalIsoDR03);
   _tree->SetBranchAddress("m3IP3D", &m3IP3D, &b_m3IP3D);
   _tree->SetBranchAddress("m3IP3DErr", &m3IP3DErr, &b_m3IP3DErr);
   _tree->SetBranchAddress("m3IsGlobal", &m3IsGlobal, &b_m3IsGlobal);
   _tree->SetBranchAddress("m3IsPFMuon", &m3IsPFMuon, &b_m3IsPFMuon);
   _tree->SetBranchAddress("m3IsTracker", &m3IsTracker, &b_m3IsTracker);
   _tree->SetBranchAddress("m3IsoDB03", &m3IsoDB03, &b_m3IsoDB03);
   _tree->SetBranchAddress("m3IsoDB04", &m3IsoDB04, &b_m3IsoDB04);
   _tree->SetBranchAddress("m3JetArea", &m3JetArea, &b_m3JetArea);
   _tree->SetBranchAddress("m3JetBtag", &m3JetBtag, &b_m3JetBtag);
   _tree->SetBranchAddress("m3JetDR", &m3JetDR, &b_m3JetDR);
   _tree->SetBranchAddress("m3JetEtaEtaMoment", &m3JetEtaEtaMoment, &b_m3JetEtaEtaMoment);
   _tree->SetBranchAddress("m3JetEtaPhiMoment", &m3JetEtaPhiMoment, &b_m3JetEtaPhiMoment);
   _tree->SetBranchAddress("m3JetEtaPhiSpread", &m3JetEtaPhiSpread, &b_m3JetEtaPhiSpread);
   _tree->SetBranchAddress("m3JetHadronFlavour", &m3JetHadronFlavour, &b_m3JetHadronFlavour);
   _tree->SetBranchAddress("m3JetPFCISVBtag", &m3JetPFCISVBtag, &b_m3JetPFCISVBtag);
   _tree->SetBranchAddress("m3JetPartonFlavour", &m3JetPartonFlavour, &b_m3JetPartonFlavour);
   _tree->SetBranchAddress("m3JetPhiPhiMoment", &m3JetPhiPhiMoment, &b_m3JetPhiPhiMoment);
   _tree->SetBranchAddress("m3JetPt", &m3JetPt, &b_m3JetPt);
   _tree->SetBranchAddress("m3LowestMll", &m3LowestMll, &b_m3LowestMll);
   _tree->SetBranchAddress("m3Mass", &m3Mass, &b_m3Mass);
   _tree->SetBranchAddress("m3MatchEmbeddedFilterMu19Tau20_2016", &m3MatchEmbeddedFilterMu19Tau20_2016, &b_m3MatchEmbeddedFilterMu19Tau20_2016);
   _tree->SetBranchAddress("m3MatchEmbeddedFilterMu20Tau27_2017", &m3MatchEmbeddedFilterMu20Tau27_2017, &b_m3MatchEmbeddedFilterMu20Tau27_2017);
   _tree->SetBranchAddress("m3MatchEmbeddedFilterMu20Tau27_2018", &m3MatchEmbeddedFilterMu20Tau27_2018, &b_m3MatchEmbeddedFilterMu20Tau27_2018);
   _tree->SetBranchAddress("m3MatchEmbeddedFilterMu24", &m3MatchEmbeddedFilterMu24, &b_m3MatchEmbeddedFilterMu24);
   _tree->SetBranchAddress("m3MatchEmbeddedFilterMu27", &m3MatchEmbeddedFilterMu27, &b_m3MatchEmbeddedFilterMu27);
   _tree->SetBranchAddress("m3MatchedStations", &m3MatchedStations, &b_m3MatchedStations);
   _tree->SetBranchAddress("m3MatchesIsoMu19Tau20Filter", &m3MatchesIsoMu19Tau20Filter, &b_m3MatchesIsoMu19Tau20Filter);
   _tree->SetBranchAddress("m3MatchesIsoMu19Tau20Path", &m3MatchesIsoMu19Tau20Path, &b_m3MatchesIsoMu19Tau20Path);
   _tree->SetBranchAddress("m3MatchesIsoMu19Tau20SingleL1Filter", &m3MatchesIsoMu19Tau20SingleL1Filter, &b_m3MatchesIsoMu19Tau20SingleL1Filter);
   _tree->SetBranchAddress("m3MatchesIsoMu19Tau20SingleL1Path", &m3MatchesIsoMu19Tau20SingleL1Path, &b_m3MatchesIsoMu19Tau20SingleL1Path);
   _tree->SetBranchAddress("m3MatchesIsoMu20HPSTau27Filter", &m3MatchesIsoMu20HPSTau27Filter, &b_m3MatchesIsoMu20HPSTau27Filter);
   _tree->SetBranchAddress("m3MatchesIsoMu20HPSTau27Path", &m3MatchesIsoMu20HPSTau27Path, &b_m3MatchesIsoMu20HPSTau27Path);
   _tree->SetBranchAddress("m3MatchesIsoMu20Tau27Filter", &m3MatchesIsoMu20Tau27Filter, &b_m3MatchesIsoMu20Tau27Filter);
   _tree->SetBranchAddress("m3MatchesIsoMu20Tau27Path", &m3MatchesIsoMu20Tau27Path, &b_m3MatchesIsoMu20Tau27Path);
   _tree->SetBranchAddress("m3MatchesIsoMu22Filter", &m3MatchesIsoMu22Filter, &b_m3MatchesIsoMu22Filter);
   _tree->SetBranchAddress("m3MatchesIsoMu22Path", &m3MatchesIsoMu22Path, &b_m3MatchesIsoMu22Path);
   _tree->SetBranchAddress("m3MatchesIsoMu22eta2p1Filter", &m3MatchesIsoMu22eta2p1Filter, &b_m3MatchesIsoMu22eta2p1Filter);
   _tree->SetBranchAddress("m3MatchesIsoMu22eta2p1Path", &m3MatchesIsoMu22eta2p1Path, &b_m3MatchesIsoMu22eta2p1Path);
   _tree->SetBranchAddress("m3MatchesIsoMu24Filter", &m3MatchesIsoMu24Filter, &b_m3MatchesIsoMu24Filter);
   _tree->SetBranchAddress("m3MatchesIsoMu24Path", &m3MatchesIsoMu24Path, &b_m3MatchesIsoMu24Path);
   _tree->SetBranchAddress("m3MatchesIsoMu27Filter", &m3MatchesIsoMu27Filter, &b_m3MatchesIsoMu27Filter);
   _tree->SetBranchAddress("m3MatchesIsoMu27Path", &m3MatchesIsoMu27Path, &b_m3MatchesIsoMu27Path);
   _tree->SetBranchAddress("m3MatchesIsoTkMu22Filter", &m3MatchesIsoTkMu22Filter, &b_m3MatchesIsoTkMu22Filter);
   _tree->SetBranchAddress("m3MatchesIsoTkMu22Path", &m3MatchesIsoTkMu22Path, &b_m3MatchesIsoTkMu22Path);
   _tree->SetBranchAddress("m3MatchesIsoTkMu22eta2p1Filter", &m3MatchesIsoTkMu22eta2p1Filter, &b_m3MatchesIsoTkMu22eta2p1Filter);
   _tree->SetBranchAddress("m3MatchesIsoTkMu22eta2p1Path", &m3MatchesIsoTkMu22eta2p1Path, &b_m3MatchesIsoTkMu22eta2p1Path);
   _tree->SetBranchAddress("m3MatchesMu23e12DZFilter", &m3MatchesMu23e12DZFilter, &b_m3MatchesMu23e12DZFilter);
   _tree->SetBranchAddress("m3MatchesMu23e12DZPath", &m3MatchesMu23e12DZPath, &b_m3MatchesMu23e12DZPath);
   _tree->SetBranchAddress("m3MatchesMu23e12Filter", &m3MatchesMu23e12Filter, &b_m3MatchesMu23e12Filter);
   _tree->SetBranchAddress("m3MatchesMu23e12Path", &m3MatchesMu23e12Path, &b_m3MatchesMu23e12Path);
   _tree->SetBranchAddress("m3MatchesMu8e23DZFilter", &m3MatchesMu8e23DZFilter, &b_m3MatchesMu8e23DZFilter);
   _tree->SetBranchAddress("m3MatchesMu8e23DZPath", &m3MatchesMu8e23DZPath, &b_m3MatchesMu8e23DZPath);
   _tree->SetBranchAddress("m3MatchesMu8e23Filter", &m3MatchesMu8e23Filter, &b_m3MatchesMu8e23Filter);
   _tree->SetBranchAddress("m3MatchesMu8e23Path", &m3MatchesMu8e23Path, &b_m3MatchesMu8e23Path);
   _tree->SetBranchAddress("m3MiniIsoLoose", &m3MiniIsoLoose, &b_m3MiniIsoLoose);
   _tree->SetBranchAddress("m3MiniIsoMedium", &m3MiniIsoMedium, &b_m3MiniIsoMedium);
   _tree->SetBranchAddress("m3MiniIsoTight", &m3MiniIsoTight, &b_m3MiniIsoTight);
   _tree->SetBranchAddress("m3MiniIsoVeryTight", &m3MiniIsoVeryTight, &b_m3MiniIsoVeryTight);
   _tree->SetBranchAddress("m3MuonHits", &m3MuonHits, &b_m3MuonHits);
   _tree->SetBranchAddress("m3MvaLoose", &m3MvaLoose, &b_m3MvaLoose);
   _tree->SetBranchAddress("m3MvaMedium", &m3MvaMedium, &b_m3MvaMedium);
   _tree->SetBranchAddress("m3MvaTight", &m3MvaTight, &b_m3MvaTight);
   _tree->SetBranchAddress("m3NearestZMass", &m3NearestZMass, &b_m3NearestZMass);
   _tree->SetBranchAddress("m3NormTrkChi2", &m3NormTrkChi2, &b_m3NormTrkChi2);
   _tree->SetBranchAddress("m3NormalizedChi2", &m3NormalizedChi2, &b_m3NormalizedChi2);
   _tree->SetBranchAddress("m3PFChargedHadronIsoR04", &m3PFChargedHadronIsoR04, &b_m3PFChargedHadronIsoR04);
   _tree->SetBranchAddress("m3PFChargedIso", &m3PFChargedIso, &b_m3PFChargedIso);
   _tree->SetBranchAddress("m3PFIDLoose", &m3PFIDLoose, &b_m3PFIDLoose);
   _tree->SetBranchAddress("m3PFIDMedium", &m3PFIDMedium, &b_m3PFIDMedium);
   _tree->SetBranchAddress("m3PFIDTight", &m3PFIDTight, &b_m3PFIDTight);
   _tree->SetBranchAddress("m3PFIsoLoose", &m3PFIsoLoose, &b_m3PFIsoLoose);
   _tree->SetBranchAddress("m3PFIsoMedium", &m3PFIsoMedium, &b_m3PFIsoMedium);
   _tree->SetBranchAddress("m3PFIsoTight", &m3PFIsoTight, &b_m3PFIsoTight);
   _tree->SetBranchAddress("m3PFIsoVeryLoose", &m3PFIsoVeryLoose, &b_m3PFIsoVeryLoose);
   _tree->SetBranchAddress("m3PFIsoVeryTight", &m3PFIsoVeryTight, &b_m3PFIsoVeryTight);
   _tree->SetBranchAddress("m3PFNeutralHadronIsoR04", &m3PFNeutralHadronIsoR04, &b_m3PFNeutralHadronIsoR04);
   _tree->SetBranchAddress("m3PFNeutralIso", &m3PFNeutralIso, &b_m3PFNeutralIso);
   _tree->SetBranchAddress("m3PFPUChargedIso", &m3PFPUChargedIso, &b_m3PFPUChargedIso);
   _tree->SetBranchAddress("m3PFPhotonIso", &m3PFPhotonIso, &b_m3PFPhotonIso);
   _tree->SetBranchAddress("m3PFPhotonIsoR04", &m3PFPhotonIsoR04, &b_m3PFPhotonIsoR04);
   _tree->SetBranchAddress("m3PFPileupIsoR04", &m3PFPileupIsoR04, &b_m3PFPileupIsoR04);
   _tree->SetBranchAddress("m3PVDXY", &m3PVDXY, &b_m3PVDXY);
   _tree->SetBranchAddress("m3PVDZ", &m3PVDZ, &b_m3PVDZ);
   _tree->SetBranchAddress("m3Phi", &m3Phi, &b_m3Phi);
   _tree->SetBranchAddress("m3Phi_MuonEnDown", &m3Phi_MuonEnDown, &b_m3Phi_MuonEnDown);
   _tree->SetBranchAddress("m3Phi_MuonEnUp", &m3Phi_MuonEnUp, &b_m3Phi_MuonEnUp);
   _tree->SetBranchAddress("m3PixHits", &m3PixHits, &b_m3PixHits);
   _tree->SetBranchAddress("m3Pt", &m3Pt, &b_m3Pt);
   _tree->SetBranchAddress("m3Pt_MuonEnDown", &m3Pt_MuonEnDown, &b_m3Pt_MuonEnDown);
   _tree->SetBranchAddress("m3Pt_MuonEnUp", &m3Pt_MuonEnUp, &b_m3Pt_MuonEnUp);
   _tree->SetBranchAddress("m3RelPFIsoDBDefault", &m3RelPFIsoDBDefault, &b_m3RelPFIsoDBDefault);
   _tree->SetBranchAddress("m3RelPFIsoDBDefaultR04", &m3RelPFIsoDBDefaultR04, &b_m3RelPFIsoDBDefaultR04);
   _tree->SetBranchAddress("m3RelPFIsoRho", &m3RelPFIsoRho, &b_m3RelPFIsoRho);
   _tree->SetBranchAddress("m3Rho", &m3Rho, &b_m3Rho);
   _tree->SetBranchAddress("m3SIP2D", &m3SIP2D, &b_m3SIP2D);
   _tree->SetBranchAddress("m3SIP3D", &m3SIP3D, &b_m3SIP3D);
   _tree->SetBranchAddress("m3SegmentCompatibility", &m3SegmentCompatibility, &b_m3SegmentCompatibility);
   _tree->SetBranchAddress("m3SoftCutBasedId", &m3SoftCutBasedId, &b_m3SoftCutBasedId);
   _tree->SetBranchAddress("m3TkIsoLoose", &m3TkIsoLoose, &b_m3TkIsoLoose);
   _tree->SetBranchAddress("m3TkIsoTight", &m3TkIsoTight, &b_m3TkIsoTight);
   _tree->SetBranchAddress("m3TkLayersWithMeasurement", &m3TkLayersWithMeasurement, &b_m3TkLayersWithMeasurement);
   _tree->SetBranchAddress("m3TrkIsoDR03", &m3TrkIsoDR03, &b_m3TrkIsoDR03);
   _tree->SetBranchAddress("m3TrkKink", &m3TrkKink, &b_m3TrkKink);
   _tree->SetBranchAddress("m3TypeCode", &m3TypeCode, &b_m3TypeCode);
   _tree->SetBranchAddress("m3VZ", &m3VZ, &b_m3VZ);
   _tree->SetBranchAddress("m3ValidFraction", &m3ValidFraction, &b_m3ValidFraction);
   _tree->SetBranchAddress("m3ZTTGenMatching", &m3ZTTGenMatching, &b_m3ZTTGenMatching);
   _tree->SetBranchAddress("metSig", &metSig, &b_metSig);
   _tree->SetBranchAddress("metcov00", &metcov00, &b_metcov00);
   _tree->SetBranchAddress("metcov01", &metcov01, &b_metcov01);
   _tree->SetBranchAddress("metcov10", &metcov10, &b_metcov10);
   _tree->SetBranchAddress("metcov11", &metcov11, &b_metcov11);
   _tree->SetBranchAddress("mu12e23DZPass", &mu12e23DZPass, &b_mu12e23DZPass);
   _tree->SetBranchAddress("mu12e23Pass", &mu12e23Pass, &b_mu12e23Pass);
   _tree->SetBranchAddress("mu23e12DZPass", &mu23e12DZPass, &b_mu23e12DZPass);
   _tree->SetBranchAddress("mu23e12Pass", &mu23e12Pass, &b_mu23e12Pass);
   _tree->SetBranchAddress("mu8diele12DZPass", &mu8diele12DZPass, &b_mu8diele12DZPass);
   _tree->SetBranchAddress("mu8diele12Pass", &mu8diele12Pass, &b_mu8diele12Pass);
   _tree->SetBranchAddress("mu8e23DZPass", &mu8e23DZPass, &b_mu8e23DZPass);
   _tree->SetBranchAddress("mu8e23Pass", &mu8e23Pass, &b_mu8e23Pass);
   _tree->SetBranchAddress("muGlbIsoVetoPt10", &muGlbIsoVetoPt10, &b_muGlbIsoVetoPt10);
   _tree->SetBranchAddress("muVeto5", &muVeto5, &b_muVeto5);
   _tree->SetBranchAddress("muVetoZTTp001dxyz", &muVetoZTTp001dxyz, &b_muVetoZTTp001dxyz);
   _tree->SetBranchAddress("muVetoZTTp001dxyzR0", &muVetoZTTp001dxyzR0, &b_muVetoZTTp001dxyzR0);
   _tree->SetBranchAddress("nTruePU", &nTruePU, &b_nTruePU);
   _tree->SetBranchAddress("npNLO", &npNLO, &b_npNLO);
   _tree->SetBranchAddress("numGenJets", &numGenJets, &b_numGenJets);
   _tree->SetBranchAddress("nvtx", &nvtx, &b_nvtx);
   _tree->SetBranchAddress("prefiring_weight", &prefiring_weight, &b_prefiring_weight);
   _tree->SetBranchAddress("prefiring_weight_down", &prefiring_weight_down, &b_prefiring_weight_down);
   _tree->SetBranchAddress("prefiring_weight_up", &prefiring_weight_up, &b_prefiring_weight_up);
   _tree->SetBranchAddress("processID", &processID, &b_processID);
   _tree->SetBranchAddress("puppiMetEt", &puppiMetEt, &b_puppiMetEt);
   _tree->SetBranchAddress("puppiMetPhi", &puppiMetPhi, &b_puppiMetPhi);
   _tree->SetBranchAddress("puppiMet_shiftedPhi_JetAbsoluteDown", &puppiMet_shiftedPhi_JetAbsoluteDown, &b_puppiMet_shiftedPhi_JetAbsoluteDown);
   _tree->SetBranchAddress("puppiMet_shiftedPhi_JetAbsoluteUp", &puppiMet_shiftedPhi_JetAbsoluteUp, &b_puppiMet_shiftedPhi_JetAbsoluteUp);
   _tree->SetBranchAddress("puppiMet_shiftedPhi_JetAbsoluteyearDown", &puppiMet_shiftedPhi_JetAbsoluteyearDown, &b_puppiMet_shiftedPhi_JetAbsoluteyearDown);
   _tree->SetBranchAddress("puppiMet_shiftedPhi_JetAbsoluteyearUp", &puppiMet_shiftedPhi_JetAbsoluteyearUp, &b_puppiMet_shiftedPhi_JetAbsoluteyearUp);
   _tree->SetBranchAddress("puppiMet_shiftedPhi_JetBBEC1Down", &puppiMet_shiftedPhi_JetBBEC1Down, &b_puppiMet_shiftedPhi_JetBBEC1Down);
   _tree->SetBranchAddress("puppiMet_shiftedPhi_JetBBEC1Up", &puppiMet_shiftedPhi_JetBBEC1Up, &b_puppiMet_shiftedPhi_JetBBEC1Up);
   _tree->SetBranchAddress("puppiMet_shiftedPhi_JetBBEC1yearDown", &puppiMet_shiftedPhi_JetBBEC1yearDown, &b_puppiMet_shiftedPhi_JetBBEC1yearDown);
   _tree->SetBranchAddress("puppiMet_shiftedPhi_JetBBEC1yearUp", &puppiMet_shiftedPhi_JetBBEC1yearUp, &b_puppiMet_shiftedPhi_JetBBEC1yearUp);
   _tree->SetBranchAddress("puppiMet_shiftedPhi_JetEC2Down", &puppiMet_shiftedPhi_JetEC2Down, &b_puppiMet_shiftedPhi_JetEC2Down);
   _tree->SetBranchAddress("puppiMet_shiftedPhi_JetEC2Up", &puppiMet_shiftedPhi_JetEC2Up, &b_puppiMet_shiftedPhi_JetEC2Up);
   _tree->SetBranchAddress("puppiMet_shiftedPhi_JetEC2yearDown", &puppiMet_shiftedPhi_JetEC2yearDown, &b_puppiMet_shiftedPhi_JetEC2yearDown);
   _tree->SetBranchAddress("puppiMet_shiftedPhi_JetEC2yearUp", &puppiMet_shiftedPhi_JetEC2yearUp, &b_puppiMet_shiftedPhi_JetEC2yearUp);
   _tree->SetBranchAddress("puppiMet_shiftedPhi_JetEnDown", &puppiMet_shiftedPhi_JetEnDown, &b_puppiMet_shiftedPhi_JetEnDown);
   _tree->SetBranchAddress("puppiMet_shiftedPhi_JetEnUp", &puppiMet_shiftedPhi_JetEnUp, &b_puppiMet_shiftedPhi_JetEnUp);
   _tree->SetBranchAddress("puppiMet_shiftedPhi_JetFlavorQCDDown", &puppiMet_shiftedPhi_JetFlavorQCDDown, &b_puppiMet_shiftedPhi_JetFlavorQCDDown);
   _tree->SetBranchAddress("puppiMet_shiftedPhi_JetFlavorQCDUp", &puppiMet_shiftedPhi_JetFlavorQCDUp, &b_puppiMet_shiftedPhi_JetFlavorQCDUp);
   _tree->SetBranchAddress("puppiMet_shiftedPhi_JetHFDown", &puppiMet_shiftedPhi_JetHFDown, &b_puppiMet_shiftedPhi_JetHFDown);
   _tree->SetBranchAddress("puppiMet_shiftedPhi_JetHFUp", &puppiMet_shiftedPhi_JetHFUp, &b_puppiMet_shiftedPhi_JetHFUp);
   _tree->SetBranchAddress("puppiMet_shiftedPhi_JetHFyearDown", &puppiMet_shiftedPhi_JetHFyearDown, &b_puppiMet_shiftedPhi_JetHFyearDown);
   _tree->SetBranchAddress("puppiMet_shiftedPhi_JetHFyearUp", &puppiMet_shiftedPhi_JetHFyearUp, &b_puppiMet_shiftedPhi_JetHFyearUp);
   _tree->SetBranchAddress("puppiMet_shiftedPhi_JetRelativeBalDown", &puppiMet_shiftedPhi_JetRelativeBalDown, &b_puppiMet_shiftedPhi_JetRelativeBalDown);
   _tree->SetBranchAddress("puppiMet_shiftedPhi_JetRelativeBalUp", &puppiMet_shiftedPhi_JetRelativeBalUp, &b_puppiMet_shiftedPhi_JetRelativeBalUp);
   _tree->SetBranchAddress("puppiMet_shiftedPhi_JetRelativeSampleDown", &puppiMet_shiftedPhi_JetRelativeSampleDown, &b_puppiMet_shiftedPhi_JetRelativeSampleDown);
   _tree->SetBranchAddress("puppiMet_shiftedPhi_JetRelativeSampleUp", &puppiMet_shiftedPhi_JetRelativeSampleUp, &b_puppiMet_shiftedPhi_JetRelativeSampleUp);
   _tree->SetBranchAddress("puppiMet_shiftedPhi_JetTotalDown", &puppiMet_shiftedPhi_JetTotalDown, &b_puppiMet_shiftedPhi_JetTotalDown);
   _tree->SetBranchAddress("puppiMet_shiftedPhi_JetTotalUp", &puppiMet_shiftedPhi_JetTotalUp, &b_puppiMet_shiftedPhi_JetTotalUp);
   _tree->SetBranchAddress("puppiMet_shiftedPhi_UnclusteredEnDown", &puppiMet_shiftedPhi_UnclusteredEnDown, &b_puppiMet_shiftedPhi_UnclusteredEnDown);
   _tree->SetBranchAddress("puppiMet_shiftedPhi_UnclusteredEnUp", &puppiMet_shiftedPhi_UnclusteredEnUp, &b_puppiMet_shiftedPhi_UnclusteredEnUp);
   _tree->SetBranchAddress("puppiMet_shiftedPt_JetAbsoluteDown", &puppiMet_shiftedPt_JetAbsoluteDown, &b_puppiMet_shiftedPt_JetAbsoluteDown);
   _tree->SetBranchAddress("puppiMet_shiftedPt_JetAbsoluteUp", &puppiMet_shiftedPt_JetAbsoluteUp, &b_puppiMet_shiftedPt_JetAbsoluteUp);
   _tree->SetBranchAddress("puppiMet_shiftedPt_JetAbsoluteyearDown", &puppiMet_shiftedPt_JetAbsoluteyearDown, &b_puppiMet_shiftedPt_JetAbsoluteyearDown);
   _tree->SetBranchAddress("puppiMet_shiftedPt_JetAbsoluteyearUp", &puppiMet_shiftedPt_JetAbsoluteyearUp, &b_puppiMet_shiftedPt_JetAbsoluteyearUp);
   _tree->SetBranchAddress("puppiMet_shiftedPt_JetBBEC1Down", &puppiMet_shiftedPt_JetBBEC1Down, &b_puppiMet_shiftedPt_JetBBEC1Down);
   _tree->SetBranchAddress("puppiMet_shiftedPt_JetBBEC1Up", &puppiMet_shiftedPt_JetBBEC1Up, &b_puppiMet_shiftedPt_JetBBEC1Up);
   _tree->SetBranchAddress("puppiMet_shiftedPt_JetBBEC1yearDown", &puppiMet_shiftedPt_JetBBEC1yearDown, &b_puppiMet_shiftedPt_JetBBEC1yearDown);
   _tree->SetBranchAddress("puppiMet_shiftedPt_JetBBEC1yearUp", &puppiMet_shiftedPt_JetBBEC1yearUp, &b_puppiMet_shiftedPt_JetBBEC1yearUp);
   _tree->SetBranchAddress("puppiMet_shiftedPt_JetEC2Down", &puppiMet_shiftedPt_JetEC2Down, &b_puppiMet_shiftedPt_JetEC2Down);
   _tree->SetBranchAddress("puppiMet_shiftedPt_JetEC2Up", &puppiMet_shiftedPt_JetEC2Up, &b_puppiMet_shiftedPt_JetEC2Up);
   _tree->SetBranchAddress("puppiMet_shiftedPt_JetEC2yearDown", &puppiMet_shiftedPt_JetEC2yearDown, &b_puppiMet_shiftedPt_JetEC2yearDown);
   _tree->SetBranchAddress("puppiMet_shiftedPt_JetEC2yearUp", &puppiMet_shiftedPt_JetEC2yearUp, &b_puppiMet_shiftedPt_JetEC2yearUp);
   _tree->SetBranchAddress("puppiMet_shiftedPt_JetEnDown", &puppiMet_shiftedPt_JetEnDown, &b_puppiMet_shiftedPt_JetEnDown);
   _tree->SetBranchAddress("puppiMet_shiftedPt_JetEnUp", &puppiMet_shiftedPt_JetEnUp, &b_puppiMet_shiftedPt_JetEnUp);
   _tree->SetBranchAddress("puppiMet_shiftedPt_JetFlavorQCDDown", &puppiMet_shiftedPt_JetFlavorQCDDown, &b_puppiMet_shiftedPt_JetFlavorQCDDown);
   _tree->SetBranchAddress("puppiMet_shiftedPt_JetFlavorQCDUp", &puppiMet_shiftedPt_JetFlavorQCDUp, &b_puppiMet_shiftedPt_JetFlavorQCDUp);
   _tree->SetBranchAddress("puppiMet_shiftedPt_JetHFDown", &puppiMet_shiftedPt_JetHFDown, &b_puppiMet_shiftedPt_JetHFDown);
   _tree->SetBranchAddress("puppiMet_shiftedPt_JetHFUp", &puppiMet_shiftedPt_JetHFUp, &b_puppiMet_shiftedPt_JetHFUp);
   _tree->SetBranchAddress("puppiMet_shiftedPt_JetHFyearDown", &puppiMet_shiftedPt_JetHFyearDown, &b_puppiMet_shiftedPt_JetHFyearDown);
   _tree->SetBranchAddress("puppiMet_shiftedPt_JetHFyearUp", &puppiMet_shiftedPt_JetHFyearUp, &b_puppiMet_shiftedPt_JetHFyearUp);
   _tree->SetBranchAddress("puppiMet_shiftedPt_JetRelativeBalDown", &puppiMet_shiftedPt_JetRelativeBalDown, &b_puppiMet_shiftedPt_JetRelativeBalDown);
   _tree->SetBranchAddress("puppiMet_shiftedPt_JetRelativeBalUp", &puppiMet_shiftedPt_JetRelativeBalUp, &b_puppiMet_shiftedPt_JetRelativeBalUp);
   _tree->SetBranchAddress("puppiMet_shiftedPt_JetRelativeSampleDown", &puppiMet_shiftedPt_JetRelativeSampleDown, &b_puppiMet_shiftedPt_JetRelativeSampleDown);
   _tree->SetBranchAddress("puppiMet_shiftedPt_JetRelativeSampleUp", &puppiMet_shiftedPt_JetRelativeSampleUp, &b_puppiMet_shiftedPt_JetRelativeSampleUp);
   _tree->SetBranchAddress("puppiMet_shiftedPt_JetTotalDown", &puppiMet_shiftedPt_JetTotalDown, &b_puppiMet_shiftedPt_JetTotalDown);
   _tree->SetBranchAddress("puppiMet_shiftedPt_JetTotalUp", &puppiMet_shiftedPt_JetTotalUp, &b_puppiMet_shiftedPt_JetTotalUp);
   _tree->SetBranchAddress("puppiMet_shiftedPt_UnclusteredEnDown", &puppiMet_shiftedPt_UnclusteredEnDown, &b_puppiMet_shiftedPt_UnclusteredEnDown);
   _tree->SetBranchAddress("puppiMet_shiftedPt_UnclusteredEnUp", &puppiMet_shiftedPt_UnclusteredEnUp, &b_puppiMet_shiftedPt_UnclusteredEnUp);
   _tree->SetBranchAddress("puppimetcov00", &puppimetcov00, &b_puppimetcov00);
   _tree->SetBranchAddress("puppimetcov01", &puppimetcov01, &b_puppimetcov01);
   _tree->SetBranchAddress("puppimetcov10", &puppimetcov10, &b_puppimetcov10);
   _tree->SetBranchAddress("puppimetcov11", &puppimetcov11, &b_puppimetcov11);
   _tree->SetBranchAddress("pvChi2", &pvChi2, &b_pvChi2);
   _tree->SetBranchAddress("pvDX", &pvDX, &b_pvDX);
   _tree->SetBranchAddress("pvDY", &pvDY, &b_pvDY);
   _tree->SetBranchAddress("pvDZ", &pvDZ, &b_pvDZ);
   _tree->SetBranchAddress("pvIsFake", &pvIsFake, &b_pvIsFake);
   _tree->SetBranchAddress("pvIsValid", &pvIsValid, &b_pvIsValid);
   _tree->SetBranchAddress("pvNormChi2", &pvNormChi2, &b_pvNormChi2);
   _tree->SetBranchAddress("pvRho", &pvRho, &b_pvRho);
   _tree->SetBranchAddress("pvX", &pvX, &b_pvX);
   _tree->SetBranchAddress("pvY", &pvY, &b_pvY);
   _tree->SetBranchAddress("pvZ", &pvZ, &b_pvZ);
   _tree->SetBranchAddress("pvndof", &pvndof, &b_pvndof);
   _tree->SetBranchAddress("raw_pfMetEt", &raw_pfMetEt, &b_raw_pfMetEt);
   _tree->SetBranchAddress("raw_pfMetPhi", &raw_pfMetPhi, &b_raw_pfMetPhi);
   _tree->SetBranchAddress("recoilDaught", &recoilDaught, &b_recoilDaught);
   _tree->SetBranchAddress("recoilWithMet", &recoilWithMet, &b_recoilWithMet);
   _tree->SetBranchAddress("rho", &rho, &b_rho);
   _tree->SetBranchAddress("run", &run, &b_run);
   _tree->SetBranchAddress("singleE25eta2p1TightPass", &singleE25eta2p1TightPass, &b_singleE25eta2p1TightPass);
   _tree->SetBranchAddress("singleIsoMu22Pass", &singleIsoMu22Pass, &b_singleIsoMu22Pass);
   _tree->SetBranchAddress("singleIsoMu22eta2p1Pass", &singleIsoMu22eta2p1Pass, &b_singleIsoMu22eta2p1Pass);
   _tree->SetBranchAddress("singleIsoTkMu22Pass", &singleIsoTkMu22Pass, &b_singleIsoTkMu22Pass);
   _tree->SetBranchAddress("singleIsoTkMu22eta2p1Pass", &singleIsoTkMu22eta2p1Pass, &b_singleIsoTkMu22eta2p1Pass);
   _tree->SetBranchAddress("singleMu19eta2p1LooseTau20Pass", &singleMu19eta2p1LooseTau20Pass, &b_singleMu19eta2p1LooseTau20Pass);
   _tree->SetBranchAddress("singleMu19eta2p1LooseTau20singleL1Pass", &singleMu19eta2p1LooseTau20singleL1Pass, &b_singleMu19eta2p1LooseTau20singleL1Pass);
   _tree->SetBranchAddress("tauVetoPt20Loose3HitsVtx", &tauVetoPt20Loose3HitsVtx, &b_tauVetoPt20Loose3HitsVtx);
   _tree->SetBranchAddress("tauVetoPt20TightMVALTVtx", &tauVetoPt20TightMVALTVtx, &b_tauVetoPt20TightMVALTVtx);
   _tree->SetBranchAddress("topQuarkPt1", &topQuarkPt1, &b_topQuarkPt1);
   _tree->SetBranchAddress("topQuarkPt2", &topQuarkPt2, &b_topQuarkPt2);
   _tree->SetBranchAddress("tripleEPass", &tripleEPass, &b_tripleEPass);
   _tree->SetBranchAddress("tripleMu10_5_5Pass", &tripleMu10_5_5Pass, &b_tripleMu10_5_5Pass);
   _tree->SetBranchAddress("tripleMu12_10_5Pass", &tripleMu12_10_5Pass, &b_tripleMu12_10_5Pass);
   _tree->SetBranchAddress("type1_pfMetEt", &type1_pfMetEt, &b_type1_pfMetEt);
   _tree->SetBranchAddress("type1_pfMetPhi", &type1_pfMetPhi, &b_type1_pfMetPhi);
   _tree->SetBranchAddress("type1_pfMet_shiftedPhi_JERDown", &type1_pfMet_shiftedPhi_JERDown, &b_type1_pfMet_shiftedPhi_JERDown);
   _tree->SetBranchAddress("type1_pfMet_shiftedPhi_JERUp", &type1_pfMet_shiftedPhi_JERUp, &b_type1_pfMet_shiftedPhi_JERUp);
   _tree->SetBranchAddress("type1_pfMet_shiftedPhi_JetAbsoluteDown", &type1_pfMet_shiftedPhi_JetAbsoluteDown, &b_type1_pfMet_shiftedPhi_JetAbsoluteDown);
   _tree->SetBranchAddress("type1_pfMet_shiftedPhi_JetAbsoluteUp", &type1_pfMet_shiftedPhi_JetAbsoluteUp, &b_type1_pfMet_shiftedPhi_JetAbsoluteUp);
   _tree->SetBranchAddress("type1_pfMet_shiftedPhi_JetAbsoluteyearDown", &type1_pfMet_shiftedPhi_JetAbsoluteyearDown, &b_type1_pfMet_shiftedPhi_JetAbsoluteyearDown);
   _tree->SetBranchAddress("type1_pfMet_shiftedPhi_JetAbsoluteyearUp", &type1_pfMet_shiftedPhi_JetAbsoluteyearUp, &b_type1_pfMet_shiftedPhi_JetAbsoluteyearUp);
   _tree->SetBranchAddress("type1_pfMet_shiftedPhi_JetBBEC1Down", &type1_pfMet_shiftedPhi_JetBBEC1Down, &b_type1_pfMet_shiftedPhi_JetBBEC1Down);
   _tree->SetBranchAddress("type1_pfMet_shiftedPhi_JetBBEC1Up", &type1_pfMet_shiftedPhi_JetBBEC1Up, &b_type1_pfMet_shiftedPhi_JetBBEC1Up);
   _tree->SetBranchAddress("type1_pfMet_shiftedPhi_JetBBEC1yearDown", &type1_pfMet_shiftedPhi_JetBBEC1yearDown, &b_type1_pfMet_shiftedPhi_JetBBEC1yearDown);
   _tree->SetBranchAddress("type1_pfMet_shiftedPhi_JetBBEC1yearUp", &type1_pfMet_shiftedPhi_JetBBEC1yearUp, &b_type1_pfMet_shiftedPhi_JetBBEC1yearUp);
   _tree->SetBranchAddress("type1_pfMet_shiftedPhi_JetEC2Down", &type1_pfMet_shiftedPhi_JetEC2Down, &b_type1_pfMet_shiftedPhi_JetEC2Down);
   _tree->SetBranchAddress("type1_pfMet_shiftedPhi_JetEC2Up", &type1_pfMet_shiftedPhi_JetEC2Up, &b_type1_pfMet_shiftedPhi_JetEC2Up);
   _tree->SetBranchAddress("type1_pfMet_shiftedPhi_JetEC2yearDown", &type1_pfMet_shiftedPhi_JetEC2yearDown, &b_type1_pfMet_shiftedPhi_JetEC2yearDown);
   _tree->SetBranchAddress("type1_pfMet_shiftedPhi_JetEC2yearUp", &type1_pfMet_shiftedPhi_JetEC2yearUp, &b_type1_pfMet_shiftedPhi_JetEC2yearUp);
   _tree->SetBranchAddress("type1_pfMet_shiftedPhi_JetEnDown", &type1_pfMet_shiftedPhi_JetEnDown, &b_type1_pfMet_shiftedPhi_JetEnDown);
   _tree->SetBranchAddress("type1_pfMet_shiftedPhi_JetEnUp", &type1_pfMet_shiftedPhi_JetEnUp, &b_type1_pfMet_shiftedPhi_JetEnUp);
   _tree->SetBranchAddress("type1_pfMet_shiftedPhi_JetFlavorQCDDown", &type1_pfMet_shiftedPhi_JetFlavorQCDDown, &b_type1_pfMet_shiftedPhi_JetFlavorQCDDown);
   _tree->SetBranchAddress("type1_pfMet_shiftedPhi_JetFlavorQCDUp", &type1_pfMet_shiftedPhi_JetFlavorQCDUp, &b_type1_pfMet_shiftedPhi_JetFlavorQCDUp);
   _tree->SetBranchAddress("type1_pfMet_shiftedPhi_JetHFDown", &type1_pfMet_shiftedPhi_JetHFDown, &b_type1_pfMet_shiftedPhi_JetHFDown);
   _tree->SetBranchAddress("type1_pfMet_shiftedPhi_JetHFUp", &type1_pfMet_shiftedPhi_JetHFUp, &b_type1_pfMet_shiftedPhi_JetHFUp);
   _tree->SetBranchAddress("type1_pfMet_shiftedPhi_JetHFyearDown", &type1_pfMet_shiftedPhi_JetHFyearDown, &b_type1_pfMet_shiftedPhi_JetHFyearDown);
   _tree->SetBranchAddress("type1_pfMet_shiftedPhi_JetHFyearUp", &type1_pfMet_shiftedPhi_JetHFyearUp, &b_type1_pfMet_shiftedPhi_JetHFyearUp);
   _tree->SetBranchAddress("type1_pfMet_shiftedPhi_JetRelativeBalDown", &type1_pfMet_shiftedPhi_JetRelativeBalDown, &b_type1_pfMet_shiftedPhi_JetRelativeBalDown);
   _tree->SetBranchAddress("type1_pfMet_shiftedPhi_JetRelativeBalUp", &type1_pfMet_shiftedPhi_JetRelativeBalUp, &b_type1_pfMet_shiftedPhi_JetRelativeBalUp);
   _tree->SetBranchAddress("type1_pfMet_shiftedPhi_JetRelativeSampleDown", &type1_pfMet_shiftedPhi_JetRelativeSampleDown, &b_type1_pfMet_shiftedPhi_JetRelativeSampleDown);
   _tree->SetBranchAddress("type1_pfMet_shiftedPhi_JetRelativeSampleUp", &type1_pfMet_shiftedPhi_JetRelativeSampleUp, &b_type1_pfMet_shiftedPhi_JetRelativeSampleUp);
   _tree->SetBranchAddress("type1_pfMet_shiftedPhi_JetResDown", &type1_pfMet_shiftedPhi_JetResDown, &b_type1_pfMet_shiftedPhi_JetResDown);
   _tree->SetBranchAddress("type1_pfMet_shiftedPhi_JetResUp", &type1_pfMet_shiftedPhi_JetResUp, &b_type1_pfMet_shiftedPhi_JetResUp);
   _tree->SetBranchAddress("type1_pfMet_shiftedPhi_JetTotalDown", &type1_pfMet_shiftedPhi_JetTotalDown, &b_type1_pfMet_shiftedPhi_JetTotalDown);
   _tree->SetBranchAddress("type1_pfMet_shiftedPhi_JetTotalUp", &type1_pfMet_shiftedPhi_JetTotalUp, &b_type1_pfMet_shiftedPhi_JetTotalUp);
   _tree->SetBranchAddress("type1_pfMet_shiftedPhi_UnclusteredEnDown", &type1_pfMet_shiftedPhi_UnclusteredEnDown, &b_type1_pfMet_shiftedPhi_UnclusteredEnDown);
   _tree->SetBranchAddress("type1_pfMet_shiftedPhi_UnclusteredEnUp", &type1_pfMet_shiftedPhi_UnclusteredEnUp, &b_type1_pfMet_shiftedPhi_UnclusteredEnUp);
   _tree->SetBranchAddress("type1_pfMet_shiftedPt_JERDown", &type1_pfMet_shiftedPt_JERDown, &b_type1_pfMet_shiftedPt_JERDown);
   _tree->SetBranchAddress("type1_pfMet_shiftedPt_JERUp", &type1_pfMet_shiftedPt_JERUp, &b_type1_pfMet_shiftedPt_JERUp);
   _tree->SetBranchAddress("type1_pfMet_shiftedPt_JetAbsoluteDown", &type1_pfMet_shiftedPt_JetAbsoluteDown, &b_type1_pfMet_shiftedPt_JetAbsoluteDown);
   _tree->SetBranchAddress("type1_pfMet_shiftedPt_JetAbsoluteUp", &type1_pfMet_shiftedPt_JetAbsoluteUp, &b_type1_pfMet_shiftedPt_JetAbsoluteUp);
   _tree->SetBranchAddress("type1_pfMet_shiftedPt_JetAbsoluteyearDown", &type1_pfMet_shiftedPt_JetAbsoluteyearDown, &b_type1_pfMet_shiftedPt_JetAbsoluteyearDown);
   _tree->SetBranchAddress("type1_pfMet_shiftedPt_JetAbsoluteyearUp", &type1_pfMet_shiftedPt_JetAbsoluteyearUp, &b_type1_pfMet_shiftedPt_JetAbsoluteyearUp);
   _tree->SetBranchAddress("type1_pfMet_shiftedPt_JetBBEC1Down", &type1_pfMet_shiftedPt_JetBBEC1Down, &b_type1_pfMet_shiftedPt_JetBBEC1Down);
   _tree->SetBranchAddress("type1_pfMet_shiftedPt_JetBBEC1Up", &type1_pfMet_shiftedPt_JetBBEC1Up, &b_type1_pfMet_shiftedPt_JetBBEC1Up);
   _tree->SetBranchAddress("type1_pfMet_shiftedPt_JetBBEC1yearDown", &type1_pfMet_shiftedPt_JetBBEC1yearDown, &b_type1_pfMet_shiftedPt_JetBBEC1yearDown);
   _tree->SetBranchAddress("type1_pfMet_shiftedPt_JetBBEC1yearUp", &type1_pfMet_shiftedPt_JetBBEC1yearUp, &b_type1_pfMet_shiftedPt_JetBBEC1yearUp);
   _tree->SetBranchAddress("type1_pfMet_shiftedPt_JetEC2Down", &type1_pfMet_shiftedPt_JetEC2Down, &b_type1_pfMet_shiftedPt_JetEC2Down);
   _tree->SetBranchAddress("type1_pfMet_shiftedPt_JetEC2Up", &type1_pfMet_shiftedPt_JetEC2Up, &b_type1_pfMet_shiftedPt_JetEC2Up);
   _tree->SetBranchAddress("type1_pfMet_shiftedPt_JetEC2yearDown", &type1_pfMet_shiftedPt_JetEC2yearDown, &b_type1_pfMet_shiftedPt_JetEC2yearDown);
   _tree->SetBranchAddress("type1_pfMet_shiftedPt_JetEC2yearUp", &type1_pfMet_shiftedPt_JetEC2yearUp, &b_type1_pfMet_shiftedPt_JetEC2yearUp);
   _tree->SetBranchAddress("type1_pfMet_shiftedPt_JetEnDown", &type1_pfMet_shiftedPt_JetEnDown, &b_type1_pfMet_shiftedPt_JetEnDown);
   _tree->SetBranchAddress("type1_pfMet_shiftedPt_JetEnUp", &type1_pfMet_shiftedPt_JetEnUp, &b_type1_pfMet_shiftedPt_JetEnUp);
   _tree->SetBranchAddress("type1_pfMet_shiftedPt_JetFlavorQCDDown", &type1_pfMet_shiftedPt_JetFlavorQCDDown, &b_type1_pfMet_shiftedPt_JetFlavorQCDDown);
   _tree->SetBranchAddress("type1_pfMet_shiftedPt_JetFlavorQCDUp", &type1_pfMet_shiftedPt_JetFlavorQCDUp, &b_type1_pfMet_shiftedPt_JetFlavorQCDUp);
   _tree->SetBranchAddress("type1_pfMet_shiftedPt_JetHFDown", &type1_pfMet_shiftedPt_JetHFDown, &b_type1_pfMet_shiftedPt_JetHFDown);
   _tree->SetBranchAddress("type1_pfMet_shiftedPt_JetHFUp", &type1_pfMet_shiftedPt_JetHFUp, &b_type1_pfMet_shiftedPt_JetHFUp);
   _tree->SetBranchAddress("type1_pfMet_shiftedPt_JetHFyearDown", &type1_pfMet_shiftedPt_JetHFyearDown, &b_type1_pfMet_shiftedPt_JetHFyearDown);
   _tree->SetBranchAddress("type1_pfMet_shiftedPt_JetHFyearUp", &type1_pfMet_shiftedPt_JetHFyearUp, &b_type1_pfMet_shiftedPt_JetHFyearUp);
   _tree->SetBranchAddress("type1_pfMet_shiftedPt_JetRelativeBalDown", &type1_pfMet_shiftedPt_JetRelativeBalDown, &b_type1_pfMet_shiftedPt_JetRelativeBalDown);
   _tree->SetBranchAddress("type1_pfMet_shiftedPt_JetRelativeBalUp", &type1_pfMet_shiftedPt_JetRelativeBalUp, &b_type1_pfMet_shiftedPt_JetRelativeBalUp);
   _tree->SetBranchAddress("type1_pfMet_shiftedPt_JetRelativeSampleDown", &type1_pfMet_shiftedPt_JetRelativeSampleDown, &b_type1_pfMet_shiftedPt_JetRelativeSampleDown);
   _tree->SetBranchAddress("type1_pfMet_shiftedPt_JetRelativeSampleUp", &type1_pfMet_shiftedPt_JetRelativeSampleUp, &b_type1_pfMet_shiftedPt_JetRelativeSampleUp);
   _tree->SetBranchAddress("type1_pfMet_shiftedPt_JetResDown", &type1_pfMet_shiftedPt_JetResDown, &b_type1_pfMet_shiftedPt_JetResDown);
   _tree->SetBranchAddress("type1_pfMet_shiftedPt_JetResUp", &type1_pfMet_shiftedPt_JetResUp, &b_type1_pfMet_shiftedPt_JetResUp);
   _tree->SetBranchAddress("type1_pfMet_shiftedPt_JetTotalDown", &type1_pfMet_shiftedPt_JetTotalDown, &b_type1_pfMet_shiftedPt_JetTotalDown);
   _tree->SetBranchAddress("type1_pfMet_shiftedPt_JetTotalUp", &type1_pfMet_shiftedPt_JetTotalUp, &b_type1_pfMet_shiftedPt_JetTotalUp);
   _tree->SetBranchAddress("type1_pfMet_shiftedPt_UnclusteredEnDown", &type1_pfMet_shiftedPt_UnclusteredEnDown, &b_type1_pfMet_shiftedPt_UnclusteredEnDown);
   _tree->SetBranchAddress("type1_pfMet_shiftedPt_UnclusteredEnUp", &type1_pfMet_shiftedPt_UnclusteredEnUp, &b_type1_pfMet_shiftedPt_UnclusteredEnUp);
   _tree->SetBranchAddress("vbfDeta", &vbfDeta, &b_vbfDeta);
   _tree->SetBranchAddress("vbfJetVeto20", &vbfJetVeto20, &b_vbfJetVeto20);
   _tree->SetBranchAddress("vbfJetVeto30", &vbfJetVeto30, &b_vbfJetVeto30);
   _tree->SetBranchAddress("vbfMass", &vbfMass, &b_vbfMass);
   _tree->SetBranchAddress("vbfMassWoNoisyJets", &vbfMassWoNoisyJets, &b_vbfMassWoNoisyJets);
   _tree->SetBranchAddress("vbfMassWoNoisyJets_JERDown", &vbfMassWoNoisyJets_JERDown, &b_vbfMassWoNoisyJets_JERDown);
   _tree->SetBranchAddress("vbfMassWoNoisyJets_JERUp", &vbfMassWoNoisyJets_JERUp, &b_vbfMassWoNoisyJets_JERUp);
   _tree->SetBranchAddress("vbfMassWoNoisyJets_JetAbsoluteDown", &vbfMassWoNoisyJets_JetAbsoluteDown, &b_vbfMassWoNoisyJets_JetAbsoluteDown);
   _tree->SetBranchAddress("vbfMassWoNoisyJets_JetAbsoluteUp", &vbfMassWoNoisyJets_JetAbsoluteUp, &b_vbfMassWoNoisyJets_JetAbsoluteUp);
   _tree->SetBranchAddress("vbfMassWoNoisyJets_JetAbsoluteyearDown", &vbfMassWoNoisyJets_JetAbsoluteyearDown, &b_vbfMassWoNoisyJets_JetAbsoluteyearDown);
   _tree->SetBranchAddress("vbfMassWoNoisyJets_JetAbsoluteyearUp", &vbfMassWoNoisyJets_JetAbsoluteyearUp, &b_vbfMassWoNoisyJets_JetAbsoluteyearUp);
   _tree->SetBranchAddress("vbfMassWoNoisyJets_JetBBEC1Down", &vbfMassWoNoisyJets_JetBBEC1Down, &b_vbfMassWoNoisyJets_JetBBEC1Down);
   _tree->SetBranchAddress("vbfMassWoNoisyJets_JetBBEC1Up", &vbfMassWoNoisyJets_JetBBEC1Up, &b_vbfMassWoNoisyJets_JetBBEC1Up);
   _tree->SetBranchAddress("vbfMassWoNoisyJets_JetBBEC1yearDown", &vbfMassWoNoisyJets_JetBBEC1yearDown, &b_vbfMassWoNoisyJets_JetBBEC1yearDown);
   _tree->SetBranchAddress("vbfMassWoNoisyJets_JetBBEC1yearUp", &vbfMassWoNoisyJets_JetBBEC1yearUp, &b_vbfMassWoNoisyJets_JetBBEC1yearUp);
   _tree->SetBranchAddress("vbfMassWoNoisyJets_JetEC2Down", &vbfMassWoNoisyJets_JetEC2Down, &b_vbfMassWoNoisyJets_JetEC2Down);
   _tree->SetBranchAddress("vbfMassWoNoisyJets_JetEC2Up", &vbfMassWoNoisyJets_JetEC2Up, &b_vbfMassWoNoisyJets_JetEC2Up);
   _tree->SetBranchAddress("vbfMassWoNoisyJets_JetEC2yearDown", &vbfMassWoNoisyJets_JetEC2yearDown, &b_vbfMassWoNoisyJets_JetEC2yearDown);
   _tree->SetBranchAddress("vbfMassWoNoisyJets_JetEC2yearUp", &vbfMassWoNoisyJets_JetEC2yearUp, &b_vbfMassWoNoisyJets_JetEC2yearUp);
   _tree->SetBranchAddress("vbfMassWoNoisyJets_JetFlavorQCDDown", &vbfMassWoNoisyJets_JetFlavorQCDDown, &b_vbfMassWoNoisyJets_JetFlavorQCDDown);
   _tree->SetBranchAddress("vbfMassWoNoisyJets_JetFlavorQCDUp", &vbfMassWoNoisyJets_JetFlavorQCDUp, &b_vbfMassWoNoisyJets_JetFlavorQCDUp);
   _tree->SetBranchAddress("vbfMassWoNoisyJets_JetHFDown", &vbfMassWoNoisyJets_JetHFDown, &b_vbfMassWoNoisyJets_JetHFDown);
   _tree->SetBranchAddress("vbfMassWoNoisyJets_JetHFUp", &vbfMassWoNoisyJets_JetHFUp, &b_vbfMassWoNoisyJets_JetHFUp);
   _tree->SetBranchAddress("vbfMassWoNoisyJets_JetHFyearDown", &vbfMassWoNoisyJets_JetHFyearDown, &b_vbfMassWoNoisyJets_JetHFyearDown);
   _tree->SetBranchAddress("vbfMassWoNoisyJets_JetHFyearUp", &vbfMassWoNoisyJets_JetHFyearUp, &b_vbfMassWoNoisyJets_JetHFyearUp);
   _tree->SetBranchAddress("vbfMassWoNoisyJets_JetRelativeBalDown", &vbfMassWoNoisyJets_JetRelativeBalDown, &b_vbfMassWoNoisyJets_JetRelativeBalDown);
   _tree->SetBranchAddress("vbfMassWoNoisyJets_JetRelativeBalUp", &vbfMassWoNoisyJets_JetRelativeBalUp, &b_vbfMassWoNoisyJets_JetRelativeBalUp);
   _tree->SetBranchAddress("vbfMassWoNoisyJets_JetRelativeSampleDown", &vbfMassWoNoisyJets_JetRelativeSampleDown, &b_vbfMassWoNoisyJets_JetRelativeSampleDown);
   _tree->SetBranchAddress("vbfMassWoNoisyJets_JetRelativeSampleUp", &vbfMassWoNoisyJets_JetRelativeSampleUp, &b_vbfMassWoNoisyJets_JetRelativeSampleUp);
   _tree->SetBranchAddress("vbfMassWoNoisyJets_JetTotalDown", &vbfMassWoNoisyJets_JetTotalDown, &b_vbfMassWoNoisyJets_JetTotalDown);
   _tree->SetBranchAddress("vbfMassWoNoisyJets_JetTotalUp", &vbfMassWoNoisyJets_JetTotalUp, &b_vbfMassWoNoisyJets_JetTotalUp);
   _tree->SetBranchAddress("vbfMass_JERDown", &vbfMass_JERDown, &b_vbfMass_JERDown);
   _tree->SetBranchAddress("vbfMass_JERUp", &vbfMass_JERUp, &b_vbfMass_JERUp);
   _tree->SetBranchAddress("vbfMass_JetAbsoluteDown", &vbfMass_JetAbsoluteDown, &b_vbfMass_JetAbsoluteDown);
   _tree->SetBranchAddress("vbfMass_JetAbsoluteUp", &vbfMass_JetAbsoluteUp, &b_vbfMass_JetAbsoluteUp);
   _tree->SetBranchAddress("vbfMass_JetAbsoluteyearDown", &vbfMass_JetAbsoluteyearDown, &b_vbfMass_JetAbsoluteyearDown);
   _tree->SetBranchAddress("vbfMass_JetAbsoluteyearUp", &vbfMass_JetAbsoluteyearUp, &b_vbfMass_JetAbsoluteyearUp);
   _tree->SetBranchAddress("vbfMass_JetBBEC1Down", &vbfMass_JetBBEC1Down, &b_vbfMass_JetBBEC1Down);
   _tree->SetBranchAddress("vbfMass_JetBBEC1Up", &vbfMass_JetBBEC1Up, &b_vbfMass_JetBBEC1Up);
   _tree->SetBranchAddress("vbfMass_JetBBEC1yearDown", &vbfMass_JetBBEC1yearDown, &b_vbfMass_JetBBEC1yearDown);
   _tree->SetBranchAddress("vbfMass_JetBBEC1yearUp", &vbfMass_JetBBEC1yearUp, &b_vbfMass_JetBBEC1yearUp);
   _tree->SetBranchAddress("vbfMass_JetEC2Down", &vbfMass_JetEC2Down, &b_vbfMass_JetEC2Down);
   _tree->SetBranchAddress("vbfMass_JetEC2Up", &vbfMass_JetEC2Up, &b_vbfMass_JetEC2Up);
   _tree->SetBranchAddress("vbfMass_JetEC2yearDown", &vbfMass_JetEC2yearDown, &b_vbfMass_JetEC2yearDown);
   _tree->SetBranchAddress("vbfMass_JetEC2yearUp", &vbfMass_JetEC2yearUp, &b_vbfMass_JetEC2yearUp);
   _tree->SetBranchAddress("vbfMass_JetFlavorQCDDown", &vbfMass_JetFlavorQCDDown, &b_vbfMass_JetFlavorQCDDown);
   _tree->SetBranchAddress("vbfMass_JetFlavorQCDUp", &vbfMass_JetFlavorQCDUp, &b_vbfMass_JetFlavorQCDUp);
   _tree->SetBranchAddress("vbfMass_JetHFDown", &vbfMass_JetHFDown, &b_vbfMass_JetHFDown);
   _tree->SetBranchAddress("vbfMass_JetHFUp", &vbfMass_JetHFUp, &b_vbfMass_JetHFUp);
   _tree->SetBranchAddress("vbfMass_JetHFyearDown", &vbfMass_JetHFyearDown, &b_vbfMass_JetHFyearDown);
   _tree->SetBranchAddress("vbfMass_JetHFyearUp", &vbfMass_JetHFyearUp, &b_vbfMass_JetHFyearUp);
   _tree->SetBranchAddress("vbfMass_JetRelativeBalDown", &vbfMass_JetRelativeBalDown, &b_vbfMass_JetRelativeBalDown);
   _tree->SetBranchAddress("vbfMass_JetRelativeBalUp", &vbfMass_JetRelativeBalUp, &b_vbfMass_JetRelativeBalUp);
   _tree->SetBranchAddress("vbfMass_JetRelativeSampleDown", &vbfMass_JetRelativeSampleDown, &b_vbfMass_JetRelativeSampleDown);
   _tree->SetBranchAddress("vbfMass_JetRelativeSampleUp", &vbfMass_JetRelativeSampleUp, &b_vbfMass_JetRelativeSampleUp);
   _tree->SetBranchAddress("vbfMass_JetTotalDown", &vbfMass_JetTotalDown, &b_vbfMass_JetTotalDown);
   _tree->SetBranchAddress("vbfMass_JetTotalUp", &vbfMass_JetTotalUp, &b_vbfMass_JetTotalUp);
   _tree->SetBranchAddress("vbfNJets20", &vbfNJets20, &b_vbfNJets20);
   _tree->SetBranchAddress("vbfNJets30", &vbfNJets30, &b_vbfNJets30);
   _tree->SetBranchAddress("vbfj1eta", &vbfj1eta, &b_vbfj1eta);
   _tree->SetBranchAddress("vbfj1pt", &vbfj1pt, &b_vbfj1pt);
   _tree->SetBranchAddress("vbfj2eta", &vbfj2eta, &b_vbfj2eta);
   _tree->SetBranchAddress("vbfj2pt", &vbfj2pt, &b_vbfj2pt);
   _tree->SetBranchAddress("vispX", &vispX, &b_vispX);
   _tree->SetBranchAddress("vispY", &vispY, &b_vispY);
   _tree->SetBranchAddress("idx", &idx, &b_idx);
}

Int_t HTauTauTree_mmem::GetEntry(int entry)
{
    return _tree->GetEntry(entry);
}

Long64_t HTauTauTree_mmem::GetEntries()
{
    return _tree->GetEntries();
}

TTree* HTauTauTree_mmem::GetTree()
{
    return _tree;
}

#endif

