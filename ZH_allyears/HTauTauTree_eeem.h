//////////////////////////////////////////////////////////
// This class has been automatically generated on
// Thu May 21 12:55:37 2020 by ROOT version 6.10/09
// from TTree Ntuple/Expression Ntuple
// found on file: /hdfs/store/user/caillol/ZHTT_2018_15may_mc/ZHToTauTau_M125_13TeV_powheg_pythia8_-102X_upgrade2018_realistic_v15-v2/make_ntuples_cfg-E56F6BF4-214E-0343-AA23-605601EC3921.root
//////////////////////////////////////////////////////////

#ifndef HTauTauTree_eeem_h
#define HTauTauTree_eeem_h

#include <TROOT.h>
#include <TChain.h>
#include <TFile.h>

// Header file for the classes stored in the TTree if any.

class HTauTauTree_eeem {
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
   Float_t         e1CBIDLoose;
   Float_t         e1CBIDMedium;
   Float_t         e1CBIDTight;
   Float_t         e1CBIDVeto;
   Float_t         e1Charge;
   Float_t         e1ChargeIdLoose;
   Float_t         e1ChargeIdMed;
   Float_t         e1ChargeIdTight;
   Float_t         e1ComesFromHiggs;
   Float_t         e1CorrectedEt;
   Float_t         e1E1x5;
   Float_t         e1E2x5Max;
   Float_t         e1E5x5;
   Float_t         e1EcalIsoDR03;
   Float_t         e1EnergyError;
   Float_t         e1EnergyScaleDown;
   Float_t         e1EnergyScaleGainDown;
   Float_t         e1EnergyScaleGainUp;
   Float_t         e1EnergyScaleStatDown;
   Float_t         e1EnergyScaleStatUp;
   Float_t         e1EnergyScaleSystDown;
   Float_t         e1EnergyScaleSystUp;
   Float_t         e1EnergyScaleUp;
   Float_t         e1EnergySigmaDown;
   Float_t         e1EnergySigmaPhiDown;
   Float_t         e1EnergySigmaPhiUp;
   Float_t         e1EnergySigmaRhoDown;
   Float_t         e1EnergySigmaRhoUp;
   Float_t         e1EnergySigmaUp;
   Float_t         e1Eta;
   Float_t         e1GenCharge;
   Float_t         e1GenDirectPromptTauDecay;
   Float_t         e1GenEnergy;
   Float_t         e1GenEta;
   Float_t         e1GenIsPrompt;
   Float_t         e1GenMotherPdgId;
   Float_t         e1GenParticle;
   Float_t         e1GenPdgId;
   Float_t         e1GenPhi;
   Float_t         e1GenPrompt;
   Float_t         e1GenPromptTauDecay;
   Float_t         e1GenPt;
   Float_t         e1GenTauDecay;
   Float_t         e1GenVZ;
   Float_t         e1GenVtxPVMatch;
   Float_t         e1HadronicDepth1OverEm;
   Float_t         e1HadronicDepth2OverEm;
   Float_t         e1HadronicOverEM;
   Float_t         e1HcalIsoDR03;
   Float_t         e1IP3D;
   Float_t         e1IP3DErr;
   Float_t         e1IsoDB03;
   Float_t         e1JetArea;
   Float_t         e1JetBtag;
   Float_t         e1JetDR;
   Float_t         e1JetEtaEtaMoment;
   Float_t         e1JetEtaPhiMoment;
   Float_t         e1JetEtaPhiSpread;
   Float_t         e1JetHadronFlavour;
   Float_t         e1JetPFCISVBtag;
   Float_t         e1JetPartonFlavour;
   Float_t         e1JetPhiPhiMoment;
   Float_t         e1JetPt;
   Float_t         e1LowestMll;
   Float_t         e1MVAIsoWP80;
   Float_t         e1MVAIsoWP90;
   Float_t         e1MVAIsoWPHZZ;
   Float_t         e1MVAIsoWPLoose;
   Float_t         e1MVANoisoWP80;
   Float_t         e1MVANoisoWP90;
   Float_t         e1MVANoisoWPLoose;
   Float_t         e1Mass;
   Float_t         e1MatchEmbeddedFilterEle24Tau30;
   Float_t         e1MatchEmbeddedFilterEle27;
   Float_t         e1MatchEmbeddedFilterEle32;
   Float_t         e1MatchEmbeddedFilterEle32DoubleL1_v1;
   Float_t         e1MatchEmbeddedFilterEle32DoubleL1_v2;
   Float_t         e1MatchEmbeddedFilterEle35;
   Float_t         e1MatchesEle24HPSTau30Filter;
   Float_t         e1MatchesEle24HPSTau30Path;
   Float_t         e1MatchesEle24Tau30Filter;
   Float_t         e1MatchesEle24Tau30Path;
   Float_t         e1MatchesEle25Filter;
   Float_t         e1MatchesEle25Path;
   Float_t         e1MatchesEle27Filter;
   Float_t         e1MatchesEle27Path;
   Float_t         e1MatchesEle32Filter;
   Float_t         e1MatchesEle32Path;
   Float_t         e1MatchesEle35Filter;
   Float_t         e1MatchesEle35Path;
   Float_t         e1MatchesMu23e12DZFilter;
   Float_t         e1MatchesMu23e12DZPath;
   Float_t         e1MatchesMu23e12Filter;
   Float_t         e1MatchesMu23e12Path;
   Float_t         e1MatchesMu8e23DZFilter;
   Float_t         e1MatchesMu8e23DZPath;
   Float_t         e1MatchesMu8e23Filter;
   Float_t         e1MatchesMu8e23Path;
   Float_t         e1MissingHits;
   Float_t         e1NearMuonVeto;
   Float_t         e1NearestMuonDR;
   Float_t         e1NearestZMass;
   Float_t         e1PFChargedIso;
   Float_t         e1PFNeutralIso;
   Float_t         e1PFPUChargedIso;
   Float_t         e1PFPhotonIso;
   Float_t         e1PVDXY;
   Float_t         e1PVDZ;
   Float_t         e1PassesConversionVeto;
   Float_t         e1Phi;
   Float_t         e1Pt;
   Float_t         e1RelIso;
   Float_t         e1RelPFIsoDB;
   Float_t         e1RelPFIsoRho;
   Float_t         e1Rho;
   Float_t         e1SCEnergy;
   Float_t         e1SCEta;
   Float_t         e1SCEtaWidth;
   Float_t         e1SCPhi;
   Float_t         e1SCPhiWidth;
   Float_t         e1SCPreshowerEnergy;
   Float_t         e1SCRawEnergy;
   Float_t         e1SIP2D;
   Float_t         e1SIP3D;
   Float_t         e1SigmaIEtaIEta;
   Float_t         e1TrkIsoDR03;
   Float_t         e1VZ;
   Float_t         e1ZTTGenMatching;
   Float_t         e1_e2_DR;
   Float_t         e1_e2_Mass;
   Float_t         e1_e2_doubleL1IsoTauMatch;
   Float_t         e1_e3_DR;
   Float_t         e1_e3_Mass;
   Float_t         e1_e3_doubleL1IsoTauMatch;
   Float_t         e1_m_DR;
   Float_t         e1_m_Mass;
   Float_t         e1_m_doubleL1IsoTauMatch;
   Float_t         e1deltaEtaSuperClusterTrackAtVtx;
   Float_t         e1deltaPhiSuperClusterTrackAtVtx;
   Float_t         e1eSuperClusterOverP;
   Float_t         e1ecalEnergy;
   Float_t         e1fBrem;
   Float_t         e1trackMomentumAtVtxP;
   Float_t         e2CBIDLoose;
   Float_t         e2CBIDMedium;
   Float_t         e2CBIDTight;
   Float_t         e2CBIDVeto;
   Float_t         e2Charge;
   Float_t         e2ChargeIdLoose;
   Float_t         e2ChargeIdMed;
   Float_t         e2ChargeIdTight;
   Float_t         e2ComesFromHiggs;
   Float_t         e2CorrectedEt;
   Float_t         e2E1x5;
   Float_t         e2E2x5Max;
   Float_t         e2E5x5;
   Float_t         e2EcalIsoDR03;
   Float_t         e2EnergyError;
   Float_t         e2EnergyScaleDown;
   Float_t         e2EnergyScaleGainDown;
   Float_t         e2EnergyScaleGainUp;
   Float_t         e2EnergyScaleStatDown;
   Float_t         e2EnergyScaleStatUp;
   Float_t         e2EnergyScaleSystDown;
   Float_t         e2EnergyScaleSystUp;
   Float_t         e2EnergyScaleUp;
   Float_t         e2EnergySigmaDown;
   Float_t         e2EnergySigmaPhiDown;
   Float_t         e2EnergySigmaPhiUp;
   Float_t         e2EnergySigmaRhoDown;
   Float_t         e2EnergySigmaRhoUp;
   Float_t         e2EnergySigmaUp;
   Float_t         e2Eta;
   Float_t         e2GenCharge;
   Float_t         e2GenDirectPromptTauDecay;
   Float_t         e2GenEnergy;
   Float_t         e2GenEta;
   Float_t         e2GenIsPrompt;
   Float_t         e2GenMotherPdgId;
   Float_t         e2GenParticle;
   Float_t         e2GenPdgId;
   Float_t         e2GenPhi;
   Float_t         e2GenPrompt;
   Float_t         e2GenPromptTauDecay;
   Float_t         e2GenPt;
   Float_t         e2GenTauDecay;
   Float_t         e2GenVZ;
   Float_t         e2GenVtxPVMatch;
   Float_t         e2HadronicDepth1OverEm;
   Float_t         e2HadronicDepth2OverEm;
   Float_t         e2HadronicOverEM;
   Float_t         e2HcalIsoDR03;
   Float_t         e2IP3D;
   Float_t         e2IP3DErr;
   Float_t         e2IsoDB03;
   Float_t         e2JetArea;
   Float_t         e2JetBtag;
   Float_t         e2JetDR;
   Float_t         e2JetEtaEtaMoment;
   Float_t         e2JetEtaPhiMoment;
   Float_t         e2JetEtaPhiSpread;
   Float_t         e2JetHadronFlavour;
   Float_t         e2JetPFCISVBtag;
   Float_t         e2JetPartonFlavour;
   Float_t         e2JetPhiPhiMoment;
   Float_t         e2JetPt;
   Float_t         e2LowestMll;
   Float_t         e2MVAIsoWP80;
   Float_t         e2MVAIsoWP90;
   Float_t         e2MVAIsoWPHZZ;
   Float_t         e2MVAIsoWPLoose;
   Float_t         e2MVANoisoWP80;
   Float_t         e2MVANoisoWP90;
   Float_t         e2MVANoisoWPLoose;
   Float_t         e2Mass;
   Float_t         e2MatchEmbeddedFilterEle24Tau30;
   Float_t         e2MatchEmbeddedFilterEle27;
   Float_t         e2MatchEmbeddedFilterEle32;
   Float_t         e2MatchEmbeddedFilterEle32DoubleL1_v1;
   Float_t         e2MatchEmbeddedFilterEle32DoubleL1_v2;
   Float_t         e2MatchEmbeddedFilterEle35;
   Float_t         e2MatchesEle24HPSTau30Filter;
   Float_t         e2MatchesEle24HPSTau30Path;
   Float_t         e2MatchesEle24Tau30Filter;
   Float_t         e2MatchesEle24Tau30Path;
   Float_t         e2MatchesEle25Filter;
   Float_t         e2MatchesEle25Path;
   Float_t         e2MatchesEle27Filter;
   Float_t         e2MatchesEle27Path;
   Float_t         e2MatchesEle32Filter;
   Float_t         e2MatchesEle32Path;
   Float_t         e2MatchesEle35Filter;
   Float_t         e2MatchesEle35Path;
   Float_t         e2MatchesMu23e12DZFilter;
   Float_t         e2MatchesMu23e12DZPath;
   Float_t         e2MatchesMu23e12Filter;
   Float_t         e2MatchesMu23e12Path;
   Float_t         e2MatchesMu8e23DZFilter;
   Float_t         e2MatchesMu8e23DZPath;
   Float_t         e2MatchesMu8e23Filter;
   Float_t         e2MatchesMu8e23Path;
   Float_t         e2MissingHits;
   Float_t         e2NearMuonVeto;
   Float_t         e2NearestMuonDR;
   Float_t         e2NearestZMass;
   Float_t         e2PFChargedIso;
   Float_t         e2PFNeutralIso;
   Float_t         e2PFPUChargedIso;
   Float_t         e2PFPhotonIso;
   Float_t         e2PVDXY;
   Float_t         e2PVDZ;
   Float_t         e2PassesConversionVeto;
   Float_t         e2Phi;
   Float_t         e2Pt;
   Float_t         e2RelIso;
   Float_t         e2RelPFIsoDB;
   Float_t         e2RelPFIsoRho;
   Float_t         e2Rho;
   Float_t         e2SCEnergy;
   Float_t         e2SCEta;
   Float_t         e2SCEtaWidth;
   Float_t         e2SCPhi;
   Float_t         e2SCPhiWidth;
   Float_t         e2SCPreshowerEnergy;
   Float_t         e2SCRawEnergy;
   Float_t         e2SIP2D;
   Float_t         e2SIP3D;
   Float_t         e2SigmaIEtaIEta;
   Float_t         e2TrkIsoDR03;
   Float_t         e2VZ;
   Float_t         e2ZTTGenMatching;
   Float_t         e2_e3_DR;
   Float_t         e2_e3_Mass;
   Float_t         e2_e3_doubleL1IsoTauMatch;
   Float_t         e2_m_DR;
   Float_t         e2_m_Mass;
   Float_t         e2_m_doubleL1IsoTauMatch;
   Float_t         e2deltaEtaSuperClusterTrackAtVtx;
   Float_t         e2deltaPhiSuperClusterTrackAtVtx;
   Float_t         e2eSuperClusterOverP;
   Float_t         e2ecalEnergy;
   Float_t         e2fBrem;
   Float_t         e2trackMomentumAtVtxP;
   Float_t         e3CBIDLoose;
   Float_t         e3CBIDMedium;
   Float_t         e3CBIDTight;
   Float_t         e3CBIDVeto;
   Float_t         e3Charge;
   Float_t         e3ChargeIdLoose;
   Float_t         e3ChargeIdMed;
   Float_t         e3ChargeIdTight;
   Float_t         e3ComesFromHiggs;
   Float_t         e3CorrectedEt;
   Float_t         e3E1x5;
   Float_t         e3E2x5Max;
   Float_t         e3E5x5;
   Float_t         e3EcalIsoDR03;
   Float_t         e3EnergyError;
   Float_t         e3EnergyScaleDown;
   Float_t         e3EnergyScaleGainDown;
   Float_t         e3EnergyScaleGainUp;
   Float_t         e3EnergyScaleStatDown;
   Float_t         e3EnergyScaleStatUp;
   Float_t         e3EnergyScaleSystDown;
   Float_t         e3EnergyScaleSystUp;
   Float_t         e3EnergyScaleUp;
   Float_t         e3EnergySigmaDown;
   Float_t         e3EnergySigmaPhiDown;
   Float_t         e3EnergySigmaPhiUp;
   Float_t         e3EnergySigmaRhoDown;
   Float_t         e3EnergySigmaRhoUp;
   Float_t         e3EnergySigmaUp;
   Float_t         e3Eta;
   Float_t         e3GenCharge;
   Float_t         e3GenDirectPromptTauDecay;
   Float_t         e3GenEnergy;
   Float_t         e3GenEta;
   Float_t         e3GenIsPrompt;
   Float_t         e3GenMotherPdgId;
   Float_t         e3GenParticle;
   Float_t         e3GenPdgId;
   Float_t         e3GenPhi;
   Float_t         e3GenPrompt;
   Float_t         e3GenPromptTauDecay;
   Float_t         e3GenPt;
   Float_t         e3GenTauDecay;
   Float_t         e3GenVZ;
   Float_t         e3GenVtxPVMatch;
   Float_t         e3HadronicDepth1OverEm;
   Float_t         e3HadronicDepth2OverEm;
   Float_t         e3HadronicOverEM;
   Float_t         e3HcalIsoDR03;
   Float_t         e3IP3D;
   Float_t         e3IP3DErr;
   Float_t         e3IsoDB03;
   Float_t         e3JetArea;
   Float_t         e3JetBtag;
   Float_t         e3JetDR;
   Float_t         e3JetEtaEtaMoment;
   Float_t         e3JetEtaPhiMoment;
   Float_t         e3JetEtaPhiSpread;
   Float_t         e3JetHadronFlavour;
   Float_t         e3JetPFCISVBtag;
   Float_t         e3JetPartonFlavour;
   Float_t         e3JetPhiPhiMoment;
   Float_t         e3JetPt;
   Float_t         e3LowestMll;
   Float_t         e3MVAIsoWP80;
   Float_t         e3MVAIsoWP90;
   Float_t         e3MVAIsoWPHZZ;
   Float_t         e3MVAIsoWPLoose;
   Float_t         e3MVANoisoWP80;
   Float_t         e3MVANoisoWP90;
   Float_t         e3MVANoisoWPLoose;
   Float_t         e3Mass;
   Float_t         e3MatchEmbeddedFilterEle24Tau30;
   Float_t         e3MatchEmbeddedFilterEle27;
   Float_t         e3MatchEmbeddedFilterEle32;
   Float_t         e3MatchEmbeddedFilterEle32DoubleL1_v1;
   Float_t         e3MatchEmbeddedFilterEle32DoubleL1_v2;
   Float_t         e3MatchEmbeddedFilterEle35;
   Float_t         e3MatchesEle24HPSTau30Filter;
   Float_t         e3MatchesEle24HPSTau30Path;
   Float_t         e3MatchesEle24Tau30Filter;
   Float_t         e3MatchesEle24Tau30Path;
   Float_t         e3MatchesEle25Filter;
   Float_t         e3MatchesEle25Path;
   Float_t         e3MatchesEle27Filter;
   Float_t         e3MatchesEle27Path;
   Float_t         e3MatchesEle32Filter;
   Float_t         e3MatchesEle32Path;
   Float_t         e3MatchesEle35Filter;
   Float_t         e3MatchesEle35Path;
   Float_t         e3MatchesMu23e12DZFilter;
   Float_t         e3MatchesMu23e12DZPath;
   Float_t         e3MatchesMu23e12Filter;
   Float_t         e3MatchesMu23e12Path;
   Float_t         e3MatchesMu8e23DZFilter;
   Float_t         e3MatchesMu8e23DZPath;
   Float_t         e3MatchesMu8e23Filter;
   Float_t         e3MatchesMu8e23Path;
   Float_t         e3MissingHits;
   Float_t         e3NearMuonVeto;
   Float_t         e3NearestMuonDR;
   Float_t         e3NearestZMass;
   Float_t         e3PFChargedIso;
   Float_t         e3PFNeutralIso;
   Float_t         e3PFPUChargedIso;
   Float_t         e3PFPhotonIso;
   Float_t         e3PVDXY;
   Float_t         e3PVDZ;
   Float_t         e3PassesConversionVeto;
   Float_t         e3Phi;
   Float_t         e3Pt;
   Float_t         e3RelIso;
   Float_t         e3RelPFIsoDB;
   Float_t         e3RelPFIsoRho;
   Float_t         e3Rho;
   Float_t         e3SCEnergy;
   Float_t         e3SCEta;
   Float_t         e3SCEtaWidth;
   Float_t         e3SCPhi;
   Float_t         e3SCPhiWidth;
   Float_t         e3SCPreshowerEnergy;
   Float_t         e3SCRawEnergy;
   Float_t         e3SIP2D;
   Float_t         e3SIP3D;
   Float_t         e3SigmaIEtaIEta;
   Float_t         e3TrkIsoDR03;
   Float_t         e3VZ;
   Float_t         e3ZTTGenMatching;
   Float_t         e3_m_DR;
   Float_t         e3_m_Mass;
   Float_t         e3_m_doubleL1IsoTauMatch;
   Float_t         e3deltaEtaSuperClusterTrackAtVtx;
   Float_t         e3deltaPhiSuperClusterTrackAtVtx;
   Float_t         e3eSuperClusterOverP;
   Float_t         e3ecalEnergy;
   Float_t         e3fBrem;
   Float_t         e3trackMomentumAtVtxP;
   Float_t         eVetoHZZPt5;
   Float_t         eVetoZTTp001dxyz;
   Float_t         eVetoZTTp001dxyzR0;
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
   Float_t         mBestTrackType;
   Float_t         mCharge;
   Float_t         mChi2LocalPosition;
   Float_t         mComesFromHiggs;
   Float_t         mCutBasedIdGlobalHighPt;
   Float_t         mCutBasedIdLoose;
   Float_t         mCutBasedIdMedium;
   Float_t         mCutBasedIdMediumPrompt;
   Float_t         mCutBasedIdTight;
   Float_t         mCutBasedIdTrkHighPt;
   Float_t         mEcalIsoDR03;
   Float_t         mEffectiveArea2011;
   Float_t         mEffectiveArea2012;
   Float_t         mEta;
   Float_t         mEta_MuonEnDown;
   Float_t         mEta_MuonEnUp;
   Float_t         mGenCharge;
   Float_t         mGenDirectPromptTauDecayFinalState;
   Float_t         mGenEnergy;
   Float_t         mGenEta;
   Float_t         mGenIsPrompt;
   Float_t         mGenMotherPdgId;
   Float_t         mGenParticle;
   Float_t         mGenPdgId;
   Float_t         mGenPhi;
   Float_t         mGenPrompt;
   Float_t         mGenPromptFinalState;
   Float_t         mGenPromptTauDecay;
   Float_t         mGenPt;
   Float_t         mGenTauDecay;
   Float_t         mGenVZ;
   Float_t         mGenVtxPVMatch;
   Float_t         mHcalIsoDR03;
   Float_t         mIP3D;
   Float_t         mIP3DErr;
   Float_t         mIsGlobal;
   Float_t         mIsPFMuon;
   Float_t         mIsTracker;
   Float_t         mIsoDB03;
   Float_t         mIsoDB04;
   Float_t         mJetArea;
   Float_t         mJetBtag;
   Float_t         mJetDR;
   Float_t         mJetEtaEtaMoment;
   Float_t         mJetEtaPhiMoment;
   Float_t         mJetEtaPhiSpread;
   Float_t         mJetHadronFlavour;
   Float_t         mJetPFCISVBtag;
   Float_t         mJetPartonFlavour;
   Float_t         mJetPhiPhiMoment;
   Float_t         mJetPt;
   Float_t         mLowestMll;
   Float_t         mMass;
   Float_t         mMatchEmbeddedFilterMu19Tau20_2016;
   Float_t         mMatchEmbeddedFilterMu20Tau27_2017;
   Float_t         mMatchEmbeddedFilterMu20Tau27_2018;
   Float_t         mMatchEmbeddedFilterMu24;
   Float_t         mMatchEmbeddedFilterMu27;
   Float_t         mMatchedStations;
   Float_t         mMatchesIsoMu19Tau20Filter;
   Float_t         mMatchesIsoMu19Tau20Path;
   Float_t         mMatchesIsoMu19Tau20SingleL1Filter;
   Float_t         mMatchesIsoMu19Tau20SingleL1Path;
   Float_t         mMatchesIsoMu20HPSTau27Filter;
   Float_t         mMatchesIsoMu20HPSTau27Path;
   Float_t         mMatchesIsoMu20Tau27Filter;
   Float_t         mMatchesIsoMu20Tau27Path;
   Float_t         mMatchesIsoMu22Filter;
   Float_t         mMatchesIsoMu22Path;
   Float_t         mMatchesIsoMu22eta2p1Filter;
   Float_t         mMatchesIsoMu22eta2p1Path;
   Float_t         mMatchesIsoMu24Filter;
   Float_t         mMatchesIsoMu24Path;
   Float_t         mMatchesIsoMu27Filter;
   Float_t         mMatchesIsoMu27Path;
   Float_t         mMatchesIsoTkMu22Filter;
   Float_t         mMatchesIsoTkMu22Path;
   Float_t         mMatchesIsoTkMu22eta2p1Filter;
   Float_t         mMatchesIsoTkMu22eta2p1Path;
   Float_t         mMatchesMu23e12DZFilter;
   Float_t         mMatchesMu23e12DZPath;
   Float_t         mMatchesMu23e12Filter;
   Float_t         mMatchesMu23e12Path;
   Float_t         mMatchesMu8e23DZFilter;
   Float_t         mMatchesMu8e23DZPath;
   Float_t         mMatchesMu8e23Filter;
   Float_t         mMatchesMu8e23Path;
   Float_t         mMiniIsoLoose;
   Float_t         mMiniIsoMedium;
   Float_t         mMiniIsoTight;
   Float_t         mMiniIsoVeryTight;
   Float_t         mMuonHits;
   Float_t         mMvaLoose;
   Float_t         mMvaMedium;
   Float_t         mMvaTight;
   Float_t         mNearestZMass;
   Float_t         mNormTrkChi2;
   Float_t         mNormalizedChi2;
   Float_t         mPFChargedHadronIsoR04;
   Float_t         mPFChargedIso;
   Float_t         mPFIDLoose;
   Float_t         mPFIDMedium;
   Float_t         mPFIDTight;
   Float_t         mPFIsoLoose;
   Float_t         mPFIsoMedium;
   Float_t         mPFIsoTight;
   Float_t         mPFIsoVeryLoose;
   Float_t         mPFIsoVeryTight;
   Float_t         mPFNeutralHadronIsoR04;
   Float_t         mPFNeutralIso;
   Float_t         mPFPUChargedIso;
   Float_t         mPFPhotonIso;
   Float_t         mPFPhotonIsoR04;
   Float_t         mPFPileupIsoR04;
   Float_t         mPVDXY;
   Float_t         mPVDZ;
   Float_t         mPhi;
   Float_t         mPhi_MuonEnDown;
   Float_t         mPhi_MuonEnUp;
   Float_t         mPixHits;
   Float_t         mPt;
   Float_t         mPt_MuonEnDown;
   Float_t         mPt_MuonEnUp;
   Float_t         mRelPFIsoDBDefault;
   Float_t         mRelPFIsoDBDefaultR04;
   Float_t         mRelPFIsoRho;
   Float_t         mRho;
   Float_t         mSIP2D;
   Float_t         mSIP3D;
   Float_t         mSegmentCompatibility;
   Float_t         mSoftCutBasedId;
   Float_t         mTkIsoLoose;
   Float_t         mTkIsoTight;
   Float_t         mTkLayersWithMeasurement;
   Float_t         mTrkIsoDR03;
   Float_t         mTrkKink;
   Int_t           mTypeCode;
   Float_t         mVZ;
   Float_t         mValidFraction;
   Float_t         mZTTGenMatching;
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
   TBranch        *b_e1CBIDLoose;   //!
   TBranch        *b_e1CBIDMedium;   //!
   TBranch        *b_e1CBIDTight;   //!
   TBranch        *b_e1CBIDVeto;   //!
   TBranch        *b_e1Charge;   //!
   TBranch        *b_e1ChargeIdLoose;   //!
   TBranch        *b_e1ChargeIdMed;   //!
   TBranch        *b_e1ChargeIdTight;   //!
   TBranch        *b_e1ComesFromHiggs;   //!
   TBranch        *b_e1CorrectedEt;   //!
   TBranch        *b_e1E1x5;   //!
   TBranch        *b_e1E2x5Max;   //!
   TBranch        *b_e1E5x5;   //!
   TBranch        *b_e1EcalIsoDR03;   //!
   TBranch        *b_e1EnergyError;   //!
   TBranch        *b_e1EnergyScaleDown;   //!
   TBranch        *b_e1EnergyScaleGainDown;   //!
   TBranch        *b_e1EnergyScaleGainUp;   //!
   TBranch        *b_e1EnergyScaleStatDown;   //!
   TBranch        *b_e1EnergyScaleStatUp;   //!
   TBranch        *b_e1EnergyScaleSystDown;   //!
   TBranch        *b_e1EnergyScaleSystUp;   //!
   TBranch        *b_e1EnergyScaleUp;   //!
   TBranch        *b_e1EnergySigmaDown;   //!
   TBranch        *b_e1EnergySigmaPhiDown;   //!
   TBranch        *b_e1EnergySigmaPhiUp;   //!
   TBranch        *b_e1EnergySigmaRhoDown;   //!
   TBranch        *b_e1EnergySigmaRhoUp;   //!
   TBranch        *b_e1EnergySigmaUp;   //!
   TBranch        *b_e1Eta;   //!
   TBranch        *b_e1GenCharge;   //!
   TBranch        *b_e1GenDirectPromptTauDecay;   //!
   TBranch        *b_e1GenEnergy;   //!
   TBranch        *b_e1GenEta;   //!
   TBranch        *b_e1GenIsPrompt;   //!
   TBranch        *b_e1GenMotherPdgId;   //!
   TBranch        *b_e1GenParticle;   //!
   TBranch        *b_e1GenPdgId;   //!
   TBranch        *b_e1GenPhi;   //!
   TBranch        *b_e1GenPrompt;   //!
   TBranch        *b_e1GenPromptTauDecay;   //!
   TBranch        *b_e1GenPt;   //!
   TBranch        *b_e1GenTauDecay;   //!
   TBranch        *b_e1GenVZ;   //!
   TBranch        *b_e1GenVtxPVMatch;   //!
   TBranch        *b_e1HadronicDepth1OverEm;   //!
   TBranch        *b_e1HadronicDepth2OverEm;   //!
   TBranch        *b_e1HadronicOverEM;   //!
   TBranch        *b_e1HcalIsoDR03;   //!
   TBranch        *b_e1IP3D;   //!
   TBranch        *b_e1IP3DErr;   //!
   TBranch        *b_e1IsoDB03;   //!
   TBranch        *b_e1JetArea;   //!
   TBranch        *b_e1JetBtag;   //!
   TBranch        *b_e1JetDR;   //!
   TBranch        *b_e1JetEtaEtaMoment;   //!
   TBranch        *b_e1JetEtaPhiMoment;   //!
   TBranch        *b_e1JetEtaPhiSpread;   //!
   TBranch        *b_e1JetHadronFlavour;   //!
   TBranch        *b_e1JetPFCISVBtag;   //!
   TBranch        *b_e1JetPartonFlavour;   //!
   TBranch        *b_e1JetPhiPhiMoment;   //!
   TBranch        *b_e1JetPt;   //!
   TBranch        *b_e1LowestMll;   //!
   TBranch        *b_e1MVAIsoWP80;   //!
   TBranch        *b_e1MVAIsoWP90;   //!
   TBranch        *b_e1MVAIsoWPHZZ;   //!
   TBranch        *b_e1MVAIsoWPLoose;   //!
   TBranch        *b_e1MVANoisoWP80;   //!
   TBranch        *b_e1MVANoisoWP90;   //!
   TBranch        *b_e1MVANoisoWPLoose;   //!
   TBranch        *b_e1Mass;   //!
   TBranch        *b_e1MatchEmbeddedFilterEle24Tau30;   //!
   TBranch        *b_e1MatchEmbeddedFilterEle27;   //!
   TBranch        *b_e1MatchEmbeddedFilterEle32;   //!
   TBranch        *b_e1MatchEmbeddedFilterEle32DoubleL1_v1;   //!
   TBranch        *b_e1MatchEmbeddedFilterEle32DoubleL1_v2;   //!
   TBranch        *b_e1MatchEmbeddedFilterEle35;   //!
   TBranch        *b_e1MatchesEle24HPSTau30Filter;   //!
   TBranch        *b_e1MatchesEle24HPSTau30Path;   //!
   TBranch        *b_e1MatchesEle24Tau30Filter;   //!
   TBranch        *b_e1MatchesEle24Tau30Path;   //!
   TBranch        *b_e1MatchesEle25Filter;   //!
   TBranch        *b_e1MatchesEle25Path;   //!
   TBranch        *b_e1MatchesEle27Filter;   //!
   TBranch        *b_e1MatchesEle27Path;   //!
   TBranch        *b_e1MatchesEle32Filter;   //!
   TBranch        *b_e1MatchesEle32Path;   //!
   TBranch        *b_e1MatchesEle35Filter;   //!
   TBranch        *b_e1MatchesEle35Path;   //!
   TBranch        *b_e1MatchesMu23e12DZFilter;   //!
   TBranch        *b_e1MatchesMu23e12DZPath;   //!
   TBranch        *b_e1MatchesMu23e12Filter;   //!
   TBranch        *b_e1MatchesMu23e12Path;   //!
   TBranch        *b_e1MatchesMu8e23DZFilter;   //!
   TBranch        *b_e1MatchesMu8e23DZPath;   //!
   TBranch        *b_e1MatchesMu8e23Filter;   //!
   TBranch        *b_e1MatchesMu8e23Path;   //!
   TBranch        *b_e1MissingHits;   //!
   TBranch        *b_e1NearMuonVeto;   //!
   TBranch        *b_e1NearestMuonDR;   //!
   TBranch        *b_e1NearestZMass;   //!
   TBranch        *b_e1PFChargedIso;   //!
   TBranch        *b_e1PFNeutralIso;   //!
   TBranch        *b_e1PFPUChargedIso;   //!
   TBranch        *b_e1PFPhotonIso;   //!
   TBranch        *b_e1PVDXY;   //!
   TBranch        *b_e1PVDZ;   //!
   TBranch        *b_e1PassesConversionVeto;   //!
   TBranch        *b_e1Phi;   //!
   TBranch        *b_e1Pt;   //!
   TBranch        *b_e1RelIso;   //!
   TBranch        *b_e1RelPFIsoDB;   //!
   TBranch        *b_e1RelPFIsoRho;   //!
   TBranch        *b_e1Rho;   //!
   TBranch        *b_e1SCEnergy;   //!
   TBranch        *b_e1SCEta;   //!
   TBranch        *b_e1SCEtaWidth;   //!
   TBranch        *b_e1SCPhi;   //!
   TBranch        *b_e1SCPhiWidth;   //!
   TBranch        *b_e1SCPreshowerEnergy;   //!
   TBranch        *b_e1SCRawEnergy;   //!
   TBranch        *b_e1SIP2D;   //!
   TBranch        *b_e1SIP3D;   //!
   TBranch        *b_e1SigmaIEtaIEta;   //!
   TBranch        *b_e1TrkIsoDR03;   //!
   TBranch        *b_e1VZ;   //!
   TBranch        *b_e1ZTTGenMatching;   //!
   TBranch        *b_e1_e2_DR;   //!
   TBranch        *b_e1_e2_Mass;   //!
   TBranch        *b_e1_e2_doubleL1IsoTauMatch;   //!
   TBranch        *b_e1_e3_DR;   //!
   TBranch        *b_e1_e3_Mass;   //!
   TBranch        *b_e1_e3_doubleL1IsoTauMatch;   //!
   TBranch        *b_e1_m_DR;   //!
   TBranch        *b_e1_m_Mass;   //!
   TBranch        *b_e1_m_doubleL1IsoTauMatch;   //!
   TBranch        *b_e1deltaEtaSuperClusterTrackAtVtx;   //!
   TBranch        *b_e1deltaPhiSuperClusterTrackAtVtx;   //!
   TBranch        *b_e1eSuperClusterOverP;   //!
   TBranch        *b_e1ecalEnergy;   //!
   TBranch        *b_e1fBrem;   //!
   TBranch        *b_e1trackMomentumAtVtxP;   //!
   TBranch        *b_e2CBIDLoose;   //!
   TBranch        *b_e2CBIDMedium;   //!
   TBranch        *b_e2CBIDTight;   //!
   TBranch        *b_e2CBIDVeto;   //!
   TBranch        *b_e2Charge;   //!
   TBranch        *b_e2ChargeIdLoose;   //!
   TBranch        *b_e2ChargeIdMed;   //!
   TBranch        *b_e2ChargeIdTight;   //!
   TBranch        *b_e2ComesFromHiggs;   //!
   TBranch        *b_e2CorrectedEt;   //!
   TBranch        *b_e2E1x5;   //!
   TBranch        *b_e2E2x5Max;   //!
   TBranch        *b_e2E5x5;   //!
   TBranch        *b_e2EcalIsoDR03;   //!
   TBranch        *b_e2EnergyError;   //!
   TBranch        *b_e2EnergyScaleDown;   //!
   TBranch        *b_e2EnergyScaleGainDown;   //!
   TBranch        *b_e2EnergyScaleGainUp;   //!
   TBranch        *b_e2EnergyScaleStatDown;   //!
   TBranch        *b_e2EnergyScaleStatUp;   //!
   TBranch        *b_e2EnergyScaleSystDown;   //!
   TBranch        *b_e2EnergyScaleSystUp;   //!
   TBranch        *b_e2EnergyScaleUp;   //!
   TBranch        *b_e2EnergySigmaDown;   //!
   TBranch        *b_e2EnergySigmaPhiDown;   //!
   TBranch        *b_e2EnergySigmaPhiUp;   //!
   TBranch        *b_e2EnergySigmaRhoDown;   //!
   TBranch        *b_e2EnergySigmaRhoUp;   //!
   TBranch        *b_e2EnergySigmaUp;   //!
   TBranch        *b_e2Eta;   //!
   TBranch        *b_e2GenCharge;   //!
   TBranch        *b_e2GenDirectPromptTauDecay;   //!
   TBranch        *b_e2GenEnergy;   //!
   TBranch        *b_e2GenEta;   //!
   TBranch        *b_e2GenIsPrompt;   //!
   TBranch        *b_e2GenMotherPdgId;   //!
   TBranch        *b_e2GenParticle;   //!
   TBranch        *b_e2GenPdgId;   //!
   TBranch        *b_e2GenPhi;   //!
   TBranch        *b_e2GenPrompt;   //!
   TBranch        *b_e2GenPromptTauDecay;   //!
   TBranch        *b_e2GenPt;   //!
   TBranch        *b_e2GenTauDecay;   //!
   TBranch        *b_e2GenVZ;   //!
   TBranch        *b_e2GenVtxPVMatch;   //!
   TBranch        *b_e2HadronicDepth1OverEm;   //!
   TBranch        *b_e2HadronicDepth2OverEm;   //!
   TBranch        *b_e2HadronicOverEM;   //!
   TBranch        *b_e2HcalIsoDR03;   //!
   TBranch        *b_e2IP3D;   //!
   TBranch        *b_e2IP3DErr;   //!
   TBranch        *b_e2IsoDB03;   //!
   TBranch        *b_e2JetArea;   //!
   TBranch        *b_e2JetBtag;   //!
   TBranch        *b_e2JetDR;   //!
   TBranch        *b_e2JetEtaEtaMoment;   //!
   TBranch        *b_e2JetEtaPhiMoment;   //!
   TBranch        *b_e2JetEtaPhiSpread;   //!
   TBranch        *b_e2JetHadronFlavour;   //!
   TBranch        *b_e2JetPFCISVBtag;   //!
   TBranch        *b_e2JetPartonFlavour;   //!
   TBranch        *b_e2JetPhiPhiMoment;   //!
   TBranch        *b_e2JetPt;   //!
   TBranch        *b_e2LowestMll;   //!
   TBranch        *b_e2MVAIsoWP80;   //!
   TBranch        *b_e2MVAIsoWP90;   //!
   TBranch        *b_e2MVAIsoWPHZZ;   //!
   TBranch        *b_e2MVAIsoWPLoose;   //!
   TBranch        *b_e2MVANoisoWP80;   //!
   TBranch        *b_e2MVANoisoWP90;   //!
   TBranch        *b_e2MVANoisoWPLoose;   //!
   TBranch        *b_e2Mass;   //!
   TBranch        *b_e2MatchEmbeddedFilterEle24Tau30;   //!
   TBranch        *b_e2MatchEmbeddedFilterEle27;   //!
   TBranch        *b_e2MatchEmbeddedFilterEle32;   //!
   TBranch        *b_e2MatchEmbeddedFilterEle32DoubleL1_v1;   //!
   TBranch        *b_e2MatchEmbeddedFilterEle32DoubleL1_v2;   //!
   TBranch        *b_e2MatchEmbeddedFilterEle35;   //!
   TBranch        *b_e2MatchesEle24HPSTau30Filter;   //!
   TBranch        *b_e2MatchesEle24HPSTau30Path;   //!
   TBranch        *b_e2MatchesEle24Tau30Filter;   //!
   TBranch        *b_e2MatchesEle24Tau30Path;   //!
   TBranch        *b_e2MatchesEle25Filter;   //!
   TBranch        *b_e2MatchesEle25Path;   //!
   TBranch        *b_e2MatchesEle27Filter;   //!
   TBranch        *b_e2MatchesEle27Path;   //!
   TBranch        *b_e2MatchesEle32Filter;   //!
   TBranch        *b_e2MatchesEle32Path;   //!
   TBranch        *b_e2MatchesEle35Filter;   //!
   TBranch        *b_e2MatchesEle35Path;   //!
   TBranch        *b_e2MatchesMu23e12DZFilter;   //!
   TBranch        *b_e2MatchesMu23e12DZPath;   //!
   TBranch        *b_e2MatchesMu23e12Filter;   //!
   TBranch        *b_e2MatchesMu23e12Path;   //!
   TBranch        *b_e2MatchesMu8e23DZFilter;   //!
   TBranch        *b_e2MatchesMu8e23DZPath;   //!
   TBranch        *b_e2MatchesMu8e23Filter;   //!
   TBranch        *b_e2MatchesMu8e23Path;   //!
   TBranch        *b_e2MissingHits;   //!
   TBranch        *b_e2NearMuonVeto;   //!
   TBranch        *b_e2NearestMuonDR;   //!
   TBranch        *b_e2NearestZMass;   //!
   TBranch        *b_e2PFChargedIso;   //!
   TBranch        *b_e2PFNeutralIso;   //!
   TBranch        *b_e2PFPUChargedIso;   //!
   TBranch        *b_e2PFPhotonIso;   //!
   TBranch        *b_e2PVDXY;   //!
   TBranch        *b_e2PVDZ;   //!
   TBranch        *b_e2PassesConversionVeto;   //!
   TBranch        *b_e2Phi;   //!
   TBranch        *b_e2Pt;   //!
   TBranch        *b_e2RelIso;   //!
   TBranch        *b_e2RelPFIsoDB;   //!
   TBranch        *b_e2RelPFIsoRho;   //!
   TBranch        *b_e2Rho;   //!
   TBranch        *b_e2SCEnergy;   //!
   TBranch        *b_e2SCEta;   //!
   TBranch        *b_e2SCEtaWidth;   //!
   TBranch        *b_e2SCPhi;   //!
   TBranch        *b_e2SCPhiWidth;   //!
   TBranch        *b_e2SCPreshowerEnergy;   //!
   TBranch        *b_e2SCRawEnergy;   //!
   TBranch        *b_e2SIP2D;   //!
   TBranch        *b_e2SIP3D;   //!
   TBranch        *b_e2SigmaIEtaIEta;   //!
   TBranch        *b_e2TrkIsoDR03;   //!
   TBranch        *b_e2VZ;   //!
   TBranch        *b_e2ZTTGenMatching;   //!
   TBranch        *b_e2_e3_DR;   //!
   TBranch        *b_e2_e3_Mass;   //!
   TBranch        *b_e2_e3_doubleL1IsoTauMatch;   //!
   TBranch        *b_e2_m_DR;   //!
   TBranch        *b_e2_m_Mass;   //!
   TBranch        *b_e2_m_doubleL1IsoTauMatch;   //!
   TBranch        *b_e2deltaEtaSuperClusterTrackAtVtx;   //!
   TBranch        *b_e2deltaPhiSuperClusterTrackAtVtx;   //!
   TBranch        *b_e2eSuperClusterOverP;   //!
   TBranch        *b_e2ecalEnergy;   //!
   TBranch        *b_e2fBrem;   //!
   TBranch        *b_e2trackMomentumAtVtxP;   //!
   TBranch        *b_e3CBIDLoose;   //!
   TBranch        *b_e3CBIDMedium;   //!
   TBranch        *b_e3CBIDTight;   //!
   TBranch        *b_e3CBIDVeto;   //!
   TBranch        *b_e3Charge;   //!
   TBranch        *b_e3ChargeIdLoose;   //!
   TBranch        *b_e3ChargeIdMed;   //!
   TBranch        *b_e3ChargeIdTight;   //!
   TBranch        *b_e3ComesFromHiggs;   //!
   TBranch        *b_e3CorrectedEt;   //!
   TBranch        *b_e3E1x5;   //!
   TBranch        *b_e3E2x5Max;   //!
   TBranch        *b_e3E5x5;   //!
   TBranch        *b_e3EcalIsoDR03;   //!
   TBranch        *b_e3EnergyError;   //!
   TBranch        *b_e3EnergyScaleDown;   //!
   TBranch        *b_e3EnergyScaleGainDown;   //!
   TBranch        *b_e3EnergyScaleGainUp;   //!
   TBranch        *b_e3EnergyScaleStatDown;   //!
   TBranch        *b_e3EnergyScaleStatUp;   //!
   TBranch        *b_e3EnergyScaleSystDown;   //!
   TBranch        *b_e3EnergyScaleSystUp;   //!
   TBranch        *b_e3EnergyScaleUp;   //!
   TBranch        *b_e3EnergySigmaDown;   //!
   TBranch        *b_e3EnergySigmaPhiDown;   //!
   TBranch        *b_e3EnergySigmaPhiUp;   //!
   TBranch        *b_e3EnergySigmaRhoDown;   //!
   TBranch        *b_e3EnergySigmaRhoUp;   //!
   TBranch        *b_e3EnergySigmaUp;   //!
   TBranch        *b_e3Eta;   //!
   TBranch        *b_e3GenCharge;   //!
   TBranch        *b_e3GenDirectPromptTauDecay;   //!
   TBranch        *b_e3GenEnergy;   //!
   TBranch        *b_e3GenEta;   //!
   TBranch        *b_e3GenIsPrompt;   //!
   TBranch        *b_e3GenMotherPdgId;   //!
   TBranch        *b_e3GenParticle;   //!
   TBranch        *b_e3GenPdgId;   //!
   TBranch        *b_e3GenPhi;   //!
   TBranch        *b_e3GenPrompt;   //!
   TBranch        *b_e3GenPromptTauDecay;   //!
   TBranch        *b_e3GenPt;   //!
   TBranch        *b_e3GenTauDecay;   //!
   TBranch        *b_e3GenVZ;   //!
   TBranch        *b_e3GenVtxPVMatch;   //!
   TBranch        *b_e3HadronicDepth1OverEm;   //!
   TBranch        *b_e3HadronicDepth2OverEm;   //!
   TBranch        *b_e3HadronicOverEM;   //!
   TBranch        *b_e3HcalIsoDR03;   //!
   TBranch        *b_e3IP3D;   //!
   TBranch        *b_e3IP3DErr;   //!
   TBranch        *b_e3IsoDB03;   //!
   TBranch        *b_e3JetArea;   //!
   TBranch        *b_e3JetBtag;   //!
   TBranch        *b_e3JetDR;   //!
   TBranch        *b_e3JetEtaEtaMoment;   //!
   TBranch        *b_e3JetEtaPhiMoment;   //!
   TBranch        *b_e3JetEtaPhiSpread;   //!
   TBranch        *b_e3JetHadronFlavour;   //!
   TBranch        *b_e3JetPFCISVBtag;   //!
   TBranch        *b_e3JetPartonFlavour;   //!
   TBranch        *b_e3JetPhiPhiMoment;   //!
   TBranch        *b_e3JetPt;   //!
   TBranch        *b_e3LowestMll;   //!
   TBranch        *b_e3MVAIsoWP80;   //!
   TBranch        *b_e3MVAIsoWP90;   //!
   TBranch        *b_e3MVAIsoWPHZZ;   //!
   TBranch        *b_e3MVAIsoWPLoose;   //!
   TBranch        *b_e3MVANoisoWP80;   //!
   TBranch        *b_e3MVANoisoWP90;   //!
   TBranch        *b_e3MVANoisoWPLoose;   //!
   TBranch        *b_e3Mass;   //!
   TBranch        *b_e3MatchEmbeddedFilterEle24Tau30;   //!
   TBranch        *b_e3MatchEmbeddedFilterEle27;   //!
   TBranch        *b_e3MatchEmbeddedFilterEle32;   //!
   TBranch        *b_e3MatchEmbeddedFilterEle32DoubleL1_v1;   //!
   TBranch        *b_e3MatchEmbeddedFilterEle32DoubleL1_v2;   //!
   TBranch        *b_e3MatchEmbeddedFilterEle35;   //!
   TBranch        *b_e3MatchesEle24HPSTau30Filter;   //!
   TBranch        *b_e3MatchesEle24HPSTau30Path;   //!
   TBranch        *b_e3MatchesEle24Tau30Filter;   //!
   TBranch        *b_e3MatchesEle24Tau30Path;   //!
   TBranch        *b_e3MatchesEle25Filter;   //!
   TBranch        *b_e3MatchesEle25Path;   //!
   TBranch        *b_e3MatchesEle27Filter;   //!
   TBranch        *b_e3MatchesEle27Path;   //!
   TBranch        *b_e3MatchesEle32Filter;   //!
   TBranch        *b_e3MatchesEle32Path;   //!
   TBranch        *b_e3MatchesEle35Filter;   //!
   TBranch        *b_e3MatchesEle35Path;   //!
   TBranch        *b_e3MatchesMu23e12DZFilter;   //!
   TBranch        *b_e3MatchesMu23e12DZPath;   //!
   TBranch        *b_e3MatchesMu23e12Filter;   //!
   TBranch        *b_e3MatchesMu23e12Path;   //!
   TBranch        *b_e3MatchesMu8e23DZFilter;   //!
   TBranch        *b_e3MatchesMu8e23DZPath;   //!
   TBranch        *b_e3MatchesMu8e23Filter;   //!
   TBranch        *b_e3MatchesMu8e23Path;   //!
   TBranch        *b_e3MissingHits;   //!
   TBranch        *b_e3NearMuonVeto;   //!
   TBranch        *b_e3NearestMuonDR;   //!
   TBranch        *b_e3NearestZMass;   //!
   TBranch        *b_e3PFChargedIso;   //!
   TBranch        *b_e3PFNeutralIso;   //!
   TBranch        *b_e3PFPUChargedIso;   //!
   TBranch        *b_e3PFPhotonIso;   //!
   TBranch        *b_e3PVDXY;   //!
   TBranch        *b_e3PVDZ;   //!
   TBranch        *b_e3PassesConversionVeto;   //!
   TBranch        *b_e3Phi;   //!
   TBranch        *b_e3Pt;   //!
   TBranch        *b_e3RelIso;   //!
   TBranch        *b_e3RelPFIsoDB;   //!
   TBranch        *b_e3RelPFIsoRho;   //!
   TBranch        *b_e3Rho;   //!
   TBranch        *b_e3SCEnergy;   //!
   TBranch        *b_e3SCEta;   //!
   TBranch        *b_e3SCEtaWidth;   //!
   TBranch        *b_e3SCPhi;   //!
   TBranch        *b_e3SCPhiWidth;   //!
   TBranch        *b_e3SCPreshowerEnergy;   //!
   TBranch        *b_e3SCRawEnergy;   //!
   TBranch        *b_e3SIP2D;   //!
   TBranch        *b_e3SIP3D;   //!
   TBranch        *b_e3SigmaIEtaIEta;   //!
   TBranch        *b_e3TrkIsoDR03;   //!
   TBranch        *b_e3VZ;   //!
   TBranch        *b_e3ZTTGenMatching;   //!
   TBranch        *b_e3_m_DR;   //!
   TBranch        *b_e3_m_Mass;   //!
   TBranch        *b_e3_m_doubleL1IsoTauMatch;   //!
   TBranch        *b_e3deltaEtaSuperClusterTrackAtVtx;   //!
   TBranch        *b_e3deltaPhiSuperClusterTrackAtVtx;   //!
   TBranch        *b_e3eSuperClusterOverP;   //!
   TBranch        *b_e3ecalEnergy;   //!
   TBranch        *b_e3fBrem;   //!
   TBranch        *b_e3trackMomentumAtVtxP;   //!
   TBranch        *b_eVetoHZZPt5;   //!
   TBranch        *b_eVetoZTTp001dxyz;   //!
   TBranch        *b_eVetoZTTp001dxyzR0;   //!
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
   TBranch        *b_mBestTrackType;   //!
   TBranch        *b_mCharge;   //!
   TBranch        *b_mChi2LocalPosition;   //!
   TBranch        *b_mComesFromHiggs;   //!
   TBranch        *b_mCutBasedIdGlobalHighPt;   //!
   TBranch        *b_mCutBasedIdLoose;   //!
   TBranch        *b_mCutBasedIdMedium;   //!
   TBranch        *b_mCutBasedIdMediumPrompt;   //!
   TBranch        *b_mCutBasedIdTight;   //!
   TBranch        *b_mCutBasedIdTrkHighPt;   //!
   TBranch        *b_mEcalIsoDR03;   //!
   TBranch        *b_mEffectiveArea2011;   //!
   TBranch        *b_mEffectiveArea2012;   //!
   TBranch        *b_mEta;   //!
   TBranch        *b_mEta_MuonEnDown;   //!
   TBranch        *b_mEta_MuonEnUp;   //!
   TBranch        *b_mGenCharge;   //!
   TBranch        *b_mGenDirectPromptTauDecayFinalState;   //!
   TBranch        *b_mGenEnergy;   //!
   TBranch        *b_mGenEta;   //!
   TBranch        *b_mGenIsPrompt;   //!
   TBranch        *b_mGenMotherPdgId;   //!
   TBranch        *b_mGenParticle;   //!
   TBranch        *b_mGenPdgId;   //!
   TBranch        *b_mGenPhi;   //!
   TBranch        *b_mGenPrompt;   //!
   TBranch        *b_mGenPromptFinalState;   //!
   TBranch        *b_mGenPromptTauDecay;   //!
   TBranch        *b_mGenPt;   //!
   TBranch        *b_mGenTauDecay;   //!
   TBranch        *b_mGenVZ;   //!
   TBranch        *b_mGenVtxPVMatch;   //!
   TBranch        *b_mHcalIsoDR03;   //!
   TBranch        *b_mIP3D;   //!
   TBranch        *b_mIP3DErr;   //!
   TBranch        *b_mIsGlobal;   //!
   TBranch        *b_mIsPFMuon;   //!
   TBranch        *b_mIsTracker;   //!
   TBranch        *b_mIsoDB03;   //!
   TBranch        *b_mIsoDB04;   //!
   TBranch        *b_mJetArea;   //!
   TBranch        *b_mJetBtag;   //!
   TBranch        *b_mJetDR;   //!
   TBranch        *b_mJetEtaEtaMoment;   //!
   TBranch        *b_mJetEtaPhiMoment;   //!
   TBranch        *b_mJetEtaPhiSpread;   //!
   TBranch        *b_mJetHadronFlavour;   //!
   TBranch        *b_mJetPFCISVBtag;   //!
   TBranch        *b_mJetPartonFlavour;   //!
   TBranch        *b_mJetPhiPhiMoment;   //!
   TBranch        *b_mJetPt;   //!
   TBranch        *b_mLowestMll;   //!
   TBranch        *b_mMass;   //!
   TBranch        *b_mMatchEmbeddedFilterMu19Tau20_2016;   //!
   TBranch        *b_mMatchEmbeddedFilterMu20Tau27_2017;   //!
   TBranch        *b_mMatchEmbeddedFilterMu20Tau27_2018;   //!
   TBranch        *b_mMatchEmbeddedFilterMu24;   //!
   TBranch        *b_mMatchEmbeddedFilterMu27;   //!
   TBranch        *b_mMatchedStations;   //!
   TBranch        *b_mMatchesIsoMu19Tau20Filter;   //!
   TBranch        *b_mMatchesIsoMu19Tau20Path;   //!
   TBranch        *b_mMatchesIsoMu19Tau20SingleL1Filter;   //!
   TBranch        *b_mMatchesIsoMu19Tau20SingleL1Path;   //!
   TBranch        *b_mMatchesIsoMu20HPSTau27Filter;   //!
   TBranch        *b_mMatchesIsoMu20HPSTau27Path;   //!
   TBranch        *b_mMatchesIsoMu20Tau27Filter;   //!
   TBranch        *b_mMatchesIsoMu20Tau27Path;   //!
   TBranch        *b_mMatchesIsoMu22Filter;   //!
   TBranch        *b_mMatchesIsoMu22Path;   //!
   TBranch        *b_mMatchesIsoMu22eta2p1Filter;   //!
   TBranch        *b_mMatchesIsoMu22eta2p1Path;   //!
   TBranch        *b_mMatchesIsoMu24Filter;   //!
   TBranch        *b_mMatchesIsoMu24Path;   //!
   TBranch        *b_mMatchesIsoMu27Filter;   //!
   TBranch        *b_mMatchesIsoMu27Path;   //!
   TBranch        *b_mMatchesIsoTkMu22Filter;   //!
   TBranch        *b_mMatchesIsoTkMu22Path;   //!
   TBranch        *b_mMatchesIsoTkMu22eta2p1Filter;   //!
   TBranch        *b_mMatchesIsoTkMu22eta2p1Path;   //!
   TBranch        *b_mMatchesMu23e12DZFilter;   //!
   TBranch        *b_mMatchesMu23e12DZPath;   //!
   TBranch        *b_mMatchesMu23e12Filter;   //!
   TBranch        *b_mMatchesMu23e12Path;   //!
   TBranch        *b_mMatchesMu8e23DZFilter;   //!
   TBranch        *b_mMatchesMu8e23DZPath;   //!
   TBranch        *b_mMatchesMu8e23Filter;   //!
   TBranch        *b_mMatchesMu8e23Path;   //!
   TBranch        *b_mMiniIsoLoose;   //!
   TBranch        *b_mMiniIsoMedium;   //!
   TBranch        *b_mMiniIsoTight;   //!
   TBranch        *b_mMiniIsoVeryTight;   //!
   TBranch        *b_mMuonHits;   //!
   TBranch        *b_mMvaLoose;   //!
   TBranch        *b_mMvaMedium;   //!
   TBranch        *b_mMvaTight;   //!
   TBranch        *b_mNearestZMass;   //!
   TBranch        *b_mNormTrkChi2;   //!
   TBranch        *b_mNormalizedChi2;   //!
   TBranch        *b_mPFChargedHadronIsoR04;   //!
   TBranch        *b_mPFChargedIso;   //!
   TBranch        *b_mPFIDLoose;   //!
   TBranch        *b_mPFIDMedium;   //!
   TBranch        *b_mPFIDTight;   //!
   TBranch        *b_mPFIsoLoose;   //!
   TBranch        *b_mPFIsoMedium;   //!
   TBranch        *b_mPFIsoTight;   //!
   TBranch        *b_mPFIsoVeryLoose;   //!
   TBranch        *b_mPFIsoVeryTight;   //!
   TBranch        *b_mPFNeutralHadronIsoR04;   //!
   TBranch        *b_mPFNeutralIso;   //!
   TBranch        *b_mPFPUChargedIso;   //!
   TBranch        *b_mPFPhotonIso;   //!
   TBranch        *b_mPFPhotonIsoR04;   //!
   TBranch        *b_mPFPileupIsoR04;   //!
   TBranch        *b_mPVDXY;   //!
   TBranch        *b_mPVDZ;   //!
   TBranch        *b_mPhi;   //!
   TBranch        *b_mPhi_MuonEnDown;   //!
   TBranch        *b_mPhi_MuonEnUp;   //!
   TBranch        *b_mPixHits;   //!
   TBranch        *b_mPt;   //!
   TBranch        *b_mPt_MuonEnDown;   //!
   TBranch        *b_mPt_MuonEnUp;   //!
   TBranch        *b_mRelPFIsoDBDefault;   //!
   TBranch        *b_mRelPFIsoDBDefaultR04;   //!
   TBranch        *b_mRelPFIsoRho;   //!
   TBranch        *b_mRho;   //!
   TBranch        *b_mSIP2D;   //!
   TBranch        *b_mSIP3D;   //!
   TBranch        *b_mSegmentCompatibility;   //!
   TBranch        *b_mSoftCutBasedId;   //!
   TBranch        *b_mTkIsoLoose;   //!
   TBranch        *b_mTkIsoTight;   //!
   TBranch        *b_mTkLayersWithMeasurement;   //!
   TBranch        *b_mTrkIsoDR03;   //!
   TBranch        *b_mTrkKink;   //!
   TBranch        *b_mTypeCode;   //!
   TBranch        *b_mVZ;   //!
   TBranch        *b_mValidFraction;   //!
   TBranch        *b_mZTTGenMatching;   //!
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
   HTauTauTree_eeem (TTree* tree); //ctor
   ~HTauTauTree_eeem();
   void Init(TTree* tree);
   Int_t GetEntry(int entry);
   Long64_t GetEntries();
   TTree* GetTree();
};

HTauTauTree_eeem::HTauTauTree_eeem (TTree* tree)
{
    Init(tree);
}

HTauTauTree_eeem::~HTauTauTree_eeem() {}

void HTauTauTree_eeem::Init(TTree* tree)
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
   _tree->SetBranchAddress("e1CBIDLoose", &e1CBIDLoose, &b_e1CBIDLoose);
   _tree->SetBranchAddress("e1CBIDMedium", &e1CBIDMedium, &b_e1CBIDMedium);
   _tree->SetBranchAddress("e1CBIDTight", &e1CBIDTight, &b_e1CBIDTight);
   _tree->SetBranchAddress("e1CBIDVeto", &e1CBIDVeto, &b_e1CBIDVeto);
   _tree->SetBranchAddress("e1Charge", &e1Charge, &b_e1Charge);
   _tree->SetBranchAddress("e1ChargeIdLoose", &e1ChargeIdLoose, &b_e1ChargeIdLoose);
   _tree->SetBranchAddress("e1ChargeIdMed", &e1ChargeIdMed, &b_e1ChargeIdMed);
   _tree->SetBranchAddress("e1ChargeIdTight", &e1ChargeIdTight, &b_e1ChargeIdTight);
   _tree->SetBranchAddress("e1ComesFromHiggs", &e1ComesFromHiggs, &b_e1ComesFromHiggs);
   _tree->SetBranchAddress("e1CorrectedEt", &e1CorrectedEt, &b_e1CorrectedEt);
   _tree->SetBranchAddress("e1E1x5", &e1E1x5, &b_e1E1x5);
   _tree->SetBranchAddress("e1E2x5Max", &e1E2x5Max, &b_e1E2x5Max);
   _tree->SetBranchAddress("e1E5x5", &e1E5x5, &b_e1E5x5);
   _tree->SetBranchAddress("e1EcalIsoDR03", &e1EcalIsoDR03, &b_e1EcalIsoDR03);
   _tree->SetBranchAddress("e1EnergyError", &e1EnergyError, &b_e1EnergyError);
   _tree->SetBranchAddress("e1EnergyScaleDown", &e1EnergyScaleDown, &b_e1EnergyScaleDown);
   _tree->SetBranchAddress("e1EnergyScaleGainDown", &e1EnergyScaleGainDown, &b_e1EnergyScaleGainDown);
   _tree->SetBranchAddress("e1EnergyScaleGainUp", &e1EnergyScaleGainUp, &b_e1EnergyScaleGainUp);
   _tree->SetBranchAddress("e1EnergyScaleStatDown", &e1EnergyScaleStatDown, &b_e1EnergyScaleStatDown);
   _tree->SetBranchAddress("e1EnergyScaleStatUp", &e1EnergyScaleStatUp, &b_e1EnergyScaleStatUp);
   _tree->SetBranchAddress("e1EnergyScaleSystDown", &e1EnergyScaleSystDown, &b_e1EnergyScaleSystDown);
   _tree->SetBranchAddress("e1EnergyScaleSystUp", &e1EnergyScaleSystUp, &b_e1EnergyScaleSystUp);
   _tree->SetBranchAddress("e1EnergyScaleUp", &e1EnergyScaleUp, &b_e1EnergyScaleUp);
   _tree->SetBranchAddress("e1EnergySigmaDown", &e1EnergySigmaDown, &b_e1EnergySigmaDown);
   _tree->SetBranchAddress("e1EnergySigmaPhiDown", &e1EnergySigmaPhiDown, &b_e1EnergySigmaPhiDown);
   _tree->SetBranchAddress("e1EnergySigmaPhiUp", &e1EnergySigmaPhiUp, &b_e1EnergySigmaPhiUp);
   _tree->SetBranchAddress("e1EnergySigmaRhoDown", &e1EnergySigmaRhoDown, &b_e1EnergySigmaRhoDown);
   _tree->SetBranchAddress("e1EnergySigmaRhoUp", &e1EnergySigmaRhoUp, &b_e1EnergySigmaRhoUp);
   _tree->SetBranchAddress("e1EnergySigmaUp", &e1EnergySigmaUp, &b_e1EnergySigmaUp);
   _tree->SetBranchAddress("e1Eta", &e1Eta, &b_e1Eta);
   _tree->SetBranchAddress("e1GenCharge", &e1GenCharge, &b_e1GenCharge);
   _tree->SetBranchAddress("e1GenDirectPromptTauDecay", &e1GenDirectPromptTauDecay, &b_e1GenDirectPromptTauDecay);
   _tree->SetBranchAddress("e1GenEnergy", &e1GenEnergy, &b_e1GenEnergy);
   _tree->SetBranchAddress("e1GenEta", &e1GenEta, &b_e1GenEta);
   _tree->SetBranchAddress("e1GenIsPrompt", &e1GenIsPrompt, &b_e1GenIsPrompt);
   _tree->SetBranchAddress("e1GenMotherPdgId", &e1GenMotherPdgId, &b_e1GenMotherPdgId);
   _tree->SetBranchAddress("e1GenParticle", &e1GenParticle, &b_e1GenParticle);
   _tree->SetBranchAddress("e1GenPdgId", &e1GenPdgId, &b_e1GenPdgId);
   _tree->SetBranchAddress("e1GenPhi", &e1GenPhi, &b_e1GenPhi);
   _tree->SetBranchAddress("e1GenPrompt", &e1GenPrompt, &b_e1GenPrompt);
   _tree->SetBranchAddress("e1GenPromptTauDecay", &e1GenPromptTauDecay, &b_e1GenPromptTauDecay);
   _tree->SetBranchAddress("e1GenPt", &e1GenPt, &b_e1GenPt);
   _tree->SetBranchAddress("e1GenTauDecay", &e1GenTauDecay, &b_e1GenTauDecay);
   _tree->SetBranchAddress("e1GenVZ", &e1GenVZ, &b_e1GenVZ);
   _tree->SetBranchAddress("e1GenVtxPVMatch", &e1GenVtxPVMatch, &b_e1GenVtxPVMatch);
   _tree->SetBranchAddress("e1HadronicDepth1OverEm", &e1HadronicDepth1OverEm, &b_e1HadronicDepth1OverEm);
   _tree->SetBranchAddress("e1HadronicDepth2OverEm", &e1HadronicDepth2OverEm, &b_e1HadronicDepth2OverEm);
   _tree->SetBranchAddress("e1HadronicOverEM", &e1HadronicOverEM, &b_e1HadronicOverEM);
   _tree->SetBranchAddress("e1HcalIsoDR03", &e1HcalIsoDR03, &b_e1HcalIsoDR03);
   _tree->SetBranchAddress("e1IP3D", &e1IP3D, &b_e1IP3D);
   _tree->SetBranchAddress("e1IP3DErr", &e1IP3DErr, &b_e1IP3DErr);
   _tree->SetBranchAddress("e1IsoDB03", &e1IsoDB03, &b_e1IsoDB03);
   _tree->SetBranchAddress("e1JetArea", &e1JetArea, &b_e1JetArea);
   _tree->SetBranchAddress("e1JetBtag", &e1JetBtag, &b_e1JetBtag);
   _tree->SetBranchAddress("e1JetDR", &e1JetDR, &b_e1JetDR);
   _tree->SetBranchAddress("e1JetEtaEtaMoment", &e1JetEtaEtaMoment, &b_e1JetEtaEtaMoment);
   _tree->SetBranchAddress("e1JetEtaPhiMoment", &e1JetEtaPhiMoment, &b_e1JetEtaPhiMoment);
   _tree->SetBranchAddress("e1JetEtaPhiSpread", &e1JetEtaPhiSpread, &b_e1JetEtaPhiSpread);
   _tree->SetBranchAddress("e1JetHadronFlavour", &e1JetHadronFlavour, &b_e1JetHadronFlavour);
   _tree->SetBranchAddress("e1JetPFCISVBtag", &e1JetPFCISVBtag, &b_e1JetPFCISVBtag);
   _tree->SetBranchAddress("e1JetPartonFlavour", &e1JetPartonFlavour, &b_e1JetPartonFlavour);
   _tree->SetBranchAddress("e1JetPhiPhiMoment", &e1JetPhiPhiMoment, &b_e1JetPhiPhiMoment);
   _tree->SetBranchAddress("e1JetPt", &e1JetPt, &b_e1JetPt);
   _tree->SetBranchAddress("e1LowestMll", &e1LowestMll, &b_e1LowestMll);
   _tree->SetBranchAddress("e1MVAIsoWP80", &e1MVAIsoWP80, &b_e1MVAIsoWP80);
   _tree->SetBranchAddress("e1MVAIsoWP90", &e1MVAIsoWP90, &b_e1MVAIsoWP90);
   _tree->SetBranchAddress("e1MVAIsoWPHZZ", &e1MVAIsoWPHZZ, &b_e1MVAIsoWPHZZ);
   _tree->SetBranchAddress("e1MVAIsoWPLoose", &e1MVAIsoWPLoose, &b_e1MVAIsoWPLoose);
   _tree->SetBranchAddress("e1MVANoisoWP80", &e1MVANoisoWP80, &b_e1MVANoisoWP80);
   _tree->SetBranchAddress("e1MVANoisoWP90", &e1MVANoisoWP90, &b_e1MVANoisoWP90);
   _tree->SetBranchAddress("e1MVANoisoWPLoose", &e1MVANoisoWPLoose, &b_e1MVANoisoWPLoose);
   _tree->SetBranchAddress("e1Mass", &e1Mass, &b_e1Mass);
   _tree->SetBranchAddress("e1MatchEmbeddedFilterEle24Tau30", &e1MatchEmbeddedFilterEle24Tau30, &b_e1MatchEmbeddedFilterEle24Tau30);
   _tree->SetBranchAddress("e1MatchEmbeddedFilterEle27", &e1MatchEmbeddedFilterEle27, &b_e1MatchEmbeddedFilterEle27);
   _tree->SetBranchAddress("e1MatchEmbeddedFilterEle32", &e1MatchEmbeddedFilterEle32, &b_e1MatchEmbeddedFilterEle32);
   _tree->SetBranchAddress("e1MatchEmbeddedFilterEle32DoubleL1_v1", &e1MatchEmbeddedFilterEle32DoubleL1_v1, &b_e1MatchEmbeddedFilterEle32DoubleL1_v1);
   _tree->SetBranchAddress("e1MatchEmbeddedFilterEle32DoubleL1_v2", &e1MatchEmbeddedFilterEle32DoubleL1_v2, &b_e1MatchEmbeddedFilterEle32DoubleL1_v2);
   _tree->SetBranchAddress("e1MatchEmbeddedFilterEle35", &e1MatchEmbeddedFilterEle35, &b_e1MatchEmbeddedFilterEle35);
   _tree->SetBranchAddress("e1MatchesEle24HPSTau30Filter", &e1MatchesEle24HPSTau30Filter, &b_e1MatchesEle24HPSTau30Filter);
   _tree->SetBranchAddress("e1MatchesEle24HPSTau30Path", &e1MatchesEle24HPSTau30Path, &b_e1MatchesEle24HPSTau30Path);
   _tree->SetBranchAddress("e1MatchesEle24Tau30Filter", &e1MatchesEle24Tau30Filter, &b_e1MatchesEle24Tau30Filter);
   _tree->SetBranchAddress("e1MatchesEle24Tau30Path", &e1MatchesEle24Tau30Path, &b_e1MatchesEle24Tau30Path);
   _tree->SetBranchAddress("e1MatchesEle25Filter", &e1MatchesEle25Filter, &b_e1MatchesEle25Filter);
   _tree->SetBranchAddress("e1MatchesEle25Path", &e1MatchesEle25Path, &b_e1MatchesEle25Path);
   _tree->SetBranchAddress("e1MatchesEle27Filter", &e1MatchesEle27Filter, &b_e1MatchesEle27Filter);
   _tree->SetBranchAddress("e1MatchesEle27Path", &e1MatchesEle27Path, &b_e1MatchesEle27Path);
   _tree->SetBranchAddress("e1MatchesEle32Filter", &e1MatchesEle32Filter, &b_e1MatchesEle32Filter);
   _tree->SetBranchAddress("e1MatchesEle32Path", &e1MatchesEle32Path, &b_e1MatchesEle32Path);
   _tree->SetBranchAddress("e1MatchesEle35Filter", &e1MatchesEle35Filter, &b_e1MatchesEle35Filter);
   _tree->SetBranchAddress("e1MatchesEle35Path", &e1MatchesEle35Path, &b_e1MatchesEle35Path);
   _tree->SetBranchAddress("e1MatchesMu23e12DZFilter", &e1MatchesMu23e12DZFilter, &b_e1MatchesMu23e12DZFilter);
   _tree->SetBranchAddress("e1MatchesMu23e12DZPath", &e1MatchesMu23e12DZPath, &b_e1MatchesMu23e12DZPath);
   _tree->SetBranchAddress("e1MatchesMu23e12Filter", &e1MatchesMu23e12Filter, &b_e1MatchesMu23e12Filter);
   _tree->SetBranchAddress("e1MatchesMu23e12Path", &e1MatchesMu23e12Path, &b_e1MatchesMu23e12Path);
   _tree->SetBranchAddress("e1MatchesMu8e23DZFilter", &e1MatchesMu8e23DZFilter, &b_e1MatchesMu8e23DZFilter);
   _tree->SetBranchAddress("e1MatchesMu8e23DZPath", &e1MatchesMu8e23DZPath, &b_e1MatchesMu8e23DZPath);
   _tree->SetBranchAddress("e1MatchesMu8e23Filter", &e1MatchesMu8e23Filter, &b_e1MatchesMu8e23Filter);
   _tree->SetBranchAddress("e1MatchesMu8e23Path", &e1MatchesMu8e23Path, &b_e1MatchesMu8e23Path);
   _tree->SetBranchAddress("e1MissingHits", &e1MissingHits, &b_e1MissingHits);
   _tree->SetBranchAddress("e1NearMuonVeto", &e1NearMuonVeto, &b_e1NearMuonVeto);
   _tree->SetBranchAddress("e1NearestMuonDR", &e1NearestMuonDR, &b_e1NearestMuonDR);
   _tree->SetBranchAddress("e1NearestZMass", &e1NearestZMass, &b_e1NearestZMass);
   _tree->SetBranchAddress("e1PFChargedIso", &e1PFChargedIso, &b_e1PFChargedIso);
   _tree->SetBranchAddress("e1PFNeutralIso", &e1PFNeutralIso, &b_e1PFNeutralIso);
   _tree->SetBranchAddress("e1PFPUChargedIso", &e1PFPUChargedIso, &b_e1PFPUChargedIso);
   _tree->SetBranchAddress("e1PFPhotonIso", &e1PFPhotonIso, &b_e1PFPhotonIso);
   _tree->SetBranchAddress("e1PVDXY", &e1PVDXY, &b_e1PVDXY);
   _tree->SetBranchAddress("e1PVDZ", &e1PVDZ, &b_e1PVDZ);
   _tree->SetBranchAddress("e1PassesConversionVeto", &e1PassesConversionVeto, &b_e1PassesConversionVeto);
   _tree->SetBranchAddress("e1Phi", &e1Phi, &b_e1Phi);
   _tree->SetBranchAddress("e1Pt", &e1Pt, &b_e1Pt);
   _tree->SetBranchAddress("e1RelIso", &e1RelIso, &b_e1RelIso);
   _tree->SetBranchAddress("e1RelPFIsoDB", &e1RelPFIsoDB, &b_e1RelPFIsoDB);
   _tree->SetBranchAddress("e1RelPFIsoRho", &e1RelPFIsoRho, &b_e1RelPFIsoRho);
   _tree->SetBranchAddress("e1Rho", &e1Rho, &b_e1Rho);
   _tree->SetBranchAddress("e1SCEnergy", &e1SCEnergy, &b_e1SCEnergy);
   _tree->SetBranchAddress("e1SCEta", &e1SCEta, &b_e1SCEta);
   _tree->SetBranchAddress("e1SCEtaWidth", &e1SCEtaWidth, &b_e1SCEtaWidth);
   _tree->SetBranchAddress("e1SCPhi", &e1SCPhi, &b_e1SCPhi);
   _tree->SetBranchAddress("e1SCPhiWidth", &e1SCPhiWidth, &b_e1SCPhiWidth);
   _tree->SetBranchAddress("e1SCPreshowerEnergy", &e1SCPreshowerEnergy, &b_e1SCPreshowerEnergy);
   _tree->SetBranchAddress("e1SCRawEnergy", &e1SCRawEnergy, &b_e1SCRawEnergy);
   _tree->SetBranchAddress("e1SIP2D", &e1SIP2D, &b_e1SIP2D);
   _tree->SetBranchAddress("e1SIP3D", &e1SIP3D, &b_e1SIP3D);
   _tree->SetBranchAddress("e1SigmaIEtaIEta", &e1SigmaIEtaIEta, &b_e1SigmaIEtaIEta);
   _tree->SetBranchAddress("e1TrkIsoDR03", &e1TrkIsoDR03, &b_e1TrkIsoDR03);
   _tree->SetBranchAddress("e1VZ", &e1VZ, &b_e1VZ);
   _tree->SetBranchAddress("e1ZTTGenMatching", &e1ZTTGenMatching, &b_e1ZTTGenMatching);
   _tree->SetBranchAddress("e1_e2_DR", &e1_e2_DR, &b_e1_e2_DR);
   _tree->SetBranchAddress("e1_e2_Mass", &e1_e2_Mass, &b_e1_e2_Mass);
   _tree->SetBranchAddress("e1_e2_doubleL1IsoTauMatch", &e1_e2_doubleL1IsoTauMatch, &b_e1_e2_doubleL1IsoTauMatch);
   _tree->SetBranchAddress("e1_e3_DR", &e1_e3_DR, &b_e1_e3_DR);
   _tree->SetBranchAddress("e1_e3_Mass", &e1_e3_Mass, &b_e1_e3_Mass);
   _tree->SetBranchAddress("e1_e3_doubleL1IsoTauMatch", &e1_e3_doubleL1IsoTauMatch, &b_e1_e3_doubleL1IsoTauMatch);
   _tree->SetBranchAddress("e1_m_DR", &e1_m_DR, &b_e1_m_DR);
   _tree->SetBranchAddress("e1_m_Mass", &e1_m_Mass, &b_e1_m_Mass);
   _tree->SetBranchAddress("e1_m_doubleL1IsoTauMatch", &e1_m_doubleL1IsoTauMatch, &b_e1_m_doubleL1IsoTauMatch);
   _tree->SetBranchAddress("e1deltaEtaSuperClusterTrackAtVtx", &e1deltaEtaSuperClusterTrackAtVtx, &b_e1deltaEtaSuperClusterTrackAtVtx);
   _tree->SetBranchAddress("e1deltaPhiSuperClusterTrackAtVtx", &e1deltaPhiSuperClusterTrackAtVtx, &b_e1deltaPhiSuperClusterTrackAtVtx);
   _tree->SetBranchAddress("e1eSuperClusterOverP", &e1eSuperClusterOverP, &b_e1eSuperClusterOverP);
   _tree->SetBranchAddress("e1ecalEnergy", &e1ecalEnergy, &b_e1ecalEnergy);
   _tree->SetBranchAddress("e1fBrem", &e1fBrem, &b_e1fBrem);
   _tree->SetBranchAddress("e1trackMomentumAtVtxP", &e1trackMomentumAtVtxP, &b_e1trackMomentumAtVtxP);
   _tree->SetBranchAddress("e2CBIDLoose", &e2CBIDLoose, &b_e2CBIDLoose);
   _tree->SetBranchAddress("e2CBIDMedium", &e2CBIDMedium, &b_e2CBIDMedium);
   _tree->SetBranchAddress("e2CBIDTight", &e2CBIDTight, &b_e2CBIDTight);
   _tree->SetBranchAddress("e2CBIDVeto", &e2CBIDVeto, &b_e2CBIDVeto);
   _tree->SetBranchAddress("e2Charge", &e2Charge, &b_e2Charge);
   _tree->SetBranchAddress("e2ChargeIdLoose", &e2ChargeIdLoose, &b_e2ChargeIdLoose);
   _tree->SetBranchAddress("e2ChargeIdMed", &e2ChargeIdMed, &b_e2ChargeIdMed);
   _tree->SetBranchAddress("e2ChargeIdTight", &e2ChargeIdTight, &b_e2ChargeIdTight);
   _tree->SetBranchAddress("e2ComesFromHiggs", &e2ComesFromHiggs, &b_e2ComesFromHiggs);
   _tree->SetBranchAddress("e2CorrectedEt", &e2CorrectedEt, &b_e2CorrectedEt);
   _tree->SetBranchAddress("e2E1x5", &e2E1x5, &b_e2E1x5);
   _tree->SetBranchAddress("e2E2x5Max", &e2E2x5Max, &b_e2E2x5Max);
   _tree->SetBranchAddress("e2E5x5", &e2E5x5, &b_e2E5x5);
   _tree->SetBranchAddress("e2EcalIsoDR03", &e2EcalIsoDR03, &b_e2EcalIsoDR03);
   _tree->SetBranchAddress("e2EnergyError", &e2EnergyError, &b_e2EnergyError);
   _tree->SetBranchAddress("e2EnergyScaleDown", &e2EnergyScaleDown, &b_e2EnergyScaleDown);
   _tree->SetBranchAddress("e2EnergyScaleGainDown", &e2EnergyScaleGainDown, &b_e2EnergyScaleGainDown);
   _tree->SetBranchAddress("e2EnergyScaleGainUp", &e2EnergyScaleGainUp, &b_e2EnergyScaleGainUp);
   _tree->SetBranchAddress("e2EnergyScaleStatDown", &e2EnergyScaleStatDown, &b_e2EnergyScaleStatDown);
   _tree->SetBranchAddress("e2EnergyScaleStatUp", &e2EnergyScaleStatUp, &b_e2EnergyScaleStatUp);
   _tree->SetBranchAddress("e2EnergyScaleSystDown", &e2EnergyScaleSystDown, &b_e2EnergyScaleSystDown);
   _tree->SetBranchAddress("e2EnergyScaleSystUp", &e2EnergyScaleSystUp, &b_e2EnergyScaleSystUp);
   _tree->SetBranchAddress("e2EnergyScaleUp", &e2EnergyScaleUp, &b_e2EnergyScaleUp);
   _tree->SetBranchAddress("e2EnergySigmaDown", &e2EnergySigmaDown, &b_e2EnergySigmaDown);
   _tree->SetBranchAddress("e2EnergySigmaPhiDown", &e2EnergySigmaPhiDown, &b_e2EnergySigmaPhiDown);
   _tree->SetBranchAddress("e2EnergySigmaPhiUp", &e2EnergySigmaPhiUp, &b_e2EnergySigmaPhiUp);
   _tree->SetBranchAddress("e2EnergySigmaRhoDown", &e2EnergySigmaRhoDown, &b_e2EnergySigmaRhoDown);
   _tree->SetBranchAddress("e2EnergySigmaRhoUp", &e2EnergySigmaRhoUp, &b_e2EnergySigmaRhoUp);
   _tree->SetBranchAddress("e2EnergySigmaUp", &e2EnergySigmaUp, &b_e2EnergySigmaUp);
   _tree->SetBranchAddress("e2Eta", &e2Eta, &b_e2Eta);
   _tree->SetBranchAddress("e2GenCharge", &e2GenCharge, &b_e2GenCharge);
   _tree->SetBranchAddress("e2GenDirectPromptTauDecay", &e2GenDirectPromptTauDecay, &b_e2GenDirectPromptTauDecay);
   _tree->SetBranchAddress("e2GenEnergy", &e2GenEnergy, &b_e2GenEnergy);
   _tree->SetBranchAddress("e2GenEta", &e2GenEta, &b_e2GenEta);
   _tree->SetBranchAddress("e2GenIsPrompt", &e2GenIsPrompt, &b_e2GenIsPrompt);
   _tree->SetBranchAddress("e2GenMotherPdgId", &e2GenMotherPdgId, &b_e2GenMotherPdgId);
   _tree->SetBranchAddress("e2GenParticle", &e2GenParticle, &b_e2GenParticle);
   _tree->SetBranchAddress("e2GenPdgId", &e2GenPdgId, &b_e2GenPdgId);
   _tree->SetBranchAddress("e2GenPhi", &e2GenPhi, &b_e2GenPhi);
   _tree->SetBranchAddress("e2GenPrompt", &e2GenPrompt, &b_e2GenPrompt);
   _tree->SetBranchAddress("e2GenPromptTauDecay", &e2GenPromptTauDecay, &b_e2GenPromptTauDecay);
   _tree->SetBranchAddress("e2GenPt", &e2GenPt, &b_e2GenPt);
   _tree->SetBranchAddress("e2GenTauDecay", &e2GenTauDecay, &b_e2GenTauDecay);
   _tree->SetBranchAddress("e2GenVZ", &e2GenVZ, &b_e2GenVZ);
   _tree->SetBranchAddress("e2GenVtxPVMatch", &e2GenVtxPVMatch, &b_e2GenVtxPVMatch);
   _tree->SetBranchAddress("e2HadronicDepth1OverEm", &e2HadronicDepth1OverEm, &b_e2HadronicDepth1OverEm);
   _tree->SetBranchAddress("e2HadronicDepth2OverEm", &e2HadronicDepth2OverEm, &b_e2HadronicDepth2OverEm);
   _tree->SetBranchAddress("e2HadronicOverEM", &e2HadronicOverEM, &b_e2HadronicOverEM);
   _tree->SetBranchAddress("e2HcalIsoDR03", &e2HcalIsoDR03, &b_e2HcalIsoDR03);
   _tree->SetBranchAddress("e2IP3D", &e2IP3D, &b_e2IP3D);
   _tree->SetBranchAddress("e2IP3DErr", &e2IP3DErr, &b_e2IP3DErr);
   _tree->SetBranchAddress("e2IsoDB03", &e2IsoDB03, &b_e2IsoDB03);
   _tree->SetBranchAddress("e2JetArea", &e2JetArea, &b_e2JetArea);
   _tree->SetBranchAddress("e2JetBtag", &e2JetBtag, &b_e2JetBtag);
   _tree->SetBranchAddress("e2JetDR", &e2JetDR, &b_e2JetDR);
   _tree->SetBranchAddress("e2JetEtaEtaMoment", &e2JetEtaEtaMoment, &b_e2JetEtaEtaMoment);
   _tree->SetBranchAddress("e2JetEtaPhiMoment", &e2JetEtaPhiMoment, &b_e2JetEtaPhiMoment);
   _tree->SetBranchAddress("e2JetEtaPhiSpread", &e2JetEtaPhiSpread, &b_e2JetEtaPhiSpread);
   _tree->SetBranchAddress("e2JetHadronFlavour", &e2JetHadronFlavour, &b_e2JetHadronFlavour);
   _tree->SetBranchAddress("e2JetPFCISVBtag", &e2JetPFCISVBtag, &b_e2JetPFCISVBtag);
   _tree->SetBranchAddress("e2JetPartonFlavour", &e2JetPartonFlavour, &b_e2JetPartonFlavour);
   _tree->SetBranchAddress("e2JetPhiPhiMoment", &e2JetPhiPhiMoment, &b_e2JetPhiPhiMoment);
   _tree->SetBranchAddress("e2JetPt", &e2JetPt, &b_e2JetPt);
   _tree->SetBranchAddress("e2LowestMll", &e2LowestMll, &b_e2LowestMll);
   _tree->SetBranchAddress("e2MVAIsoWP80", &e2MVAIsoWP80, &b_e2MVAIsoWP80);
   _tree->SetBranchAddress("e2MVAIsoWP90", &e2MVAIsoWP90, &b_e2MVAIsoWP90);
   _tree->SetBranchAddress("e2MVAIsoWPHZZ", &e2MVAIsoWPHZZ, &b_e2MVAIsoWPHZZ);
   _tree->SetBranchAddress("e2MVAIsoWPLoose", &e2MVAIsoWPLoose, &b_e2MVAIsoWPLoose);
   _tree->SetBranchAddress("e2MVANoisoWP80", &e2MVANoisoWP80, &b_e2MVANoisoWP80);
   _tree->SetBranchAddress("e2MVANoisoWP90", &e2MVANoisoWP90, &b_e2MVANoisoWP90);
   _tree->SetBranchAddress("e2MVANoisoWPLoose", &e2MVANoisoWPLoose, &b_e2MVANoisoWPLoose);
   _tree->SetBranchAddress("e2Mass", &e2Mass, &b_e2Mass);
   _tree->SetBranchAddress("e2MatchEmbeddedFilterEle24Tau30", &e2MatchEmbeddedFilterEle24Tau30, &b_e2MatchEmbeddedFilterEle24Tau30);
   _tree->SetBranchAddress("e2MatchEmbeddedFilterEle27", &e2MatchEmbeddedFilterEle27, &b_e2MatchEmbeddedFilterEle27);
   _tree->SetBranchAddress("e2MatchEmbeddedFilterEle32", &e2MatchEmbeddedFilterEle32, &b_e2MatchEmbeddedFilterEle32);
   _tree->SetBranchAddress("e2MatchEmbeddedFilterEle32DoubleL1_v1", &e2MatchEmbeddedFilterEle32DoubleL1_v1, &b_e2MatchEmbeddedFilterEle32DoubleL1_v1);
   _tree->SetBranchAddress("e2MatchEmbeddedFilterEle32DoubleL1_v2", &e2MatchEmbeddedFilterEle32DoubleL1_v2, &b_e2MatchEmbeddedFilterEle32DoubleL1_v2);
   _tree->SetBranchAddress("e2MatchEmbeddedFilterEle35", &e2MatchEmbeddedFilterEle35, &b_e2MatchEmbeddedFilterEle35);
   _tree->SetBranchAddress("e2MatchesEle24HPSTau30Filter", &e2MatchesEle24HPSTau30Filter, &b_e2MatchesEle24HPSTau30Filter);
   _tree->SetBranchAddress("e2MatchesEle24HPSTau30Path", &e2MatchesEle24HPSTau30Path, &b_e2MatchesEle24HPSTau30Path);
   _tree->SetBranchAddress("e2MatchesEle24Tau30Filter", &e2MatchesEle24Tau30Filter, &b_e2MatchesEle24Tau30Filter);
   _tree->SetBranchAddress("e2MatchesEle24Tau30Path", &e2MatchesEle24Tau30Path, &b_e2MatchesEle24Tau30Path);
   _tree->SetBranchAddress("e2MatchesEle25Filter", &e2MatchesEle25Filter, &b_e2MatchesEle25Filter);
   _tree->SetBranchAddress("e2MatchesEle25Path", &e2MatchesEle25Path, &b_e2MatchesEle25Path);
   _tree->SetBranchAddress("e2MatchesEle27Filter", &e2MatchesEle27Filter, &b_e2MatchesEle27Filter);
   _tree->SetBranchAddress("e2MatchesEle27Path", &e2MatchesEle27Path, &b_e2MatchesEle27Path);
   _tree->SetBranchAddress("e2MatchesEle32Filter", &e2MatchesEle32Filter, &b_e2MatchesEle32Filter);
   _tree->SetBranchAddress("e2MatchesEle32Path", &e2MatchesEle32Path, &b_e2MatchesEle32Path);
   _tree->SetBranchAddress("e2MatchesEle35Filter", &e2MatchesEle35Filter, &b_e2MatchesEle35Filter);
   _tree->SetBranchAddress("e2MatchesEle35Path", &e2MatchesEle35Path, &b_e2MatchesEle35Path);
   _tree->SetBranchAddress("e2MatchesMu23e12DZFilter", &e2MatchesMu23e12DZFilter, &b_e2MatchesMu23e12DZFilter);
   _tree->SetBranchAddress("e2MatchesMu23e12DZPath", &e2MatchesMu23e12DZPath, &b_e2MatchesMu23e12DZPath);
   _tree->SetBranchAddress("e2MatchesMu23e12Filter", &e2MatchesMu23e12Filter, &b_e2MatchesMu23e12Filter);
   _tree->SetBranchAddress("e2MatchesMu23e12Path", &e2MatchesMu23e12Path, &b_e2MatchesMu23e12Path);
   _tree->SetBranchAddress("e2MatchesMu8e23DZFilter", &e2MatchesMu8e23DZFilter, &b_e2MatchesMu8e23DZFilter);
   _tree->SetBranchAddress("e2MatchesMu8e23DZPath", &e2MatchesMu8e23DZPath, &b_e2MatchesMu8e23DZPath);
   _tree->SetBranchAddress("e2MatchesMu8e23Filter", &e2MatchesMu8e23Filter, &b_e2MatchesMu8e23Filter);
   _tree->SetBranchAddress("e2MatchesMu8e23Path", &e2MatchesMu8e23Path, &b_e2MatchesMu8e23Path);
   _tree->SetBranchAddress("e2MissingHits", &e2MissingHits, &b_e2MissingHits);
   _tree->SetBranchAddress("e2NearMuonVeto", &e2NearMuonVeto, &b_e2NearMuonVeto);
   _tree->SetBranchAddress("e2NearestMuonDR", &e2NearestMuonDR, &b_e2NearestMuonDR);
   _tree->SetBranchAddress("e2NearestZMass", &e2NearestZMass, &b_e2NearestZMass);
   _tree->SetBranchAddress("e2PFChargedIso", &e2PFChargedIso, &b_e2PFChargedIso);
   _tree->SetBranchAddress("e2PFNeutralIso", &e2PFNeutralIso, &b_e2PFNeutralIso);
   _tree->SetBranchAddress("e2PFPUChargedIso", &e2PFPUChargedIso, &b_e2PFPUChargedIso);
   _tree->SetBranchAddress("e2PFPhotonIso", &e2PFPhotonIso, &b_e2PFPhotonIso);
   _tree->SetBranchAddress("e2PVDXY", &e2PVDXY, &b_e2PVDXY);
   _tree->SetBranchAddress("e2PVDZ", &e2PVDZ, &b_e2PVDZ);
   _tree->SetBranchAddress("e2PassesConversionVeto", &e2PassesConversionVeto, &b_e2PassesConversionVeto);
   _tree->SetBranchAddress("e2Phi", &e2Phi, &b_e2Phi);
   _tree->SetBranchAddress("e2Pt", &e2Pt, &b_e2Pt);
   _tree->SetBranchAddress("e2RelIso", &e2RelIso, &b_e2RelIso);
   _tree->SetBranchAddress("e2RelPFIsoDB", &e2RelPFIsoDB, &b_e2RelPFIsoDB);
   _tree->SetBranchAddress("e2RelPFIsoRho", &e2RelPFIsoRho, &b_e2RelPFIsoRho);
   _tree->SetBranchAddress("e2Rho", &e2Rho, &b_e2Rho);
   _tree->SetBranchAddress("e2SCEnergy", &e2SCEnergy, &b_e2SCEnergy);
   _tree->SetBranchAddress("e2SCEta", &e2SCEta, &b_e2SCEta);
   _tree->SetBranchAddress("e2SCEtaWidth", &e2SCEtaWidth, &b_e2SCEtaWidth);
   _tree->SetBranchAddress("e2SCPhi", &e2SCPhi, &b_e2SCPhi);
   _tree->SetBranchAddress("e2SCPhiWidth", &e2SCPhiWidth, &b_e2SCPhiWidth);
   _tree->SetBranchAddress("e2SCPreshowerEnergy", &e2SCPreshowerEnergy, &b_e2SCPreshowerEnergy);
   _tree->SetBranchAddress("e2SCRawEnergy", &e2SCRawEnergy, &b_e2SCRawEnergy);
   _tree->SetBranchAddress("e2SIP2D", &e2SIP2D, &b_e2SIP2D);
   _tree->SetBranchAddress("e2SIP3D", &e2SIP3D, &b_e2SIP3D);
   _tree->SetBranchAddress("e2SigmaIEtaIEta", &e2SigmaIEtaIEta, &b_e2SigmaIEtaIEta);
   _tree->SetBranchAddress("e2TrkIsoDR03", &e2TrkIsoDR03, &b_e2TrkIsoDR03);
   _tree->SetBranchAddress("e2VZ", &e2VZ, &b_e2VZ);
   _tree->SetBranchAddress("e2ZTTGenMatching", &e2ZTTGenMatching, &b_e2ZTTGenMatching);
   _tree->SetBranchAddress("e2_e3_DR", &e2_e3_DR, &b_e2_e3_DR);
   _tree->SetBranchAddress("e2_e3_Mass", &e2_e3_Mass, &b_e2_e3_Mass);
   _tree->SetBranchAddress("e2_e3_doubleL1IsoTauMatch", &e2_e3_doubleL1IsoTauMatch, &b_e2_e3_doubleL1IsoTauMatch);
   _tree->SetBranchAddress("e2_m_DR", &e2_m_DR, &b_e2_m_DR);
   _tree->SetBranchAddress("e2_m_Mass", &e2_m_Mass, &b_e2_m_Mass);
   _tree->SetBranchAddress("e2_m_doubleL1IsoTauMatch", &e2_m_doubleL1IsoTauMatch, &b_e2_m_doubleL1IsoTauMatch);
   _tree->SetBranchAddress("e2deltaEtaSuperClusterTrackAtVtx", &e2deltaEtaSuperClusterTrackAtVtx, &b_e2deltaEtaSuperClusterTrackAtVtx);
   _tree->SetBranchAddress("e2deltaPhiSuperClusterTrackAtVtx", &e2deltaPhiSuperClusterTrackAtVtx, &b_e2deltaPhiSuperClusterTrackAtVtx);
   _tree->SetBranchAddress("e2eSuperClusterOverP", &e2eSuperClusterOverP, &b_e2eSuperClusterOverP);
   _tree->SetBranchAddress("e2ecalEnergy", &e2ecalEnergy, &b_e2ecalEnergy);
   _tree->SetBranchAddress("e2fBrem", &e2fBrem, &b_e2fBrem);
   _tree->SetBranchAddress("e2trackMomentumAtVtxP", &e2trackMomentumAtVtxP, &b_e2trackMomentumAtVtxP);
   _tree->SetBranchAddress("e3CBIDLoose", &e3CBIDLoose, &b_e3CBIDLoose);
   _tree->SetBranchAddress("e3CBIDMedium", &e3CBIDMedium, &b_e3CBIDMedium);
   _tree->SetBranchAddress("e3CBIDTight", &e3CBIDTight, &b_e3CBIDTight);
   _tree->SetBranchAddress("e3CBIDVeto", &e3CBIDVeto, &b_e3CBIDVeto);
   _tree->SetBranchAddress("e3Charge", &e3Charge, &b_e3Charge);
   _tree->SetBranchAddress("e3ChargeIdLoose", &e3ChargeIdLoose, &b_e3ChargeIdLoose);
   _tree->SetBranchAddress("e3ChargeIdMed", &e3ChargeIdMed, &b_e3ChargeIdMed);
   _tree->SetBranchAddress("e3ChargeIdTight", &e3ChargeIdTight, &b_e3ChargeIdTight);
   _tree->SetBranchAddress("e3ComesFromHiggs", &e3ComesFromHiggs, &b_e3ComesFromHiggs);
   _tree->SetBranchAddress("e3CorrectedEt", &e3CorrectedEt, &b_e3CorrectedEt);
   _tree->SetBranchAddress("e3E1x5", &e3E1x5, &b_e3E1x5);
   _tree->SetBranchAddress("e3E2x5Max", &e3E2x5Max, &b_e3E2x5Max);
   _tree->SetBranchAddress("e3E5x5", &e3E5x5, &b_e3E5x5);
   _tree->SetBranchAddress("e3EcalIsoDR03", &e3EcalIsoDR03, &b_e3EcalIsoDR03);
   _tree->SetBranchAddress("e3EnergyError", &e3EnergyError, &b_e3EnergyError);
   _tree->SetBranchAddress("e3EnergyScaleDown", &e3EnergyScaleDown, &b_e3EnergyScaleDown);
   _tree->SetBranchAddress("e3EnergyScaleGainDown", &e3EnergyScaleGainDown, &b_e3EnergyScaleGainDown);
   _tree->SetBranchAddress("e3EnergyScaleGainUp", &e3EnergyScaleGainUp, &b_e3EnergyScaleGainUp);
   _tree->SetBranchAddress("e3EnergyScaleStatDown", &e3EnergyScaleStatDown, &b_e3EnergyScaleStatDown);
   _tree->SetBranchAddress("e3EnergyScaleStatUp", &e3EnergyScaleStatUp, &b_e3EnergyScaleStatUp);
   _tree->SetBranchAddress("e3EnergyScaleSystDown", &e3EnergyScaleSystDown, &b_e3EnergyScaleSystDown);
   _tree->SetBranchAddress("e3EnergyScaleSystUp", &e3EnergyScaleSystUp, &b_e3EnergyScaleSystUp);
   _tree->SetBranchAddress("e3EnergyScaleUp", &e3EnergyScaleUp, &b_e3EnergyScaleUp);
   _tree->SetBranchAddress("e3EnergySigmaDown", &e3EnergySigmaDown, &b_e3EnergySigmaDown);
   _tree->SetBranchAddress("e3EnergySigmaPhiDown", &e3EnergySigmaPhiDown, &b_e3EnergySigmaPhiDown);
   _tree->SetBranchAddress("e3EnergySigmaPhiUp", &e3EnergySigmaPhiUp, &b_e3EnergySigmaPhiUp);
   _tree->SetBranchAddress("e3EnergySigmaRhoDown", &e3EnergySigmaRhoDown, &b_e3EnergySigmaRhoDown);
   _tree->SetBranchAddress("e3EnergySigmaRhoUp", &e3EnergySigmaRhoUp, &b_e3EnergySigmaRhoUp);
   _tree->SetBranchAddress("e3EnergySigmaUp", &e3EnergySigmaUp, &b_e3EnergySigmaUp);
   _tree->SetBranchAddress("e3Eta", &e3Eta, &b_e3Eta);
   _tree->SetBranchAddress("e3GenCharge", &e3GenCharge, &b_e3GenCharge);
   _tree->SetBranchAddress("e3GenDirectPromptTauDecay", &e3GenDirectPromptTauDecay, &b_e3GenDirectPromptTauDecay);
   _tree->SetBranchAddress("e3GenEnergy", &e3GenEnergy, &b_e3GenEnergy);
   _tree->SetBranchAddress("e3GenEta", &e3GenEta, &b_e3GenEta);
   _tree->SetBranchAddress("e3GenIsPrompt", &e3GenIsPrompt, &b_e3GenIsPrompt);
   _tree->SetBranchAddress("e3GenMotherPdgId", &e3GenMotherPdgId, &b_e3GenMotherPdgId);
   _tree->SetBranchAddress("e3GenParticle", &e3GenParticle, &b_e3GenParticle);
   _tree->SetBranchAddress("e3GenPdgId", &e3GenPdgId, &b_e3GenPdgId);
   _tree->SetBranchAddress("e3GenPhi", &e3GenPhi, &b_e3GenPhi);
   _tree->SetBranchAddress("e3GenPrompt", &e3GenPrompt, &b_e3GenPrompt);
   _tree->SetBranchAddress("e3GenPromptTauDecay", &e3GenPromptTauDecay, &b_e3GenPromptTauDecay);
   _tree->SetBranchAddress("e3GenPt", &e3GenPt, &b_e3GenPt);
   _tree->SetBranchAddress("e3GenTauDecay", &e3GenTauDecay, &b_e3GenTauDecay);
   _tree->SetBranchAddress("e3GenVZ", &e3GenVZ, &b_e3GenVZ);
   _tree->SetBranchAddress("e3GenVtxPVMatch", &e3GenVtxPVMatch, &b_e3GenVtxPVMatch);
   _tree->SetBranchAddress("e3HadronicDepth1OverEm", &e3HadronicDepth1OverEm, &b_e3HadronicDepth1OverEm);
   _tree->SetBranchAddress("e3HadronicDepth2OverEm", &e3HadronicDepth2OverEm, &b_e3HadronicDepth2OverEm);
   _tree->SetBranchAddress("e3HadronicOverEM", &e3HadronicOverEM, &b_e3HadronicOverEM);
   _tree->SetBranchAddress("e3HcalIsoDR03", &e3HcalIsoDR03, &b_e3HcalIsoDR03);
   _tree->SetBranchAddress("e3IP3D", &e3IP3D, &b_e3IP3D);
   _tree->SetBranchAddress("e3IP3DErr", &e3IP3DErr, &b_e3IP3DErr);
   _tree->SetBranchAddress("e3IsoDB03", &e3IsoDB03, &b_e3IsoDB03);
   _tree->SetBranchAddress("e3JetArea", &e3JetArea, &b_e3JetArea);
   _tree->SetBranchAddress("e3JetBtag", &e3JetBtag, &b_e3JetBtag);
   _tree->SetBranchAddress("e3JetDR", &e3JetDR, &b_e3JetDR);
   _tree->SetBranchAddress("e3JetEtaEtaMoment", &e3JetEtaEtaMoment, &b_e3JetEtaEtaMoment);
   _tree->SetBranchAddress("e3JetEtaPhiMoment", &e3JetEtaPhiMoment, &b_e3JetEtaPhiMoment);
   _tree->SetBranchAddress("e3JetEtaPhiSpread", &e3JetEtaPhiSpread, &b_e3JetEtaPhiSpread);
   _tree->SetBranchAddress("e3JetHadronFlavour", &e3JetHadronFlavour, &b_e3JetHadronFlavour);
   _tree->SetBranchAddress("e3JetPFCISVBtag", &e3JetPFCISVBtag, &b_e3JetPFCISVBtag);
   _tree->SetBranchAddress("e3JetPartonFlavour", &e3JetPartonFlavour, &b_e3JetPartonFlavour);
   _tree->SetBranchAddress("e3JetPhiPhiMoment", &e3JetPhiPhiMoment, &b_e3JetPhiPhiMoment);
   _tree->SetBranchAddress("e3JetPt", &e3JetPt, &b_e3JetPt);
   _tree->SetBranchAddress("e3LowestMll", &e3LowestMll, &b_e3LowestMll);
   _tree->SetBranchAddress("e3MVAIsoWP80", &e3MVAIsoWP80, &b_e3MVAIsoWP80);
   _tree->SetBranchAddress("e3MVAIsoWP90", &e3MVAIsoWP90, &b_e3MVAIsoWP90);
   _tree->SetBranchAddress("e3MVAIsoWPHZZ", &e3MVAIsoWPHZZ, &b_e3MVAIsoWPHZZ);
   _tree->SetBranchAddress("e3MVAIsoWPLoose", &e3MVAIsoWPLoose, &b_e3MVAIsoWPLoose);
   _tree->SetBranchAddress("e3MVANoisoWP80", &e3MVANoisoWP80, &b_e3MVANoisoWP80);
   _tree->SetBranchAddress("e3MVANoisoWP90", &e3MVANoisoWP90, &b_e3MVANoisoWP90);
   _tree->SetBranchAddress("e3MVANoisoWPLoose", &e3MVANoisoWPLoose, &b_e3MVANoisoWPLoose);
   _tree->SetBranchAddress("e3Mass", &e3Mass, &b_e3Mass);
   _tree->SetBranchAddress("e3MatchEmbeddedFilterEle24Tau30", &e3MatchEmbeddedFilterEle24Tau30, &b_e3MatchEmbeddedFilterEle24Tau30);
   _tree->SetBranchAddress("e3MatchEmbeddedFilterEle27", &e3MatchEmbeddedFilterEle27, &b_e3MatchEmbeddedFilterEle27);
   _tree->SetBranchAddress("e3MatchEmbeddedFilterEle32", &e3MatchEmbeddedFilterEle32, &b_e3MatchEmbeddedFilterEle32);
   _tree->SetBranchAddress("e3MatchEmbeddedFilterEle32DoubleL1_v1", &e3MatchEmbeddedFilterEle32DoubleL1_v1, &b_e3MatchEmbeddedFilterEle32DoubleL1_v1);
   _tree->SetBranchAddress("e3MatchEmbeddedFilterEle32DoubleL1_v2", &e3MatchEmbeddedFilterEle32DoubleL1_v2, &b_e3MatchEmbeddedFilterEle32DoubleL1_v2);
   _tree->SetBranchAddress("e3MatchEmbeddedFilterEle35", &e3MatchEmbeddedFilterEle35, &b_e3MatchEmbeddedFilterEle35);
   _tree->SetBranchAddress("e3MatchesEle24HPSTau30Filter", &e3MatchesEle24HPSTau30Filter, &b_e3MatchesEle24HPSTau30Filter);
   _tree->SetBranchAddress("e3MatchesEle24HPSTau30Path", &e3MatchesEle24HPSTau30Path, &b_e3MatchesEle24HPSTau30Path);
   _tree->SetBranchAddress("e3MatchesEle24Tau30Filter", &e3MatchesEle24Tau30Filter, &b_e3MatchesEle24Tau30Filter);
   _tree->SetBranchAddress("e3MatchesEle24Tau30Path", &e3MatchesEle24Tau30Path, &b_e3MatchesEle24Tau30Path);
   _tree->SetBranchAddress("e3MatchesEle25Filter", &e3MatchesEle25Filter, &b_e3MatchesEle25Filter);
   _tree->SetBranchAddress("e3MatchesEle25Path", &e3MatchesEle25Path, &b_e3MatchesEle25Path);
   _tree->SetBranchAddress("e3MatchesEle27Filter", &e3MatchesEle27Filter, &b_e3MatchesEle27Filter);
   _tree->SetBranchAddress("e3MatchesEle27Path", &e3MatchesEle27Path, &b_e3MatchesEle27Path);
   _tree->SetBranchAddress("e3MatchesEle32Filter", &e3MatchesEle32Filter, &b_e3MatchesEle32Filter);
   _tree->SetBranchAddress("e3MatchesEle32Path", &e3MatchesEle32Path, &b_e3MatchesEle32Path);
   _tree->SetBranchAddress("e3MatchesEle35Filter", &e3MatchesEle35Filter, &b_e3MatchesEle35Filter);
   _tree->SetBranchAddress("e3MatchesEle35Path", &e3MatchesEle35Path, &b_e3MatchesEle35Path);
   _tree->SetBranchAddress("e3MatchesMu23e12DZFilter", &e3MatchesMu23e12DZFilter, &b_e3MatchesMu23e12DZFilter);
   _tree->SetBranchAddress("e3MatchesMu23e12DZPath", &e3MatchesMu23e12DZPath, &b_e3MatchesMu23e12DZPath);
   _tree->SetBranchAddress("e3MatchesMu23e12Filter", &e3MatchesMu23e12Filter, &b_e3MatchesMu23e12Filter);
   _tree->SetBranchAddress("e3MatchesMu23e12Path", &e3MatchesMu23e12Path, &b_e3MatchesMu23e12Path);
   _tree->SetBranchAddress("e3MatchesMu8e23DZFilter", &e3MatchesMu8e23DZFilter, &b_e3MatchesMu8e23DZFilter);
   _tree->SetBranchAddress("e3MatchesMu8e23DZPath", &e3MatchesMu8e23DZPath, &b_e3MatchesMu8e23DZPath);
   _tree->SetBranchAddress("e3MatchesMu8e23Filter", &e3MatchesMu8e23Filter, &b_e3MatchesMu8e23Filter);
   _tree->SetBranchAddress("e3MatchesMu8e23Path", &e3MatchesMu8e23Path, &b_e3MatchesMu8e23Path);
   _tree->SetBranchAddress("e3MissingHits", &e3MissingHits, &b_e3MissingHits);
   _tree->SetBranchAddress("e3NearMuonVeto", &e3NearMuonVeto, &b_e3NearMuonVeto);
   _tree->SetBranchAddress("e3NearestMuonDR", &e3NearestMuonDR, &b_e3NearestMuonDR);
   _tree->SetBranchAddress("e3NearestZMass", &e3NearestZMass, &b_e3NearestZMass);
   _tree->SetBranchAddress("e3PFChargedIso", &e3PFChargedIso, &b_e3PFChargedIso);
   _tree->SetBranchAddress("e3PFNeutralIso", &e3PFNeutralIso, &b_e3PFNeutralIso);
   _tree->SetBranchAddress("e3PFPUChargedIso", &e3PFPUChargedIso, &b_e3PFPUChargedIso);
   _tree->SetBranchAddress("e3PFPhotonIso", &e3PFPhotonIso, &b_e3PFPhotonIso);
   _tree->SetBranchAddress("e3PVDXY", &e3PVDXY, &b_e3PVDXY);
   _tree->SetBranchAddress("e3PVDZ", &e3PVDZ, &b_e3PVDZ);
   _tree->SetBranchAddress("e3PassesConversionVeto", &e3PassesConversionVeto, &b_e3PassesConversionVeto);
   _tree->SetBranchAddress("e3Phi", &e3Phi, &b_e3Phi);
   _tree->SetBranchAddress("e3Pt", &e3Pt, &b_e3Pt);
   _tree->SetBranchAddress("e3RelIso", &e3RelIso, &b_e3RelIso);
   _tree->SetBranchAddress("e3RelPFIsoDB", &e3RelPFIsoDB, &b_e3RelPFIsoDB);
   _tree->SetBranchAddress("e3RelPFIsoRho", &e3RelPFIsoRho, &b_e3RelPFIsoRho);
   _tree->SetBranchAddress("e3Rho", &e3Rho, &b_e3Rho);
   _tree->SetBranchAddress("e3SCEnergy", &e3SCEnergy, &b_e3SCEnergy);
   _tree->SetBranchAddress("e3SCEta", &e3SCEta, &b_e3SCEta);
   _tree->SetBranchAddress("e3SCEtaWidth", &e3SCEtaWidth, &b_e3SCEtaWidth);
   _tree->SetBranchAddress("e3SCPhi", &e3SCPhi, &b_e3SCPhi);
   _tree->SetBranchAddress("e3SCPhiWidth", &e3SCPhiWidth, &b_e3SCPhiWidth);
   _tree->SetBranchAddress("e3SCPreshowerEnergy", &e3SCPreshowerEnergy, &b_e3SCPreshowerEnergy);
   _tree->SetBranchAddress("e3SCRawEnergy", &e3SCRawEnergy, &b_e3SCRawEnergy);
   _tree->SetBranchAddress("e3SIP2D", &e3SIP2D, &b_e3SIP2D);
   _tree->SetBranchAddress("e3SIP3D", &e3SIP3D, &b_e3SIP3D);
   _tree->SetBranchAddress("e3SigmaIEtaIEta", &e3SigmaIEtaIEta, &b_e3SigmaIEtaIEta);
   _tree->SetBranchAddress("e3TrkIsoDR03", &e3TrkIsoDR03, &b_e3TrkIsoDR03);
   _tree->SetBranchAddress("e3VZ", &e3VZ, &b_e3VZ);
   _tree->SetBranchAddress("e3ZTTGenMatching", &e3ZTTGenMatching, &b_e3ZTTGenMatching);
   _tree->SetBranchAddress("e3_m_DR", &e3_m_DR, &b_e3_m_DR);
   _tree->SetBranchAddress("e3_m_Mass", &e3_m_Mass, &b_e3_m_Mass);
   _tree->SetBranchAddress("e3_m_doubleL1IsoTauMatch", &e3_m_doubleL1IsoTauMatch, &b_e3_m_doubleL1IsoTauMatch);
   _tree->SetBranchAddress("e3deltaEtaSuperClusterTrackAtVtx", &e3deltaEtaSuperClusterTrackAtVtx, &b_e3deltaEtaSuperClusterTrackAtVtx);
   _tree->SetBranchAddress("e3deltaPhiSuperClusterTrackAtVtx", &e3deltaPhiSuperClusterTrackAtVtx, &b_e3deltaPhiSuperClusterTrackAtVtx);
   _tree->SetBranchAddress("e3eSuperClusterOverP", &e3eSuperClusterOverP, &b_e3eSuperClusterOverP);
   _tree->SetBranchAddress("e3ecalEnergy", &e3ecalEnergy, &b_e3ecalEnergy);
   _tree->SetBranchAddress("e3fBrem", &e3fBrem, &b_e3fBrem);
   _tree->SetBranchAddress("e3trackMomentumAtVtxP", &e3trackMomentumAtVtxP, &b_e3trackMomentumAtVtxP);
   _tree->SetBranchAddress("eVetoHZZPt5", &eVetoHZZPt5, &b_eVetoHZZPt5);
   _tree->SetBranchAddress("eVetoZTTp001dxyz", &eVetoZTTp001dxyz, &b_eVetoZTTp001dxyz);
   _tree->SetBranchAddress("eVetoZTTp001dxyzR0", &eVetoZTTp001dxyzR0, &b_eVetoZTTp001dxyzR0);
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
   _tree->SetBranchAddress("mBestTrackType", &mBestTrackType, &b_mBestTrackType);
   _tree->SetBranchAddress("mCharge", &mCharge, &b_mCharge);
   _tree->SetBranchAddress("mChi2LocalPosition", &mChi2LocalPosition, &b_mChi2LocalPosition);
   _tree->SetBranchAddress("mComesFromHiggs", &mComesFromHiggs, &b_mComesFromHiggs);
   _tree->SetBranchAddress("mCutBasedIdGlobalHighPt", &mCutBasedIdGlobalHighPt, &b_mCutBasedIdGlobalHighPt);
   _tree->SetBranchAddress("mCutBasedIdLoose", &mCutBasedIdLoose, &b_mCutBasedIdLoose);
   _tree->SetBranchAddress("mCutBasedIdMedium", &mCutBasedIdMedium, &b_mCutBasedIdMedium);
   _tree->SetBranchAddress("mCutBasedIdMediumPrompt", &mCutBasedIdMediumPrompt, &b_mCutBasedIdMediumPrompt);
   _tree->SetBranchAddress("mCutBasedIdTight", &mCutBasedIdTight, &b_mCutBasedIdTight);
   _tree->SetBranchAddress("mCutBasedIdTrkHighPt", &mCutBasedIdTrkHighPt, &b_mCutBasedIdTrkHighPt);
   _tree->SetBranchAddress("mEcalIsoDR03", &mEcalIsoDR03, &b_mEcalIsoDR03);
   _tree->SetBranchAddress("mEffectiveArea2011", &mEffectiveArea2011, &b_mEffectiveArea2011);
   _tree->SetBranchAddress("mEffectiveArea2012", &mEffectiveArea2012, &b_mEffectiveArea2012);
   _tree->SetBranchAddress("mEta", &mEta, &b_mEta);
   _tree->SetBranchAddress("mEta_MuonEnDown", &mEta_MuonEnDown, &b_mEta_MuonEnDown);
   _tree->SetBranchAddress("mEta_MuonEnUp", &mEta_MuonEnUp, &b_mEta_MuonEnUp);
   _tree->SetBranchAddress("mGenCharge", &mGenCharge, &b_mGenCharge);
   _tree->SetBranchAddress("mGenDirectPromptTauDecayFinalState", &mGenDirectPromptTauDecayFinalState, &b_mGenDirectPromptTauDecayFinalState);
   _tree->SetBranchAddress("mGenEnergy", &mGenEnergy, &b_mGenEnergy);
   _tree->SetBranchAddress("mGenEta", &mGenEta, &b_mGenEta);
   _tree->SetBranchAddress("mGenIsPrompt", &mGenIsPrompt, &b_mGenIsPrompt);
   _tree->SetBranchAddress("mGenMotherPdgId", &mGenMotherPdgId, &b_mGenMotherPdgId);
   _tree->SetBranchAddress("mGenParticle", &mGenParticle, &b_mGenParticle);
   _tree->SetBranchAddress("mGenPdgId", &mGenPdgId, &b_mGenPdgId);
   _tree->SetBranchAddress("mGenPhi", &mGenPhi, &b_mGenPhi);
   _tree->SetBranchAddress("mGenPrompt", &mGenPrompt, &b_mGenPrompt);
   _tree->SetBranchAddress("mGenPromptFinalState", &mGenPromptFinalState, &b_mGenPromptFinalState);
   _tree->SetBranchAddress("mGenPromptTauDecay", &mGenPromptTauDecay, &b_mGenPromptTauDecay);
   _tree->SetBranchAddress("mGenPt", &mGenPt, &b_mGenPt);
   _tree->SetBranchAddress("mGenTauDecay", &mGenTauDecay, &b_mGenTauDecay);
   _tree->SetBranchAddress("mGenVZ", &mGenVZ, &b_mGenVZ);
   _tree->SetBranchAddress("mGenVtxPVMatch", &mGenVtxPVMatch, &b_mGenVtxPVMatch);
   _tree->SetBranchAddress("mHcalIsoDR03", &mHcalIsoDR03, &b_mHcalIsoDR03);
   _tree->SetBranchAddress("mIP3D", &mIP3D, &b_mIP3D);
   _tree->SetBranchAddress("mIP3DErr", &mIP3DErr, &b_mIP3DErr);
   _tree->SetBranchAddress("mIsGlobal", &mIsGlobal, &b_mIsGlobal);
   _tree->SetBranchAddress("mIsPFMuon", &mIsPFMuon, &b_mIsPFMuon);
   _tree->SetBranchAddress("mIsTracker", &mIsTracker, &b_mIsTracker);
   _tree->SetBranchAddress("mIsoDB03", &mIsoDB03, &b_mIsoDB03);
   _tree->SetBranchAddress("mIsoDB04", &mIsoDB04, &b_mIsoDB04);
   _tree->SetBranchAddress("mJetArea", &mJetArea, &b_mJetArea);
   _tree->SetBranchAddress("mJetBtag", &mJetBtag, &b_mJetBtag);
   _tree->SetBranchAddress("mJetDR", &mJetDR, &b_mJetDR);
   _tree->SetBranchAddress("mJetEtaEtaMoment", &mJetEtaEtaMoment, &b_mJetEtaEtaMoment);
   _tree->SetBranchAddress("mJetEtaPhiMoment", &mJetEtaPhiMoment, &b_mJetEtaPhiMoment);
   _tree->SetBranchAddress("mJetEtaPhiSpread", &mJetEtaPhiSpread, &b_mJetEtaPhiSpread);
   _tree->SetBranchAddress("mJetHadronFlavour", &mJetHadronFlavour, &b_mJetHadronFlavour);
   _tree->SetBranchAddress("mJetPFCISVBtag", &mJetPFCISVBtag, &b_mJetPFCISVBtag);
   _tree->SetBranchAddress("mJetPartonFlavour", &mJetPartonFlavour, &b_mJetPartonFlavour);
   _tree->SetBranchAddress("mJetPhiPhiMoment", &mJetPhiPhiMoment, &b_mJetPhiPhiMoment);
   _tree->SetBranchAddress("mJetPt", &mJetPt, &b_mJetPt);
   _tree->SetBranchAddress("mLowestMll", &mLowestMll, &b_mLowestMll);
   _tree->SetBranchAddress("mMass", &mMass, &b_mMass);
   _tree->SetBranchAddress("mMatchEmbeddedFilterMu19Tau20_2016", &mMatchEmbeddedFilterMu19Tau20_2016, &b_mMatchEmbeddedFilterMu19Tau20_2016);
   _tree->SetBranchAddress("mMatchEmbeddedFilterMu20Tau27_2017", &mMatchEmbeddedFilterMu20Tau27_2017, &b_mMatchEmbeddedFilterMu20Tau27_2017);
   _tree->SetBranchAddress("mMatchEmbeddedFilterMu20Tau27_2018", &mMatchEmbeddedFilterMu20Tau27_2018, &b_mMatchEmbeddedFilterMu20Tau27_2018);
   _tree->SetBranchAddress("mMatchEmbeddedFilterMu24", &mMatchEmbeddedFilterMu24, &b_mMatchEmbeddedFilterMu24);
   _tree->SetBranchAddress("mMatchEmbeddedFilterMu27", &mMatchEmbeddedFilterMu27, &b_mMatchEmbeddedFilterMu27);
   _tree->SetBranchAddress("mMatchedStations", &mMatchedStations, &b_mMatchedStations);
   _tree->SetBranchAddress("mMatchesIsoMu19Tau20Filter", &mMatchesIsoMu19Tau20Filter, &b_mMatchesIsoMu19Tau20Filter);
   _tree->SetBranchAddress("mMatchesIsoMu19Tau20Path", &mMatchesIsoMu19Tau20Path, &b_mMatchesIsoMu19Tau20Path);
   _tree->SetBranchAddress("mMatchesIsoMu19Tau20SingleL1Filter", &mMatchesIsoMu19Tau20SingleL1Filter, &b_mMatchesIsoMu19Tau20SingleL1Filter);
   _tree->SetBranchAddress("mMatchesIsoMu19Tau20SingleL1Path", &mMatchesIsoMu19Tau20SingleL1Path, &b_mMatchesIsoMu19Tau20SingleL1Path);
   _tree->SetBranchAddress("mMatchesIsoMu20HPSTau27Filter", &mMatchesIsoMu20HPSTau27Filter, &b_mMatchesIsoMu20HPSTau27Filter);
   _tree->SetBranchAddress("mMatchesIsoMu20HPSTau27Path", &mMatchesIsoMu20HPSTau27Path, &b_mMatchesIsoMu20HPSTau27Path);
   _tree->SetBranchAddress("mMatchesIsoMu20Tau27Filter", &mMatchesIsoMu20Tau27Filter, &b_mMatchesIsoMu20Tau27Filter);
   _tree->SetBranchAddress("mMatchesIsoMu20Tau27Path", &mMatchesIsoMu20Tau27Path, &b_mMatchesIsoMu20Tau27Path);
   _tree->SetBranchAddress("mMatchesIsoMu22Filter", &mMatchesIsoMu22Filter, &b_mMatchesIsoMu22Filter);
   _tree->SetBranchAddress("mMatchesIsoMu22Path", &mMatchesIsoMu22Path, &b_mMatchesIsoMu22Path);
   _tree->SetBranchAddress("mMatchesIsoMu22eta2p1Filter", &mMatchesIsoMu22eta2p1Filter, &b_mMatchesIsoMu22eta2p1Filter);
   _tree->SetBranchAddress("mMatchesIsoMu22eta2p1Path", &mMatchesIsoMu22eta2p1Path, &b_mMatchesIsoMu22eta2p1Path);
   _tree->SetBranchAddress("mMatchesIsoMu24Filter", &mMatchesIsoMu24Filter, &b_mMatchesIsoMu24Filter);
   _tree->SetBranchAddress("mMatchesIsoMu24Path", &mMatchesIsoMu24Path, &b_mMatchesIsoMu24Path);
   _tree->SetBranchAddress("mMatchesIsoMu27Filter", &mMatchesIsoMu27Filter, &b_mMatchesIsoMu27Filter);
   _tree->SetBranchAddress("mMatchesIsoMu27Path", &mMatchesIsoMu27Path, &b_mMatchesIsoMu27Path);
   _tree->SetBranchAddress("mMatchesIsoTkMu22Filter", &mMatchesIsoTkMu22Filter, &b_mMatchesIsoTkMu22Filter);
   _tree->SetBranchAddress("mMatchesIsoTkMu22Path", &mMatchesIsoTkMu22Path, &b_mMatchesIsoTkMu22Path);
   _tree->SetBranchAddress("mMatchesIsoTkMu22eta2p1Filter", &mMatchesIsoTkMu22eta2p1Filter, &b_mMatchesIsoTkMu22eta2p1Filter);
   _tree->SetBranchAddress("mMatchesIsoTkMu22eta2p1Path", &mMatchesIsoTkMu22eta2p1Path, &b_mMatchesIsoTkMu22eta2p1Path);
   _tree->SetBranchAddress("mMatchesMu23e12DZFilter", &mMatchesMu23e12DZFilter, &b_mMatchesMu23e12DZFilter);
   _tree->SetBranchAddress("mMatchesMu23e12DZPath", &mMatchesMu23e12DZPath, &b_mMatchesMu23e12DZPath);
   _tree->SetBranchAddress("mMatchesMu23e12Filter", &mMatchesMu23e12Filter, &b_mMatchesMu23e12Filter);
   _tree->SetBranchAddress("mMatchesMu23e12Path", &mMatchesMu23e12Path, &b_mMatchesMu23e12Path);
   _tree->SetBranchAddress("mMatchesMu8e23DZFilter", &mMatchesMu8e23DZFilter, &b_mMatchesMu8e23DZFilter);
   _tree->SetBranchAddress("mMatchesMu8e23DZPath", &mMatchesMu8e23DZPath, &b_mMatchesMu8e23DZPath);
   _tree->SetBranchAddress("mMatchesMu8e23Filter", &mMatchesMu8e23Filter, &b_mMatchesMu8e23Filter);
   _tree->SetBranchAddress("mMatchesMu8e23Path", &mMatchesMu8e23Path, &b_mMatchesMu8e23Path);
   _tree->SetBranchAddress("mMiniIsoLoose", &mMiniIsoLoose, &b_mMiniIsoLoose);
   _tree->SetBranchAddress("mMiniIsoMedium", &mMiniIsoMedium, &b_mMiniIsoMedium);
   _tree->SetBranchAddress("mMiniIsoTight", &mMiniIsoTight, &b_mMiniIsoTight);
   _tree->SetBranchAddress("mMiniIsoVeryTight", &mMiniIsoVeryTight, &b_mMiniIsoVeryTight);
   _tree->SetBranchAddress("mMuonHits", &mMuonHits, &b_mMuonHits);
   _tree->SetBranchAddress("mMvaLoose", &mMvaLoose, &b_mMvaLoose);
   _tree->SetBranchAddress("mMvaMedium", &mMvaMedium, &b_mMvaMedium);
   _tree->SetBranchAddress("mMvaTight", &mMvaTight, &b_mMvaTight);
   _tree->SetBranchAddress("mNearestZMass", &mNearestZMass, &b_mNearestZMass);
   _tree->SetBranchAddress("mNormTrkChi2", &mNormTrkChi2, &b_mNormTrkChi2);
   _tree->SetBranchAddress("mNormalizedChi2", &mNormalizedChi2, &b_mNormalizedChi2);
   _tree->SetBranchAddress("mPFChargedHadronIsoR04", &mPFChargedHadronIsoR04, &b_mPFChargedHadronIsoR04);
   _tree->SetBranchAddress("mPFChargedIso", &mPFChargedIso, &b_mPFChargedIso);
   _tree->SetBranchAddress("mPFIDLoose", &mPFIDLoose, &b_mPFIDLoose);
   _tree->SetBranchAddress("mPFIDMedium", &mPFIDMedium, &b_mPFIDMedium);
   _tree->SetBranchAddress("mPFIDTight", &mPFIDTight, &b_mPFIDTight);
   _tree->SetBranchAddress("mPFIsoLoose", &mPFIsoLoose, &b_mPFIsoLoose);
   _tree->SetBranchAddress("mPFIsoMedium", &mPFIsoMedium, &b_mPFIsoMedium);
   _tree->SetBranchAddress("mPFIsoTight", &mPFIsoTight, &b_mPFIsoTight);
   _tree->SetBranchAddress("mPFIsoVeryLoose", &mPFIsoVeryLoose, &b_mPFIsoVeryLoose);
   _tree->SetBranchAddress("mPFIsoVeryTight", &mPFIsoVeryTight, &b_mPFIsoVeryTight);
   _tree->SetBranchAddress("mPFNeutralHadronIsoR04", &mPFNeutralHadronIsoR04, &b_mPFNeutralHadronIsoR04);
   _tree->SetBranchAddress("mPFNeutralIso", &mPFNeutralIso, &b_mPFNeutralIso);
   _tree->SetBranchAddress("mPFPUChargedIso", &mPFPUChargedIso, &b_mPFPUChargedIso);
   _tree->SetBranchAddress("mPFPhotonIso", &mPFPhotonIso, &b_mPFPhotonIso);
   _tree->SetBranchAddress("mPFPhotonIsoR04", &mPFPhotonIsoR04, &b_mPFPhotonIsoR04);
   _tree->SetBranchAddress("mPFPileupIsoR04", &mPFPileupIsoR04, &b_mPFPileupIsoR04);
   _tree->SetBranchAddress("mPVDXY", &mPVDXY, &b_mPVDXY);
   _tree->SetBranchAddress("mPVDZ", &mPVDZ, &b_mPVDZ);
   _tree->SetBranchAddress("mPhi", &mPhi, &b_mPhi);
   _tree->SetBranchAddress("mPhi_MuonEnDown", &mPhi_MuonEnDown, &b_mPhi_MuonEnDown);
   _tree->SetBranchAddress("mPhi_MuonEnUp", &mPhi_MuonEnUp, &b_mPhi_MuonEnUp);
   _tree->SetBranchAddress("mPixHits", &mPixHits, &b_mPixHits);
   _tree->SetBranchAddress("mPt", &mPt, &b_mPt);
   _tree->SetBranchAddress("mPt_MuonEnDown", &mPt_MuonEnDown, &b_mPt_MuonEnDown);
   _tree->SetBranchAddress("mPt_MuonEnUp", &mPt_MuonEnUp, &b_mPt_MuonEnUp);
   _tree->SetBranchAddress("mRelPFIsoDBDefault", &mRelPFIsoDBDefault, &b_mRelPFIsoDBDefault);
   _tree->SetBranchAddress("mRelPFIsoDBDefaultR04", &mRelPFIsoDBDefaultR04, &b_mRelPFIsoDBDefaultR04);
   _tree->SetBranchAddress("mRelPFIsoRho", &mRelPFIsoRho, &b_mRelPFIsoRho);
   _tree->SetBranchAddress("mRho", &mRho, &b_mRho);
   _tree->SetBranchAddress("mSIP2D", &mSIP2D, &b_mSIP2D);
   _tree->SetBranchAddress("mSIP3D", &mSIP3D, &b_mSIP3D);
   _tree->SetBranchAddress("mSegmentCompatibility", &mSegmentCompatibility, &b_mSegmentCompatibility);
   _tree->SetBranchAddress("mSoftCutBasedId", &mSoftCutBasedId, &b_mSoftCutBasedId);
   _tree->SetBranchAddress("mTkIsoLoose", &mTkIsoLoose, &b_mTkIsoLoose);
   _tree->SetBranchAddress("mTkIsoTight", &mTkIsoTight, &b_mTkIsoTight);
   _tree->SetBranchAddress("mTkLayersWithMeasurement", &mTkLayersWithMeasurement, &b_mTkLayersWithMeasurement);
   _tree->SetBranchAddress("mTrkIsoDR03", &mTrkIsoDR03, &b_mTrkIsoDR03);
   _tree->SetBranchAddress("mTrkKink", &mTrkKink, &b_mTrkKink);
   _tree->SetBranchAddress("mTypeCode", &mTypeCode, &b_mTypeCode);
   _tree->SetBranchAddress("mVZ", &mVZ, &b_mVZ);
   _tree->SetBranchAddress("mValidFraction", &mValidFraction, &b_mValidFraction);
   _tree->SetBranchAddress("mZTTGenMatching", &mZTTGenMatching, &b_mZTTGenMatching);
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

Int_t HTauTauTree_eeem::GetEntry(int entry)
{
    return _tree->GetEntry(entry);
}

Long64_t HTauTauTree_eeem::GetEntries()
{
    return _tree->GetEntries();
}

TTree* HTauTauTree_eeem::GetTree()
{
    return _tree;
}

#endif

