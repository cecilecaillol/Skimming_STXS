import os
if __name__ == "__main__":

    place="/hdfs/store/user/caillol/DiffentialSignal_2018_17dec/"
    datatype="mc"
    name=[
"GluGluHToWWTo2L2Nu_M125_13TeV_powheg2_JHUGenV714_pythia8_-102X_upgrade2018_realistic_v15-v1","GGHWW","Z",
"GluGluZH_HToWW_M125_13TeV_powheg_pythia8_TuneCP5_PSweights_-102X_upgrade2018_realistic_v15-v1","GGZHWW","Z",
"GluGluHToTauTau_M125_13TeV_powheg_pythia8_-102X_upgrade2018_realistic_v15-v2","GGHTT","Z",
"VBFHToTauTau_M125_13TeV_powheg_pythia8_-102X_upgrade2018_realistic_v15_ext1-v1","VBFHTT","Z",
"WminusHToTauTau_M125_13TeV_powheg_pythia8_-102X_upgrade2018_realistic_v15-v2","WminusHTT","0",
"WplusHToTauTau_M125_13TeV_powheg_pythia8_-102X_upgrade2018_realistic_v15-v2","WplusHTT","0",
"ZHToTauTau_M125_13TeV_powheg_pythia8_-102X_upgrade2018_realistic_v15-v2","ZHTT","0",
"HZJ_HToWW_M125_13TeV_powheg_jhugen714_pythia8_TuneCP5_-102X_upgrade2018_realistic_v15-v1","ZHWW","0",
"ggZH_HToTauTau_ZToQQ_M125_13TeV_powheg_pythia8_-102X_upgrade2018_realistic_v15-v1","GGZHQQTT","0",
"HWminusJ_HToWW_M125_13TeV_powheg_jhugen724_pythia8_TuneCP5_-102X_upgrade2018_realistic_v15-v1","WminusHWW","0",
"HWplusJ_HToWW_M125_13TeV_powheg_jhugen724_pythia8_TuneCP5_-102X_upgrade2018_realistic_v15-v1","WplusHWW","0",
"VBFHToWWTo2L2Nu_M125_13TeV_powheg2_JHUGenV714_pythia8_-102X_upgrade2018_realistic_v15-v1","VBFHWW","0",
"ggZH_HToTauTau_ZToNuNu_M125_13TeV_powheg_pythia8_-102X_upgrade2018_realistic_v15-v1","GGZHNNTT","0",
"ggZH_HToTauTau_ZToLL_M125_13TeV_powheg_pythia8_-102X_upgrade2018_realistic_v15-v1","GGZHLLTT","0",
"ttHToTauTau_M125_TuneCP5_13TeV-powheg-pythia8_-102X_upgrade2018_realistic_v15-v1","ttHTT","0"
]

    
    datadir="/nfs_scratch/caillol/differential_em2018/"
    all_File = open("do_submit_em.sh" , 'w')
    line=""
    for j in range(0,len(name)/3):
       print name[3*j],name[3*j+1],name[3*j+2]
       submit_File = open("Submit_"+name[3*j+1]+"_em.sh" , 'w')
       line+="mkdir -p "+datadir+"Out_"+name[3*j+1]+"\n"
       line+="sh Submit_"+name[3*j+1]+"_em.sh" +"\n"
       f=os.popen("ls -t " + place+name[3*j] + "/make* | sort")
       command1=""
       ligne=0
       for i in f.readlines():
	   command1=command1+"./skim_em.exe "+datatype+" "+datadir+"Out_"+name[3*j+1]+"/"+name[3*j+1]+str(ligne)+".root " + i[0:-1] + " " + name[3*j+2] +"\n"
           ligne=ligne+1
       submit_File.write(command1)
       submit_File.close()
    all_File.write(line)
    all_File.close()

