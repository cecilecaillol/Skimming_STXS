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
#include "HTauTauTree_emm.h"
#include "RecoilCorrector.h"
//#include "myHelper.h"

using namespace std;

unsigned int run, lumi, evt, NUP = -10;
int gen_match_1, gen_match_2, gen_match_3, gen_match_4=0;
float met_norecoil;
float npu, rho, npv=-1, puweight, weight;
float e_1, px_1, py_1, pz_1, pt_1, phi_1, eta_1, m_1, q_1, d0_1, dZ_1, mt_1, iso_1;
float eid90iso_1, eid80iso_1, eid90noiso_1, eid80noiso_1;
float e_2, px_2, py_2, pz_2, pt_2, phi_2, eta_2, m_2, q_2, d0_2, dZ_2, mt_2, iso_2;
float e_3, px_3, py_3, pz_3, pt_3, phi_3, eta_3, m_3, q_3, d0_3, dZ_3, mt_3, iso_3;
float id_m_loose_2, id_m_medium_2, id_m_tight_2;
float id_m_loose_3, id_m_medium_3, id_m_tight_3;
float mjj, jdeta, jdphi, dijetpt, dijetphi, hdijetphi, visjeteta, ptvis;
float mjj_JESDown, jdeta_JESDown,mjj_JESUp,jdeta_JESUp;
int njetingap, njetingap20, nbtag, njets, njetspt20;
int njetingap_JESDown, njetingap20_JESDown, njets_JESDown, njetspt20_JESDown;
int njetingap_JESUp, njetingap20_JESUp, njets_JESUp, njetspt20_JESUp;
float je_1, jmass_1, jpt_1, jpx_1, jpy_1, jpz_1, jeta_1, jphi_1, jrawf_1, jmva_1, jpfid_1, jpuid_1, jcsv_1;
float je_2, jmass_2, jpx_2, jpy_2, jpz_2, jpt_2, jeta_2, jphi_2, jrawf_2, jmva_2, jpfid_2, jpuid_2, jcsv_2;
float bpt_1, beta_1, bphi_1, brawf_1, bmva_1, bpfid_1, bpuid_1, bcsv_1, bflavor_1;
float bpt_2, beta_2, bphi_2, brawf_2, bmva_2, bpfid_2, bpuid_2, bcsv_2, bflavor_2;
float met, metphi, mvaMet, mvaMetphi, pzetavis, pzetamiss, mvacov00, mvacov01, mvacov11, mvacov10;
float top_reweighting, gen_Higgs_pt, gen_Higgs_mass=1.0;
float extraelec_veto, extramuon_veto, dilepton_veto=false;
float extratau_veto, pt_top1, pt_top2, genweight, dphi_12, dphi_mumet, dphi_taumet;
float aMCatNLO_weight, numGenJets,jetPt_2;
float met_px, met_py;
float metSig, metcov00, metcov01, metcov10,metcov11, mvaMetcov00, mvaMetcov01,mvaMetcov10,mvaMetcov11, metcov00_v2, metcov01_v2, metcov10_v2,metcov11_v2;
float genM,genpT,genpX,genpY,vispX,vispY;
float genDR_2;
float flag_BadChargedCandidate, flag_BadPFMuon, flag_EcalDeadCellTriggerPrimitive, flag_HBHENoise, flag_HBHENoiseIso, flag_badCloneMuon, flag_badGlobalMuon, flag_eeBadSc, flag_globalTightHalo2016, flag_goodVertices;
float passMu27, filterMu27_2, matchMu27_2, filterMu27_3, matchMu27_3;
float passMu24, filterMu24_2, matchMu24_2, filterMu24_3, matchMu24_3;
float matchTkMu22eta2p1_2, matchTkMu22eta2p1_3, passMu22eta2p1, passTkMu22eta2p1, matchMu22eta2p1_2, matchMu22eta2p1_3, filterMu22eta2p1_2, filterMu22eta2p1_3,filterTkMu22eta2p1_2, filterTkMu22eta2p1_3;

//RecoilCorrector recoilPFMetCorrector("WH_llt/RecoilCorrections/data/TypeI-PFMet_Run2016BtoH.root");
RecoilCorrector recoilPFMetCorrector("SMH_et_2016/HTT-utilities/RecoilCorrections/data/Type1_PFMET_2017.root");

void fillTree(TTree *Run_Tree, HTauTauTree_emm *tree, int entry_tree, int recoil, bool ismc, int year){
    tree->GetEntry(entry_tree);
    run = tree->run;
    lumi = tree->lumi;
    evt =tree->evt;
    aMCatNLO_weight = tree->GenWeight;

    passMu24=tree->IsoMu24Pass;
    matchMu24_2=tree->m1MatchesIsoMu24Path;
    filterMu24_2=tree->m1MatchesIsoMu24Filter;
    matchMu24_3=tree->m2MatchesIsoMu24Path;
    filterMu24_3=tree->m2MatchesIsoMu24Filter;
    passMu27=tree->IsoMu27Pass;
    matchMu27_2=tree->m1MatchesIsoMu27Path;
    filterMu27_2=tree->m1MatchesIsoMu27Filter;
    matchMu27_3=tree->m2MatchesIsoMu27Path;
    filterMu27_3=tree->m2MatchesIsoMu27Filter;
    passMu22eta2p1=tree->singleIsoMu22eta2p1Pass;
    passTkMu22eta2p1=tree->singleIsoTkMu22eta2p1Pass;
    matchMu22eta2p1_3=tree->m2MatchesIsoMu22eta2p1Path;
    matchTkMu22eta2p1_3=tree->m2MatchesIsoTkMu22eta2p1Path;
    matchMu22eta2p1_2=tree->m1MatchesIsoMu22eta2p1Path;
    matchTkMu22eta2p1_2=tree->m1MatchesIsoTkMu22eta2p1Path;
    filterMu22eta2p1_3=tree->m2MatchesIsoMu22eta2p1Filter;
    filterTkMu22eta2p1_3=tree->m2MatchesIsoTkMu22eta2p1Filter;
    filterMu22eta2p1_2=tree->m1MatchesIsoMu22eta2p1Filter;
    filterTkMu22eta2p1_2=tree->m1MatchesIsoTkMu22eta2p1Filter;

    genpX=tree->genpX;
    genpY=tree->genpY;
    genpT=tree->genpT;
    genM=tree->genM;
    vispX=tree->vispX;
    vispY=tree->vispY;

    pt_top1=tree->topQuarkPt1;
    pt_top2=tree->topQuarkPt2;

    TLorentzVector tau1;
    TLorentzVector tau2;
    TLorentzVector tau3;
    tau1.SetPtEtaPhiM(tree->ePt,tree->eEta,tree->ePhi,tree->eMass);
    tau2.SetPtEtaPhiM(tree->m1Pt,tree->m1Eta,tree->m1Phi,tree->m1Mass);
    tau3.SetPtEtaPhiM(tree->m2Pt,tree->m2Eta,tree->m2Phi,tree->m2Mass);

    TLorentzVector mymet;
    mymet.SetPtEtaPhiM(tree->type1_pfMetEt,0,tree->type1_pfMetPhi,0);
    met_norecoil=tree->type1_pfMetEt;
    float pfmetcorr_ex=mymet.Px();
    float pfmetcorr_ey=mymet.Py();

    if (recoil==1){
         recoilPFMetCorrector.CorrectByMeanResolution(
         mymet.Px(), // uncorrected type I pf met px (float)
         mymet.Py(), // uncorrected type I pf met py (float)
         tree->genpX, // generator Z/W/Higgs px (float)
         tree->genpY, // generator Z/W/Higgs py (float)
         tree->vispX, // generator visible Z/W/Higgs px (float)
         tree->vispY, // generator visible Z/W/Higgs py (float)
         tree->jetVeto30+1,  // number of jets (hadronic jet multiplicity) (int)
         pfmetcorr_ex, // corrected type I pf met px (float)
         pfmetcorr_ey  // corrected type I pf met py (float)
        );
    }
    if (recoil==2){
        recoilPFMetCorrector.CorrectByMeanResolution(
        mymet.Px(), // uncorrected type I pf met px (float)
        mymet.Py(), // uncorrected type I pf met py (float)
        tree->genpX, // generator Z/W/Higgs px (float)
        tree->genpY, // generator Z/W/Higgs py (float)
        tree->vispX, // generator visible Z/W/Higgs px (float)
        tree->vispY, // generator visible Z/W/Higgs py (float)
        tree->jetVeto30,  // number of jets (hadronic jet multiplicity) (int)
        pfmetcorr_ex, // corrected type I pf met px (float)
        pfmetcorr_ey  // corrected type I pf met py (float)
        );
    }
    mymet.SetPxPyPzE(pfmetcorr_ex,pfmetcorr_ey,0,sqrt(pfmetcorr_ex*pfmetcorr_ex+pfmetcorr_ey*pfmetcorr_ey));

    met=mymet.Pt();
    metphi=mymet.Phi();
    met_px=mymet.Px();
    met_py=mymet.Py();

    metSig=tree->metSig;

    njets = tree->jetVeto30;
    nbtag = tree->bjetDeepCSVVeto20Medium_2017_DR0p5;
    njetspt20=tree->jetVeto20;

    njets_JESDown = tree->jetVeto30_JetEnDown;
    njetspt20_JESDown=tree->jetVeto20_JetEnDown;
    njets_JESUp = tree->jetVeto30_JetEnUp;
    njetspt20_JESUp=tree->jetVeto20_JetEnUp;

    gen_match_1=tree->eZTTGenMatching;
    gen_match_2=tree->m1ZTTGenMatching;
    gen_match_3=tree->m2ZTTGenMatching;

    extraelec_veto=(tree->eVetoZTTp001dxyzR0>1);
    extramuon_veto=(tree->muVetoZTTp001dxyzR0>3);
 
    m_1 = tau1.M();
    px_1 = tau1.Px();
    py_1 = tau1.Py();
    pz_1 = tau1.Pz();
    e_1 = tau1.E();
    pt_1 = tau1.Pt();
    phi_1 = tau1.Phi();
    eta_1 = tau1.Eta();
    d0_1 = tree->ePVDXY;
    dZ_1 = tree->ePVDZ;
    q_1 = tree->eCharge;
    eid80iso_1=tree->eMVAIsoWP80;
    eid90iso_1=tree->eMVAIsoWP90;
    eid80noiso_1=tree->eMVANoisoWP80;
    eid90noiso_1=tree->eMVANoisoWP90;
    iso_1 = tree->eIsoDB03;

    m_2 = tau2.M();
    px_2 = tau2.Px();
    py_2 = tau2.Py();
    pz_2 = tau2.Pz();
    e_2 = tau2.E();
    pt_2 = tau2.Pt();
    phi_2 = tau2.Phi();
    eta_2 = tau2.Eta();
    d0_2 = tree->m1PVDXY;
    dZ_2 = tree->m1PVDZ;
    q_2 = tree->m1Charge;
    id_m_medium_2 = tree->m1PFIDMedium;
    id_m_tight_2 = tree->m1PFIDTight;
    iso_2 = tree->m1RelPFIsoDBDefault;

    m_3 = tau3.M();
    px_3 = tau3.Px();
    py_3 = tau3.Py();
    pz_3 = tau3.Pz();
    e_3 = tau3.E();
    pt_3 = tau3.Pt();
    phi_3 = tau3.Phi();
    eta_3 = tau3.Eta();
    d0_3 = tree->m2PVDXY;
    dZ_3 = tree->m2PVDZ;
    q_3 = tree->m2Charge;
    id_m_medium_3 = tree->m2PFIDMedium;
    id_m_tight_3 = tree->m2PFIDTight;
    iso_3 = tree->m2RelPFIsoDBDefault;

    numGenJets=tree->numGenJets;

    jpt_1=tree->j1pt;
    jpt_2=tree->j2pt;
    jeta_1=tree->j1eta;
    jeta_2=tree->j2eta;
    jphi_1=tree->j1phi;
    jphi_2=tree->j2phi;
    jcsv_1=tree->j1csv;
    jcsv_2=tree->j2csv;

    bpt_1=tree->jb1pt_2017;
    bpt_2=tree->jb2pt_2017;
    beta_1=tree->jb1eta_2017;
    beta_2=tree->jb2eta_2017;
    bphi_1=tree->jb1phi_2017;
    bphi_2=tree->jb2phi_2017;
    //bcsv_1=tree->jb1csv;
    //bcsv_2=tree->jb2csv;
    bflavor_1=tree->jb1hadronflavor_2017;
    bflavor_2=tree->jb2hadronflavor_2017;
   
  NUP=tree->NUP;
  npu=tree->nTruePU;
  npv=tree->nvtx;
  rho=tree->rho;

  extratau_veto=tree->tauVetoPt20Loose3HitsVtx;
  Run_Tree->Fill();
}

#endif


