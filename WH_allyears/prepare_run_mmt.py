import os
if __name__ == "__main__":

#    place="/hdfs/store/user/caillol/WHTT_2016_17dec_mc/"
#    datatype="mc"
#    name=[
#"ggZH_HToTauTau_ZToLL_M125_13TeV_powheg_pythia8_v3-PUMoriond17_94X_mcRun2_asymptotic_v3-v1","GGZHLLTT","0","2016",
#"GluGluToContinToZZTo2e2mu_13TeV_MCFM701_pythia8_v3-PUMoriond17_94X_mcRun2_asymptotic_v3-v2","GGZZ2e2mu","0","2016",
#"GluGluToContinToZZTo2e2tau_13TeV_MCFM701_pythia8_v3-PUMoriond17_94X_mcRun2_asymptotic_v3-v2","GGZZ2e2tau","0","2016",
#"GluGluToContinToZZTo2mu2tau_13TeV_MCFM701_pythia8_v3-PUMoriond17_94X_mcRun2_asymptotic_v3-v2","GGZZ2mu2tau","0","2016",
#"GluGluToContinToZZTo4e_13TeV_MCFM701_pythia8_v3-PUMoriond17_94X_mcRun2_asymptotic_v3-v2","GGZZ4e","0","2016",
#"GluGluToContinToZZTo4mu_13TeV_MCFM701_pythia8_v3-PUMoriond17_94X_mcRun2_asymptotic_v3-v2","GGZZ4mu","0","2016",
#"GluGluToContinToZZTo4tau_13TeV_MCFM701_pythia8_v3-PUMoriond17_94X_mcRun2_asymptotic_v3-v2","GGZZ4tau","0","2016",
#"GluGluZH_HToWW_M125_13TeV_powheg_pythia8_v3-PUMoriond17_94X_mcRun2_asymptotic_v3-v2","GGZHWW","0","2016",
#"HWminusJ_HToWW_M125_13TeV_powheg_pythia8_v3-PUMoriond17_94X_mcRun2_asymptotic_v3-v2","WminusHWW","0","2016",
#"HWplusJ_HToWW_M125_13TeV_powheg_pythia8_v3-PUMoriond17_94X_mcRun2_asymptotic_v3-v2","WplusHWW","0","2016",
#"HZJ_HToWW_M125_13TeV_powheg_pythia8_v3-PUMoriond17_94X_mcRun2_asymptotic_v3-v2","ZHWW","0","2016",
#"WminusHToTauTau_M125_13TeV_powheg_pythia8_v3-PUMoriond17_94X_mcRun2_asymptotic_v3-v2","WminusHTT","0","2016",
#"WplusHToTauTau_M125_13TeV_powheg_pythia8_v3-PUMoriond17_94X_mcRun2_asymptotic_v3-v2","WplusHTT","0","2016",
#"WWW_4F_TuneCUETP8M1_13TeV-amcatnlo-pythia8_v3-PUMoriond17_94X_mcRun2_asymptotic_v3-v2","WWW","0","2016",
#"WZTo3LNu_TuneCUETP8M1_13TeV-amcatnloFXFX-pythia8_v3-PUMoriond17_94X_mcRun2_asymptotic_v3-v2","WZ3LNu","0","2016",
#"WZZ_TuneCUETP8M1_13TeV-amcatnlo-pythia8_v3-PUMoriond17_94X_mcRun2_asymptotic_v3-v2","WZZ","0","2016",
#"ZHToTauTau_M125_13TeV_powheg_pythia8_v3-PUMoriond17_94X_mcRun2_asymptotic_v3-v2","ZHTT","0","2016",
#"ZZTo4L_13TeV-amcatnloFXFX-pythia8_v3-PUMoriond17_94X_mcRun2_asymptotic_v3_ext1-v2","ZZ4L","0","2016",
#"ZZZ_TuneCUETP8M1_13TeV-amcatnlo-pythia8_v3-PUMoriond17_94X_mcRun2_asymptotic_v3-v2","ZZZ","0","2016",
#"DY1JetsToLL_M-50_TuneCUETP8M1_13TeV-madgraphMLM-pythia8_v3-PUMoriond17_94X_mcRun2_asymptotic_v3-v1","DY1","Z","2016",
#"DYJetsToLL_M-50_TuneCUETP8M1_13TeV-madgraphMLM-pythia8_v3-PUMoriond17_94X_mcRun2_asymptotic_v3_ext1-v2","DY_v1","Z","2016",
#"DYJetsToLL_M-50_TuneCUETP8M1_13TeV-madgraphMLM-pythia8_v3-PUMoriond17_94X_mcRun2_asymptotic_v3_ext2-v2","DY_v2","Z","2016",
#"DY2JetsToLL_M-50_TuneCUETP8M1_13TeV-madgraphMLM-pythia8_v3-PUMoriond17_94X_mcRun2_asymptotic_v3-v2","DY2","Z","2016",
#"DY3JetsToLL_M-50_TuneCUETP8M1_13TeV-madgraphMLM-pythia8_v3-PUMoriond17_94X_mcRun2_asymptotic_v3-v2","DY3","Z","2016",
#"TTTo2L2Nu_TuneCP5_PSweights_13TeV-powheg-pythia8_v3-PUMoriond17_94X_mcRun2_asymptotic_v3-v1","TTTo2L2Nu","0","2016",
#"TTToSemiLeptonic_TuneCP5_PSweights_13TeV-powheg-pythia8_v3-PUMoriond17_94X_mcRun2_asymptotic_v3-v1","TTToSemiLeptonic","0","2016",
#"ttWJets_13TeV_madgraphMLM_v3-94X_mcRun2_asymptotic_v3-v1","TTW","0","2016",
#"ttZJets_13TeV_madgraphMLM-pythia8_v3-PUMoriond17_94X_mcRun2_asymptotic_v3-v1","TTZ","0","2016",
#"HeavyNeutrino_trilepton_M-100_V-0p01_tau_NLO_amcatnlo_pythia8_TuneCUETP8M1_v3-PUMoriond17_94X_mcRun2_asymptotic_v3-v1","HNL100","0","2016",
#"HeavyNeutrino_trilepton_M-150_V-0p01_tau_NLO_amcatnlo_pythia8_TuneCUETP8M1_v3-PUMoriond17_94X_mcRun2_asymptotic_v3-v1","HNL150","0","2016",
#"HeavyNeutrino_trilepton_M-200_V-0p01_tau_NLO_amcatnlo_pythia8_TuneCUETP8M1_v3-PUMoriond17_94X_mcRun2_asymptotic_v3-v1","HNL200","0","2016",
#"HeavyNeutrino_trilepton_M-400_V-0p01_tau_NLO_amcatnlo_pythia8_TuneCUETP8M1_v3-PUMoriond17_94X_mcRun2_asymptotic_v3-v1","HNL400","0","2016",
#"HeavyNeutrino_trilepton_M-600_V-0p01_tau_NLO_amcatnlo_pythia8_TuneCUETP8M1_v3-PUMoriond17_94X_mcRun2_asymptotic_v3-v1","HNL600","0","2016",
#"HeavyNeutrino_trilepton_M-800_V-0p01_tau_NLO_amcatnlo_pythia8_TuneCUETP8M1_v3-PUMoriond17_94X_mcRun2_asymptotic_v3-v1","HNL800","0","2016"
#]

#    place="/hdfs/store/user/caillol/WHTT_2017_17dec_mc/"
#    datatype="mc"
#    name=[
#"ggZH_HToTauTau_ZToLL_M125_13TeV_powheg_pythia8_v2-PU2017_12Apr2018_94X_mc2017_realistic_v14-v1","GGZHLLTT","0","2017",
#"GluGluToContinToZZTo2e2mu_13TeV_MCFM701_pythia8_v2-PU2017_12Apr2018_94X_mc2017_realistic_v14_ext1-v2","GGZZ2e2mu_v1","0","2017",
#"GluGluToContinToZZTo2e2mu_13TeV_MCFM701_pythia8_v2-PU2017_12Apr2018_94X_mc2017_realistic_v14-v1","GGZZ2e2mu_v2","0","2017",
#"GluGluToContinToZZTo2e2mu_13TeV_MCFM701_pythia8_v2-PU2017_12Apr2018_94X_mc2017_realistic_v14-v2","GGZZ2e2mu_v3","0","2017",
#"GluGluToContinToZZTo2e2mu_13TeV_MCFM701_pythia8_v2-PU2017_12Apr2018_94X_mc2017_realistic_v14-v3","GGZZ2e2mu_v4","0","2017",
#"GluGluToContinToZZTo2e2tau_13TeV_MCFM701_pythia8_v2-PU2017_12Apr2018_94X_mc2017_realistic_v14_ext1-v2","GGZZ2e2tau_v1","0","2017",
#"GluGluToContinToZZTo2e2tau_13TeV_MCFM701_pythia8_v2-PU2017_12Apr2018_94X_mc2017_realistic_v14-v1","GGZZ2e2tau_v2","0","2017",
#"GluGluToContinToZZTo2e2tau_13TeV_MCFM701_pythia8_v2-PU2017_12Apr2018_94X_mc2017_realistic_v14-v2","GGZZ2e2tau_v3","0","2017",
#"GluGluToContinToZZTo2e2tau_13TeV_MCFM701_pythia8_v2-PU2017_12Apr2018_94X_mc2017_realistic_v14-v3","GGZZ2e2tau_v4","0","2017",
#"GluGluToContinToZZTo2mu2tau_13TeV_MCFM701_pythia8_v2-PU2017_12Apr2018_94X_mc2017_realistic_v14_ext1-v2","GGZZ2mu2tau_v1","0","2017",
#"GluGluToContinToZZTo2mu2tau_13TeV_MCFM701_pythia8_v2-PU2017_12Apr2018_94X_mc2017_realistic_v14-v1","GGZZ2mu2tau_v2","0","2017",
#"GluGluToContinToZZTo2mu2tau_13TeV_MCFM701_pythia8_v2-PU2017_12Apr2018_94X_mc2017_realistic_v14-v2","GGZZ2mu2tau_v3","0","2017",
#"GluGluToContinToZZTo2mu2tau_13TeV_MCFM701_pythia8_v2-PU2017_12Apr2018_94X_mc2017_realistic_v14-v3","GGZZ2mu2tau_v4","0","2017",
#"GluGluToContinToZZTo4e_13TeV_MCFM701_pythia8_v2-PU2017_12Apr2018_94X_mc2017_realistic_v14_ext1-v2","GGZZ4e_v1","0","2017",
#"GluGluToContinToZZTo4e_13TeV_MCFM701_pythia8_v2-PU2017_12Apr2018_94X_mc2017_realistic_v14_ext2-v1","GGZZ4e_v2","0","2017",
#"GluGluToContinToZZTo4e_13TeV_MCFM701_pythia8_v2-PU2017_12Apr2018_94X_mc2017_realistic_v14-v1","GGZZ4e_v3","0","2017",
#"GluGluToContinToZZTo4e_13TeV_MCFM701_pythia8_v2-PU2017_12Apr2018_94X_mc2017_realistic_v14-v2","GGZZ4e_v4","0","2017",
#"GluGluToContinToZZTo4mu_13TeV_MCFM701_pythia8_v2-PU2017_12Apr2018_94X_mc2017_realistic_v14_ext1-v2","GGZZ4mu_v1","0","2017",
#"GluGluToContinToZZTo4mu_13TeV_MCFM701_pythia8_v2-PU2017_12Apr2018_94X_mc2017_realistic_v14_ext2-v1","GGZZ4mu_v2","0","2017",
#"GluGluToContinToZZTo4mu_13TeV_MCFM701_pythia8_v2-PU2017_12Apr2018_94X_mc2017_realistic_v14-v1","GGZZ4mu_v3","0","2017",
#"GluGluToContinToZZTo4mu_13TeV_MCFM701_pythia8_v2-PU2017_12Apr2018_94X_mc2017_realistic_v14-v2","GGZZ4mu_v4","0","2017",
#"GluGluToContinToZZTo4tau_13TeV_MCFM701_pythia8_v2-PU2017_12Apr2018_94X_mc2017_realistic_v14_ext1-v2","GGZZ4tau_v1","0","2017",
#"GluGluToContinToZZTo4tau_13TeV_MCFM701_pythia8_v2-PU2017_12Apr2018_94X_mc2017_realistic_v14-v1","GGZZ4tau_v2","0","2017",
#"GluGluZH_HToWW_M125_13TeV_powheg_pythia8_TuneCP5_v2-PU2017_12Apr2018_94X_mc2017_realistic_v14-v1","GGZHWW","0","2017",
#"HWminusJ_HToWW_M125_13TeV_powheg_pythia8_TuneCP5_v2-PU2017_12Apr2018_94X_mc2017_realistic_v14-v1","WminusHWW","0","2017",
#"HWplusJ_HToWW_M125_13TeV_powheg_pythia8_TuneCP5_v2-PU2017_12Apr2018_94X_mc2017_realistic_v14-v1","WplusHWW","0","2017",
#"HZJ_HToWW_M125_13TeV_powheg_jhugen714_pythia8_TuneCP5_v2-PU2017_12Apr2018_94X_mc2017_realistic_v14-v4","ZHWW","0","2017",
#"ttWJets_TuneCP5_13TeV_madgraphMLM_pythia8_v2-PU2017_12Apr2018_94X_mc2017_realistic_v14_ext1-v2","TTW_v1","0","2017",
#"ttWJets_TuneCP5_13TeV_madgraphMLM_pythia8_v2-PU2017_12Apr2018_94X_mc2017_realistic_v14-v1","TTW_v2","0","2017",
#"ttZJets_TuneCP5_13TeV_madgraphMLM_pythia8_v2-PU2017_12Apr2018_94X_mc2017_realistic_v14_ext1-v3","TTZ_v1","0","2017",
#"ttZJets_TuneCP5_13TeV_madgraphMLM_pythia8_v2-PU2017_12Apr2018_94X_mc2017_realistic_v14-v1","TTZ_v2","0","2017",
#"WminusHToTauTau_M125_13TeV_powheg_pythia8_v2-PU2017_12Apr2018_94X_mc2017_realistic_v14-v1","WminusHTT","0","2017",
#"WplusHToTauTau_M125_13TeV_powheg_pythia8_v2-PU2017_12Apr2018_94X_mc2017_realistic_v14-v1","WplusHTT","0","2017",
#"WWW_4F_TuneCP5_13TeV-amcatnlo-pythia8_v2-PU2017_12Apr2018_94X_mc2017_realistic_v14-v1","WWW_v1","0","2017",
#"WWW_4F_TuneCP5_13TeV-amcatnlo-pythia8_v2-PU2017_12Apr2018_94X_mc2017_realistic_v14-v2","WWW_v2","0","2017",
#"WWZ_4F_TuneCP5_13TeV-amcatnlo-pythia8_v2-PU2017_12Apr2018_94X_mc2017_realistic_v14-v1","WWZ_v1","0","2017",
#"WWZ_4F_TuneCP5_13TeV-amcatnlo-pythia8_v2-PU2017_12Apr2018_94X_mc2017_realistic_v14-v2","WWZ_v2","0","2017",
#"WZTo3LNu_TuneCP5_13TeV-amcatnloFXFX-pythia8_v2-PU2017_12Apr2018_new_pmx_94X_mc2017_realistic_v14-v1","WZ3LNu","0","2017",
#"WZZ_TuneCP5_13TeV-amcatnlo-pythia8_v2-PU2017_12Apr2018_94X_mc2017_realistic_v14-v1","WZZ","0","2017",
#"ZHToTauTau_M125_13TeV_powheg_pythia8_v2-PU2017_12Apr2018_94X_mc2017_realistic_v14-v1","ZHTT","0","2017",
#"ZZTo4L_TuneCP5_13TeV-amcatnloFXFX-pythia8_v2-PU2017_12Apr2018_94X_mc2017_realistic_v14-v1","ZZ4L","0","2017",
#"ZZZ_TuneCP5_13TeV-amcatnlo-pythia8_v2-PU2017_12Apr2018_94X_mc2017_realistic_v14-v1","ZZZ_v1","0","2017",
#"ZZZ_TuneCP5_13TeV-amcatnlo-pythia8_v2-PU2017_12Apr2018_94X_mc2017_realistic_v14-v2","ZZZ_v2","0","2017",
#"DY2JetsToLL_M-50_TuneCP5_13TeV-madgraphMLM-pythia8_v2-PU2017_12Apr2018_new_pmx_94X_mc2017_realistic_v14_ext1-v2","DY2","Z","2017",
#"DY1JetsToLL_M-50_TuneCP5_13TeV-madgraphMLM-pythia8_v2-PU2017_12Apr2018_new_pmx_94X_mc2017_realistic_v14-v1","DY1","Z","2017",
#"DYJetsToLL_M-50_TuneCP5_13TeV-madgraphMLM-pythia8_v2-PU2017RECOSIMstep_12Apr2018_94X_mc2017_realistic_v14-v1","DY_v2","Z","2017",
#"TTTo2L2Nu_TuneCP5_13TeV-powheg-pythia8_v2-PU2017_12Apr2018_new_pmx_94X_mc2017_realistic_v14-v1","TTTo2L2Nu","0","2017",
#"DY3JetsToLL_M-50_TuneCP5_13TeV-madgraphMLM-pythia8_v2-PU2017_12Apr2018_new_pmx_94X_mc2017_realistic_v14_ext1-v2","DY3","Z","2017",
#"TTToSemiLeptonic_TuneCP5_13TeV-powheg-pythia8_v2-PU2017_12Apr2018_new_pmx_94X_mc2017_realistic_v14-v1","TTToSemiLeptonic","0","2017",
#"DYJetsToLL_M-50_TuneCP5_13TeV-madgraphMLM-pythia8_v2-PU2017RECOSIMstep_12Apr2018_94X_mc2017_realistic_v14_ext1-v1","DY_v1","Z","2017",
#"DY4JetsToLL_M-50_TuneCP5_13TeV-madgraphMLM-pythia8_v2-PU2017_12Apr2018_94X_mc2017_realistic_v14-v1","DY4_v1","Z","2017",
#"DY4JetsToLL_M-50_TuneCP5_13TeV-madgraphMLM-pythia8_v2-PU2017_12Apr2018_v2_94X_mc2017_realistic_v14-v2","DY4_v2","Z","2017",
#"HeavyNeutrino_trilepton_M-100_V-0p01_tau_NLO_TuneCP5_PSweights_13TeV_amcatnlo_pythia8_v2-PU2017_12Apr2018_94X_mc2017_realistic_v14-v1","HNL100","0","2017",
#"HeavyNeutrino_trilepton_M-150_V-0p01_tau_NLO_TuneCP5_PSweights_13TeV_amcatnlo_pythia8_v2-PU2017_12Apr2018_94X_mc2017_realistic_v14-v1","HNL150","0","2017",
#"HeavyNeutrino_trilepton_M-200_V-0p01_tau_NLO_TuneCP5_PSweights_13TeV_amcatnlo_pythia8_v2-PU2017_12Apr2018_94X_mc2017_realistic_v14-v1","HNL200","0","2017",
#"HeavyNeutrino_trilepton_M-400_V-0p01_tau_NLO_TuneCP5_PSweights_13TeV_amcatnlo_pythia8_v2-PU2017_12Apr2018_94X_mc2017_realistic_v14-v1","HNL400","0","2017",
#"HeavyNeutrino_trilepton_M-600_V-0p01_tau_NLO_TuneCP5_PSweights_13TeV_amcatnlo_pythia8_v2-PU2017_12Apr2018_94X_mc2017_realistic_v14-v1","HNL600","0","2017",
#"HeavyNeutrino_trilepton_M-800_V-0p01_tau_NLO_TuneCP5_PSweights_13TeV_amcatnlo_pythia8_v2-PU2017_12Apr2018_94X_mc2017_realistic_v14-v1","HNL800","0","2017"
#]
#
#    place="/hdfs/store/user/caillol/WHTT_2018_17dec_mc/"
#    datatype="mc"
#    name=[
#"ggZH_HToTauTau_ZToLL_M125_13TeV_powheg_pythia8_-102X_upgrade2018_realistic_v15-v1","GGZHTT","0","2018",
#"GluGluToContinToZZTo2e2mu_13TeV_MCFM701_pythia8_-102X_upgrade2018_realistic_v15-v3","GGZZ2e2mu","0","2018",
#"GluGluToContinToZZTo2e2tau_13TeV_MCFM701_pythia8_-102X_upgrade2018_realistic_v15-v3","GGZZ2e2tau","0","2018",
#"GluGluToContinToZZTo2mu2tau_13TeV_MCFM701_pythia8_-102X_upgrade2018_realistic_v15-v4","GGZZ2mu2tau","0","2018",
#"GluGluToContinToZZTo4e_13TeV_MCFM701_pythia8_-102X_upgrade2018_realistic_v15_ext1-v1","GGZZ4e_v1","0","2018",
#"GluGluToContinToZZTo4e_13TeV_MCFM701_pythia8_-102X_upgrade2018_realistic_v15-v1","GGZZ4e_v2","0","2018",
#"GluGluToContinToZZTo4e_13TeV_MCFM701_pythia8_-102X_upgrade2018_realistic_v15-v2","GGZZ4e_v3","0","2018",
#"GluGluToContinToZZTo4mu_13TeV_MCFM701_pythia8_-102X_upgrade2018_realistic_v15_ext1-v1","GGZZ4mu_v1","0","2018",
#"GluGluToContinToZZTo4mu_13TeV_MCFM701_pythia8_-102X_upgrade2018_realistic_v15-v1","GGZZ4mu_v2","0","2018",
#"GluGluToContinToZZTo4mu_13TeV_MCFM701_pythia8_-102X_upgrade2018_realistic_v15-v2","GGZZ4mu_v3","0","2018",
#"GluGluToContinToZZTo4tau_13TeV_MCFM701_pythia8_-102X_upgrade2018_realistic_v15-v1","GGZZ4tau_v1","0","2018",
#"GluGluToContinToZZTo4tau_13TeV_MCFM701_pythia8_-102X_upgrade2018_realistic_v15-v2","GGZZ4tau_v2","0","2018",
#"GluGluZH_HToWW_M125_13TeV_powheg_pythia8_TuneCP5_PSweights_-102X_upgrade2018_realistic_v15-v1","GGZHWW","0","2018",
#"HWminusJ_HToWW_M125_13TeV_powheg_jhugen724_pythia8_TuneCP5_-102X_upgrade2018_realistic_v15-v1","WminusHWW","0","2018",
#"HWplusJ_HToWW_M125_13TeV_powheg_jhugen724_pythia8_TuneCP5_-102X_upgrade2018_realistic_v15-v1","WplusHWW","0","2018",
#"HZJ_HToWW_M125_13TeV_powheg_jhugen714_pythia8_TuneCP5_-102X_upgrade2018_realistic_v15-v1","ZHWW","0","2018",
#"ttHToTauTau_M125_TuneCP5_13TeV-powheg-pythia8_-102X_upgrade2018_realistic_v15-v1","TTHTT","0","2018",
#"ttWJets_TuneCP5_13TeV_madgraphMLM_pythia8_-102X_upgrade2018_realistic_v15_ext1-v2","TTW","0","2018",
#"ttZJets_TuneCP5_13TeV_madgraphMLM_pythia8_-102X_upgrade2018_realistic_v15_ext1-v2","TTZ","0","2018",
#"WminusHToTauTau_M125_13TeV_powheg_pythia8_-102X_upgrade2018_realistic_v15-v2","WminusHTT","0","2018",
#"WplusHToTauTau_M125_13TeV_powheg_pythia8_-102X_upgrade2018_realistic_v15-v2","WplusHTT","0","2018",
#"WWW_4F_TuneCP5_13TeV-amcatnlo-pythia8_-102X_upgrade2018_realistic_v15_ext1-v2","WWW","0","2018",
#"WWZ_TuneCP5_13TeV-amcatnlo-pythia8_-102X_upgrade2018_realistic_v15_ext1-v2","WWZ","0","2018",
#"WZTo3LNu_TuneCP5_13TeV-amcatnloFXFX-pythia8_-102X_upgrade2018_realistic_v15_ext1-v2","WZ3LNu_v1","0","2018",
#"WZTo3LNu_TuneCP5_13TeV-amcatnloFXFX-pythia8_-102X_upgrade2018_realistic_v15-v1","WZ3LNu_v2","0","2018",
#"WZZ_TuneCP5_13TeV-amcatnlo-pythia8_-102X_upgrade2018_realistic_v15_ext1-v2","WZZ","0","2018",
#"ZHToTauTau_M125_13TeV_powheg_pythia8_-102X_upgrade2018_realistic_v15-v2","ZHTT","0","2018",
#"ZZTo4L_TuneCP5_13TeV-amcatnloFXFX-pythia8_-102X_upgrade2018_realistic_v15-v1","ZZ4L","0","2018",
#"ZZZ_TuneCP5_13TeV-amcatnlo-pythia8_-102X_upgrade2018_realistic_v15_ext1-v2","ZZZ","0","2018",
#"DY1JetsToLL_M-50_TuneCP5_13TeV-madgraphMLM-pythia8_-102X_upgrade2018_realistic_v15-v1","DY1_v1","Z","2018",
#"DY2JetsToLL_M-50_TuneCP5_13TeV-madgraphMLM-pythia8_-102X_upgrade2018_realistic_v15-v1","DY2_v1","Z","2018",
#"DY3JetsToLL_M-50_TuneCP5_13TeV-madgraphMLM-pythia8_-102X_upgrade2018_realistic_v15-v1","DY3_v1","Z","2018",
#"DY2JetsToLL_M-50_TuneCP5_13TeV-madgraphMLM-pythia8_-102X_upgrade2018_realistic_v15-v2","DY2_v2","Z","2018",
#"DY1JetsToLL_M-50_TuneCP5_13TeV-madgraphMLM-pythia8_-102X_upgrade2018_realistic_v15-v2","DY1_v2","Z","2018",
#"DYJetsToLL_M-50_TuneCP5_13TeV-madgraphMLM-pythia8_-102X_upgrade2018_realistic_v15-v1","DY","Z","2018",
#"DY3JetsToLL_M-50_TuneCP5_13TeV-madgraphMLM-pythia8_-102X_upgrade2018_realistic_v15-v2","DY3_v2","Z","2018",
#"DY4JetsToLL_M-50_TuneCP5_13TeV-madgraphMLM-pythia8_-102X_upgrade2018_realistic_v15-v1","DY4","Z","2018",
#"TTTo2L2Nu_TuneCP5_13TeV-powheg-pythia8_-102X_upgrade2018_realistic_v15-v1","TTTo2L2Nu","0","2018",
#"TTToSemiLeptonic_TuneCP5_13TeV-powheg-pythia8_-102X_upgrade2018_realistic_v15-v1","TTToSemiLeptonic_v2","0","2018",
#"TTToSemiLeptonic_TuneCP5_13TeV-powheg-pythia8_-102X_upgrade2018_realistic_v15_ext3-v2","TTToSemileptonic_v2","0","2018",
#"HeavyNeutrino_trilepton_M-100_V-0p01_tau_NLO__TuneCP5_PSweights_13TeV_amcatnlo_pythia8_-102X_upgrade2018_realistic_v15-v1","HNL100","0","2018",
#"HeavyNeutrino_trilepton_M-150_V-0p01_tau_NLO__TuneCP5_PSweights_13TeV_amcatnlo_pythia8_-102X_upgrade2018_realistic_v15-v1","HNL150","0","2018",
#"HeavyNeutrino_trilepton_M-200_V-0p01_tau_NLO__TuneCP5_PSweights_13TeV_amcatnlo_pythia8_-102X_upgrade2018_realistic_v15-v1","HNL200","0","2018",
#"HeavyNeutrino_trilepton_M-400_V-0p01_tau_NLO__TuneCP5_PSweights_13TeV_amcatnlo_pythia8_-102X_upgrade2018_realistic_v15-v1","HNL400","0","2018",
#"HeavyNeutrino_trilepton_M-600_V-0p01_tau_NLO__TuneCP5_PSweights_13TeV_amcatnlo_pythia8_-102X_upgrade2018_realistic_v15-v1","HNL600","0","2018",
#"HeavyNeutrino_trilepton_M-800_V-0p01_tau_NLO__TuneCP5_PSweights_13TeV_amcatnlo_pythia8_-102X_upgrade2018_realistic_v15-v1","HNL800","0","2018"
#]
#
#    place="/hdfs/store/user/caillol/WHTT_2016_17dec_data/"
#    datatype="singlemu"
#    name=[
#"data_SingleMuon_Run2016B_v1","SingleMuonBv1","0","2016",
#"data_SingleMuon_Run2016B_v2","SingleMuonBv2","0","2016",
#"data_SingleMuon_Run2016C","SingleMuonC","0","2016",
#"data_SingleMuon_Run2016D","SingleMuonD","0","2016",
#"data_SingleMuon_Run2016E","SingleMuonE","0","2016",
#"data_SingleMuon_Run2016F","SingleMuonF","0","2016",
#"data_SingleMuon_Run2016G","SingleMuonG","0","2016",
#"data_SingleMuon_Run2016H","SingleMuonH","0","2016"
#]
##
#    place="/hdfs/store/user/caillol/WHTT_2017_17dec_data/"
#    datatype="singlemu"
#    name=[
#"data_SingleMuon_Run2017B-31Mar2018","SingleMuonB","0","2017",
#"data_SingleMuon_Run2017C-31Mar2018","SingleMuonC","0","2017",
#"data_SingleMuon_Run2017D-31Mar2018","SingleMuonD","0","2017",
#"data_SingleMuon_Run2017E-31Mar2018","SingleMuonE","0","2017",
#"data_SingleMuon_Run2017F-31Mar2018","SingleMuonF","0","2017"
#]
#
    place="/hdfs/store/user/caillol/WHTT_2018_17dec_data/"
    datatype="singlemu"
    name=[
"data_SingleMuon_Run2018A-17Sep2018","SingleMuonA","0","2018",
"data_SingleMuon_Run2018B-17Sep2018","SingleMuonB","0","2018",
"data_SingleMuon_Run2018C-17Sep2018","SingleMuonC","0","2018",
"data_SingleMuon_Run2018D-PromptReco","SingleMuonD","0","2018"
]

 
    datadir="/nfs_scratch/caillol/whmmt2018_20jul/"
    all_File = open("do_submit_"+datatype+"_mmt2018.sh" , 'w')
    line=""
    for j in range(0,len(name)/4):
       print name[4*j],name[4*j+1],name[4*j+2]
       submit_File = open("Submit_"+name[4*j+1]+"_"+datatype+"_mmt2018.sh" , 'w')
       line+="mkdir -p "+datadir+"Out_"+name[4*j+1]+"\n"
       line+="sh Submit_"+name[4*j+1]+"_"+datatype+"_mmt2018.sh" +"\n"
       f=os.popen("ls -t " + place+name[4*j] + "/make* | sort")
       command1=""
       ligne=0
       for i in f.readlines():
	   command1=command1+"./skim_mmt.exe "+datatype+" "+datadir+"Out_"+name[4*j+1]+"/"+name[4*j+1]+str(ligne)+".root " + i[0:-1] + " " + name[4*j+2] + " " + name[4*j+3] + "\n"
           ligne=ligne+1
       submit_File.write(command1)
       submit_File.close()
    all_File.write(line)
    all_File.close()

