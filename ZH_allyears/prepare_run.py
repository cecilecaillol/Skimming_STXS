import os
import argparse

parser = argparse.ArgumentParser()
parser.add_argument('--sample', '-s', default=None, help='Output name')
parser.add_argument('--channel', '-c', default=None, help='Output name')
parser.add_argument('--year', '-y', default=None, help='Output name')

args = parser.parse_args()

if __name__ == "__main__":

    place=""
    datatype=""
    name=[]

    if args.year=="2016" and args.sample=="data" and (args.channel=="eeem" or args.channel=="eeet" or args.channel=="eemt" or args.channel=="eett"):
       place="/hdfs/store/user/caillol/ZHTT_2016_15may_data/"
       datatype="data"
       name=[
"data_SingleElectron_Run2016B_v1","SingleEleBv1","0","2016",
"data_SingleElectron_Run2016B_v2","SingleEleBv2","0","2016",
"data_SingleElectron_Run2016C","SingleEleC","0","2016",
"data_SingleElectron_Run2016D","SingleEleD","0","2016",
"data_SingleElectron_Run2016E","SingleEleE","0","2016",
"data_SingleElectron_Run2016F","SingleEleF","0","2016",
"data_SingleElectron_Run2016G","SingleEleG","0","2016",
"data_SingleElectron_Run2016H","SingleEleH","0","2016"
]

    if args.year=="2016" and args.sample=="data" and (args.channel=="mmem" or args.channel=="mmet" or args.channel=="mmmt" or args.channel=="mmtt"):
       place="/hdfs/store/user/caillol/ZHTT_2016_15may_data/"
       datatype="data"
       name=[
"data_SingleMuon_Run2016B_v1","SingleMuonBv1","0","2016",
"data_SingleMuon_Run2016B_v2","SingleMuonBv2","0","2016",
"data_SingleMuon_Run2016C","SingleMuonC","0","2016",
"data_SingleMuon_Run2016D","SingleMuonD","0","2016",
"data_SingleMuon_Run2016E","SingleMuonE","0","2016",
"data_SingleMuon_Run2016F","SingleMuonF","0","2016",
"data_SingleMuon_Run2016G","SingleMuonG","0","2016",
"data_SingleMuon_Run2016H","SingleMuonH","0","2016"
]

    if args.year=="2017" and args.sample=="data" and (args.channel=="eeem" or args.channel=="eeet" or args.channel=="eemt" or args.channel=="eett"):
       place="/hdfs/store/user/caillol/ZHTT_2017_15may_data/"
       datatype="data"
       name=[
"data_SingleElectron_Run2017B-31Mar2018","SingleEleB","0","2017",
"data_SingleElectron_Run2017C-31Mar2018","SingleEleC","0","2017",
"data_SingleElectron_Run2017D-31Mar2018","SingleEleD","0","2017",
"data_SingleElectron_Run2017E-31Mar2018","SingleEleE","0","2017",
"data_SingleElectron_Run2017F-31Mar2018","SingleEleF","0","2017"
]

    if args.year=="2017" and args.sample=="data" and (args.channel=="mmem" or args.channel=="mmet" or args.channel=="mmmt" or args.channel=="mmtt"):
       place="/hdfs/store/user/caillol/ZHTT_2017_15may_data/"
       datatype="data"
       name=[
"data_SingleMuon_Run2017B-31Mar2018","SingleMuonB","0","2017",
"data_SingleMuon_Run2017C-31Mar2018","SingleMuonC","0","2017",
"data_SingleMuon_Run2017D-31Mar2018","SingleMuonD","0","2017",
"data_SingleMuon_Run2017E-31Mar2018","SingleMuonE","0","2017",
"data_SingleMuon_Run2017F-31Mar2018","SingleMuonF","0","2017"
]

    if args.year=="2018" and args.sample=="data" and (args.channel=="eeem" or args.channel=="eeet" or args.channel=="eemt" or args.channel=="eett"):
       place="/hdfs/store/user/caillol/ZHTT_2018_15may_data/"
       datatype="data"
       name=[
"data_EGamma_Run2018A-17Sep2018","SingleEleA","0","2018",
"data_EGamma_Run2018B-17Sep2018","SingleEleB","0","2018",
"data_EGamma_Run2018C-17Sep2018","SingleEleC","0","2018",
"data_EGamma_Run2018D-PromptReco","SingleEleD","0","2018"
]

    if args.year=="2018" and args.sample=="data" and (args.channel=="mmem" or args.channel=="mmet" or args.channel=="mmmt" or args.channel=="mmtt"):
       place="/hdfs/store/user/caillol/ZHTT_2018_15may_data/"
       datatype="data"
       name=[
#"data_DoubleMuon_Run2018A-17Sep2018","DoubleMuonA","0","2018",
#"data_DoubleMuon_Run2018B-17Sep2018","DoubleMuonB","0","2018",
#"data_DoubleMuon_Run2018C-17Sep2018","DoubleMuonC","0","2018",
#"data_DoubleMuon_Run2018D-PromptReco","DoubleMuonD","0","2018"
"data_SingleMuon_Run2018A-17Sep2018","SingleMuonA","0","2018",
"data_SingleMuon_Run2018B-17Sep2018","SingleMuonB","0","2018",
"data_SingleMuon_Run2018C-17Sep2018","SingleMuonC","0","2018",
"data_SingleMuon_Run2018D-PromptReco","SingleMuonD","0","2018"
]

    if args.year=="2018" and args.sample=="mc":
       place="/hdfs/store/user/caillol/ZHTT_2018_15may_mc/"
       datatype="mc"
       name=[
"GluGluToContinToZZTo2e2mu_13TeV_MCFM701_pythia8_-102X_upgrade2018_realistic_v15-v3","GGZZ2e2mu","0","2018",
"GluGluToContinToZZTo2e2tau_13TeV_MCFM701_pythia8_-102X_upgrade2018_realistic_v15-v3","GGZZ2e2tau","0","2018",
"GluGluToContinToZZTo2mu2tau_13TeV_MCFM701_pythia8_-102X_upgrade2018_realistic_v15-v4","GGZZ2mu2tau","0","2018",
"GluGluToContinToZZTo4e_13TeV_MCFM701_pythia8_-102X_upgrade2018_realistic_v15-v1","GGZZ4e_v1","0","2018",
"GluGluToContinToZZTo4e_13TeV_MCFM701_pythia8_-102X_upgrade2018_realistic_v15-v2","GGZZ4e_v2","0","2018",
"GluGluToContinToZZTo4e_13TeV_MCFM701_pythia8_-102X_upgrade2018_realistic_v15_ext1-v1","GGZZ4e_v3","0","2018",
"GluGluToContinToZZTo4mu_13TeV_MCFM701_pythia8_-102X_upgrade2018_realistic_v15-v1","GGZZ4mu_v1","0","2018",
"GluGluToContinToZZTo4mu_13TeV_MCFM701_pythia8_-102X_upgrade2018_realistic_v15-v2","GGZZ4mu_v2","0","2018",
"GluGluToContinToZZTo4mu_13TeV_MCFM701_pythia8_-102X_upgrade2018_realistic_v15_ext1-v1","GGZZ4mu_v3","0","2018",
"GluGluToContinToZZTo4tau_13TeV_MCFM701_pythia8_-102X_upgrade2018_realistic_v15-v1","GGZZ4tau_v1","0","2018",
"GluGluToContinToZZTo4tau_13TeV_MCFM701_pythia8_-102X_upgrade2018_realistic_v15-v2","GGZZ4tau_v2","0","2018",
"GluGluZH_HToWW_M125_13TeV_powheg_pythia8_TuneCP5_PSweights_-102X_upgrade2018_realistic_v15-v1","GGZHWW","0","2018",
"HWminusJ_HToWW_M125_13TeV_powheg_jhugen724_pythia8_TuneCP5_-102X_upgrade2018_realistic_v15-v1","WminusHWW","0","2018",
"HWplusJ_HToWW_M125_13TeV_powheg_jhugen724_pythia8_TuneCP5_-102X_upgrade2018_realistic_v15-v1","WplusHWW","0","2018",
"HZJ_HToWW_M125_13TeV_powheg_jhugen714_pythia8_TuneCP5_-102X_upgrade2018_realistic_v15-v1","ZHWW","0","2018",
"WWW_4F_TuneCP5_13TeV-amcatnlo-pythia8_-102X_upgrade2018_realistic_v15_ext1-v2","WWW","0","2018",
"WWZ_TuneCP5_13TeV-amcatnlo-pythia8_-102X_upgrade2018_realistic_v15_ext1-v2","WWZ","0","2018",
"WZZ_TuneCP5_13TeV-amcatnlo-pythia8_-102X_upgrade2018_realistic_v15_ext1-v2","WZZ","0","2018",
"WminusHToTauTau_M125_13TeV_powheg_pythia8_-102X_upgrade2018_realistic_v15-v2","WminusHTT","0","2018",
"WplusHToTauTau_M125_13TeV_powheg_pythia8_-102X_upgrade2018_realistic_v15-v2","WplusHTT","0","2018",
"ZHToTauTau_M125_13TeV_powheg_pythia8_-102X_upgrade2018_realistic_v15-v2","ZHTT","0","2018",
"ZZTo4L_TuneCP5_13TeV_powheg_pythia8_-102X_upgrade2018_realistic_v15_ext1-v2","ZZ4L_v1","0","2018",
"ZZTo4L_TuneCP5_13TeV_powheg_pythia8_-102X_upgrade2018_realistic_v15_ext2-v2","ZZ4L_v2","0","2018",
"ZZZ_TuneCP5_13TeV-amcatnlo-pythia8_-102X_upgrade2018_realistic_v15_ext1-v2","ZZZ","0","2018",
"ggZH_HToTauTau_ZToLL_M125_13TeV_powheg_pythia8_-102X_upgrade2018_realistic_v15-v1","GGZHLLTT","0","2018",
"ggZH_HToTauTau_ZToNuNu_M125_13TeV_powheg_pythia8_-102X_upgrade2018_realistic_v15-v1","GGZHNNTT","0","2018",
"ggZH_HToTauTau_ZToQQ_M125_13TeV_powheg_pythia8_-102X_upgrade2018_realistic_v15-v1","GGZHQQTT","0","2018",
"ttZJets_TuneCP5_13TeV_madgraphMLM_pythia8_-102X_upgrade2018_realistic_v15_ext1-v2","TTZ","0","2018",
"ZZTo4L_TuneCP5_13TeV-amcatnloFXFX-pythia8_-102X_upgrade2018_realistic_v15-v1","ZZ4LAMCATNLO","0","2018"
]

    if args.year=="2017" and args.sample=="mc":
       place="/hdfs/store/user/caillol/ZHTT_2017_15may_mc/"
       datatype="mc"
       name=[
"GluGluToContinToZZTo2e2mu_13TeV_MCFM701_pythia8_v2-PU2017_12Apr2018_94X_mc2017_realistic_v14-v1","GGZZ2e2mu_v1","0","2017",
"GluGluToContinToZZTo2e2mu_13TeV_MCFM701_pythia8_v2-PU2017_12Apr2018_94X_mc2017_realistic_v14-v2","GGZZ2e2mu_v2","0","2017",
"GluGluToContinToZZTo2e2mu_13TeV_MCFM701_pythia8_v2-PU2017_12Apr2018_94X_mc2017_realistic_v14-v3","GGZZ2e2mu_v3","0","2017",
"GluGluToContinToZZTo2e2mu_13TeV_MCFM701_pythia8_v2-PU2017_12Apr2018_94X_mc2017_realistic_v14_ext1-v2","GGZZ2e2mu_v4","0","2017",
"GluGluToContinToZZTo2e2tau_13TeV_MCFM701_pythia8_v2-PU2017_12Apr2018_94X_mc2017_realistic_v14-v1","GGZZ2e2tau_v1","0","2017",
"GluGluToContinToZZTo2e2tau_13TeV_MCFM701_pythia8_v2-PU2017_12Apr2018_94X_mc2017_realistic_v14-v2","GGZZ2e2tau_v2","0","2017",
"GluGluToContinToZZTo2e2tau_13TeV_MCFM701_pythia8_v2-PU2017_12Apr2018_94X_mc2017_realistic_v14-v3","GGZZ2e2tau_v3","0","2017",
"GluGluToContinToZZTo2e2tau_13TeV_MCFM701_pythia8_v2-PU2017_12Apr2018_94X_mc2017_realistic_v14_ext1-v2","GGZZ2e2tau_v4","0","2017",
"GluGluToContinToZZTo2mu2tau_13TeV_MCFM701_pythia8_v2-PU2017_12Apr2018_94X_mc2017_realistic_v14-v1","GGZZ2mu2tau_v1","0","2017",
"GluGluToContinToZZTo2mu2tau_13TeV_MCFM701_pythia8_v2-PU2017_12Apr2018_94X_mc2017_realistic_v14-v2","GGZZ2mu2tau_v2","0","2017",
"GluGluToContinToZZTo2mu2tau_13TeV_MCFM701_pythia8_v2-PU2017_12Apr2018_94X_mc2017_realistic_v14-v3","GGZZ2mu2tau_v3","0","2017",
"GluGluToContinToZZTo2mu2tau_13TeV_MCFM701_pythia8_v2-PU2017_12Apr2018_94X_mc2017_realistic_v14_ext1-v2","GGZZ2mu2tau_v4","0","2017",
"GluGluToContinToZZTo4e_13TeV_MCFM701_pythia8_v2-PU2017_12Apr2018_94X_mc2017_realistic_v14-v1","GGZZ4e_v1","0","2017",
"GluGluToContinToZZTo4e_13TeV_MCFM701_pythia8_v2-PU2017_12Apr2018_94X_mc2017_realistic_v14-v2","GGZZ4e_v2","0","2017",
"GluGluToContinToZZTo4e_13TeV_MCFM701_pythia8_v2-PU2017_12Apr2018_94X_mc2017_realistic_v14_ext1-v2","GGZZ4e_v3","0","2017",
"GluGluToContinToZZTo4e_13TeV_MCFM701_pythia8_v2-PU2017_12Apr2018_94X_mc2017_realistic_v14_ext2-v1","GGZZ4e_v4","0","2017",
"GluGluToContinToZZTo4mu_13TeV_MCFM701_pythia8_v2-PU2017_12Apr2018_94X_mc2017_realistic_v14-v1","GGZZ4mu_v1","0","2017",
"GluGluToContinToZZTo4mu_13TeV_MCFM701_pythia8_v2-PU2017_12Apr2018_94X_mc2017_realistic_v14-v2","GGZZ4mu_v2","0","2017",
"GluGluToContinToZZTo4mu_13TeV_MCFM701_pythia8_v2-PU2017_12Apr2018_94X_mc2017_realistic_v14_ext1-v2","GGZZ4mu_v3","0","2017",
"GluGluToContinToZZTo4mu_13TeV_MCFM701_pythia8_v2-PU2017_12Apr2018_94X_mc2017_realistic_v14_ext2-v1","GGZZ4mu_v4","0","2017",
"GluGluToContinToZZTo4tau_13TeV_MCFM701_pythia8_v2-PU2017_12Apr2018_94X_mc2017_realistic_v14-v1","GGZZ4tau_v1","0","2017",
"GluGluToContinToZZTo4tau_13TeV_MCFM701_pythia8_v2-PU2017_12Apr2018_94X_mc2017_realistic_v14_ext1-v2","GGZZ4tau_v2","0","2017",
"HWminusJ_HToWW_M125_13TeV_powheg_pythia8_TuneCP5_v2-PU2017_12Apr2018_94X_mc2017_realistic_v14-v1","WminusHWW","0","2017",
"HWplusJ_HToWW_M125_13TeV_powheg_pythia8_TuneCP5_v2-PU2017_12Apr2018_94X_mc2017_realistic_v14-v1","WplusHWW","0","2017",
"HZJ_HToWW_M125_13TeV_powheg_jhugen714_pythia8_TuneCP5_v2-PU2017_12Apr2018_94X_mc2017_realistic_v14-v4","ZHHWW","0","2017",
"WWW_4F_TuneCP5_13TeV-amcatnlo-pythia8_v2-PU2017_12Apr2018_94X_mc2017_realistic_v14-v1","WWW_v1","0","2017",
"WWW_4F_TuneCP5_13TeV-amcatnlo-pythia8_v2-PU2017_12Apr2018_94X_mc2017_realistic_v14-v2","WWW_v2","0","2017",
"WWZ_4F_TuneCP5_13TeV-amcatnlo-pythia8_v2-PU2017_12Apr2018_94X_mc2017_realistic_v14-v1","WWZ_v1","0","2017",
"WWZ_4F_TuneCP5_13TeV-amcatnlo-pythia8_v2-PU2017_12Apr2018_94X_mc2017_realistic_v14-v2","WWZ_v2","0","2017",
"WZZ_TuneCP5_13TeV-amcatnlo-pythia8_v2-PU2017_12Apr2018_94X_mc2017_realistic_v14-v1","WZZ","0","2017",
"WminusHToTauTau_M125_13TeV_powheg_pythia8_v2-PU2017_12Apr2018_94X_mc2017_realistic_v14-v1","WminusHTT","0","2017",
"WplusHToTauTau_M125_13TeV_powheg_pythia8_v2-PU2017_12Apr2018_94X_mc2017_realistic_v14-v1","WplusHTT","0","2017",
"ZHToTauTau_M125_13TeV_powheg_pythia8_v2-PU2017_12Apr2018_94X_mc2017_realistic_v14-v1","ZHTT","0","2017",
"ZZTo4L_13TeV_powheg_pythia8_v2-PU2017_12Apr2018_new_pmx_94X_mc2017_realistic_v14-v1","ZZ4L","0","2017",
"ZZZ_TuneCP5_13TeV-amcatnlo-pythia8_v2-PU2017_12Apr2018_94X_mc2017_realistic_v14-v1","ZZZ_v1","0","2017",
"ZZZ_TuneCP5_13TeV-amcatnlo-pythia8_v2-PU2017_12Apr2018_94X_mc2017_realistic_v14-v2","ZZZ_v2","0","2017",
"ggZH_HToTauTau_ZToNuNu_M125_13TeV_powheg_pythia8_v2-PU2017_12Apr2018_94X_mc2017_realistic_v14-v1","GGZHNNTT","0","2017",
"ggZH_HToTauTau_ZToQQ_M125_13TeV_powheg_pythia8_v2-PU2017_12Apr2018_94X_mc2017_realistic_v14-v2","GGZHQQTT","0","2017",
"ggZH_HToTauTau_ZToLL_M125_13TeV_powheg_pythia8_v2-PU2017_12Apr2018_94X_mc2017_realistic_v14-v1","GGZHLLTT","0","2017",
"ttZJets_TuneCP5_13TeV_madgraphMLM_pythia8_v2-PU2017_12Apr2018_94X_mc2017_realistic_v14-v1","TTZ_v1","0","2017",
"ttZJets_TuneCP5_13TeV_madgraphMLM_pythia8_v2-PU2017_12Apr2018_94X_mc2017_realistic_v14_ext1-v3","TTZ_v2","0","2017",
"GluGluZH_HToWW_M125_13TeV_powheg_pythia8_TuneCP5_v2-PU2017_12Apr2018_94X_mc2017_realistic_v14-v1","GGZHWW","0","2017"
]

    if args.year=="2016" and args.sample=="mc":
       place="/hdfs/store/user/caillol/ZHTT_2016_15may_mc/"
       datatype="mc"
       name=[
"GluGluToContinToZZTo2e2mu_13TeV_MCFM701_pythia8_v3-PUMoriond17_94X_mcRun2_asymptotic_v3-v2","GGZZ2e2mu","0","2016",
"GluGluToContinToZZTo2e2tau_13TeV_MCFM701_pythia8_v3-PUMoriond17_94X_mcRun2_asymptotic_v3-v2","GGZZ2e2tau","0","2016",
"GluGluToContinToZZTo2mu2tau_13TeV_MCFM701_pythia8_v3-PUMoriond17_94X_mcRun2_asymptotic_v3-v2","GGZZ2mu2tau","0","2016",
"GluGluToContinToZZTo4e_13TeV_MCFM701_pythia8_v3-PUMoriond17_94X_mcRun2_asymptotic_v3-v2","GGZZ4e","0","2016",
"GluGluToContinToZZTo4mu_13TeV_MCFM701_pythia8_v3-PUMoriond17_94X_mcRun2_asymptotic_v3-v2","GGZZ4mu","0","2016",
"GluGluToContinToZZTo4tau_13TeV_MCFM701_pythia8_v3-PUMoriond17_94X_mcRun2_asymptotic_v3-v2","GGZZ4tau","0","2016",
"GluGluZH_HToWW_M125_13TeV_powheg_pythia8_v3-PUMoriond17_94X_mcRun2_asymptotic_v3-v2","GGZHWW","0","2016",
"HWminusJ_HToWW_M125_13TeV_powheg_pythia8_v3-PUMoriond17_94X_mcRun2_asymptotic_v3-v2","WminusHWW","0","2016",
"HWplusJ_HToWW_M125_13TeV_powheg_pythia8_v3-PUMoriond17_94X_mcRun2_asymptotic_v3-v2","WplusHWW","0","2016",
"HZJ_HToWW_M125_13TeV_powheg_pythia8_v3-PUMoriond17_94X_mcRun2_asymptotic_v3-v2","ZHWW","0","2016",
"WWW_4F_TuneCUETP8M1_13TeV-amcatnlo-pythia8_v3-PUMoriond17_94X_mcRun2_asymptotic_v3-v2","WWW","0","2016",
"WWZ_TuneCUETP8M1_13TeV-amcatnlo-pythia8_v3-PUMoriond17_94X_mcRun2_asymptotic_v3-v2","WWZ","0","2016",
"WZZ_TuneCUETP8M1_13TeV-amcatnlo-pythia8_v3-PUMoriond17_94X_mcRun2_asymptotic_v3-v2","WZZ","0","2016",
"WminusHToTauTau_M125_13TeV_powheg_pythia8_v3-PUMoriond17_94X_mcRun2_asymptotic_v3-v2","WminusHTT","0","2016",
"WplusHToTauTau_M125_13TeV_powheg_pythia8_v3-PUMoriond17_94X_mcRun2_asymptotic_v3-v2","WplusHTT","0","2016",
"ZHToTauTau_M125_13TeV_powheg_pythia8_v3-PUMoriond17_94X_mcRun2_asymptotic_v3-v2","ZHTT","0","2016",
"ZZTo4L_13TeV_powheg_pythia8_ext1_v3-PUMoriond17_94X_mcRun2_asymptotic_v3-v2","ZZ4L_v1","0","2016",
"ZZTo4L_13TeV_powheg_pythia8_v3-PUMoriond17_94X_mcRun2_asymptotic_v3-v1","ZZ4L_v2","0","2016",
"ZZZ_TuneCUETP8M1_13TeV-amcatnlo-pythia8_v3-PUMoriond17_94X_mcRun2_asymptotic_v3-v2","ZZZ","0","2016",
"ggZH_HToTauTau_ZToLL_M125_13TeV_powheg_pythia8_v3-PUMoriond17_94X_mcRun2_asymptotic_v3-v1","GGZHLLTT","0","2016",
"ggZH_HToTauTau_ZToNuNu_M125_13TeV_powheg_pythia8_v3-PUMoriond17_94X_mcRun2_asymptotic_v3-v1","GGZHNNTT","0","2016",
"ggZH_HToTauTau_ZToQQ_M125_13TeV_powheg_pythia8_v3-PUMoriond17_94X_mcRun2_asymptotic_v3-v1","GGZHQQTT","0","2016",
"ttZJets_13TeV_madgraphMLM-pythia8_v3-PUMoriond17_94X_mcRun2_asymptotic_v3-v1","TTZ","0","2016",
]
 
    datadir="/nfs_scratch/caillol/zh_"+args.channel+args.year+"_29jul/"
    all_File = open("do_submit_"+datatype+"_"+args.channel+args.year+".sh" , 'w')
    line=""
    line+="mkdir -p "+datadir+ "\n"
    for j in range(0,len(name)/4):
       print name[4*j],name[4*j+1],name[4*j+2]
       submit_File = open("Submit_"+name[4*j+1]+"_"+datatype+"_"+args.channel+args.year+".sh" , 'w')
       line+="mkdir -p "+datadir+"Out_"+name[4*j+1]+"\n"
       line+="sh Submit_"+name[4*j+1]+"_"+datatype+"_"+args.channel+args.year+".sh" +"\n"
       f=os.popen("ls -t " + place+name[4*j] + "/make* | sort")
       command1=""
       ligne=0
       for i in f.readlines():
	   command1=command1+"./skim_"+args.channel+".exe "+datatype+" "+datadir+"Out_"+name[4*j+1]+"/"+name[4*j+1]+str(ligne)+".root " + i[0:-1] + " " + name[4*j+2] + " " + name[4*j+3] + "\n"
           ligne=ligne+1
       submit_File.write(command1)
       submit_File.close()
    all_File.write(line)
    all_File.close()

