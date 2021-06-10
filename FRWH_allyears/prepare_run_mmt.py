import os
if __name__ == "__main__":

#    place="/hdfs/store/user/caillol/WHTT_2016_17dec_mc/"
#    datatype="mc"
#    name=[
#"WZTo3LNu_TuneCUETP8M1_13TeV-amcatnloFXFX-pythia8_v3-PUMoriond17_94X_mcRun2_asymptotic_v3-v2","WZ3LNu","0","2016",
#"ZZTo4L_13TeV-amcatnloFXFX-pythia8_v3-PUMoriond17_94X_mcRun2_asymptotic_v3_ext1-v2","ZZ4L","0","2016"
#]
#
#   place="/hdfs/store/user/caillol/WHTT_2017_17dec_mc/"
#    datatype="mc"
#    name=[
#"WZTo3LNu_TuneCP5_13TeV-amcatnloFXFX-pythia8_v2-PU2017_12Apr2018_new_pmx_94X_mc2017_realistic_v14-v1","WZ3LNu","0","2017",
#"ZZTo4L_TuneCP5_13TeV-amcatnloFXFX-pythia8_v2-PU2017_12Apr2018_94X_mc2017_realistic_v14-v1","ZZ4L","0","2017"
#]
#
#    place="/hdfs/store/user/caillol/WHTT_2018_17dec_mc/"
#    datatype="mc"
#    name=[
#"WZTo3LNu_TuneCP5_13TeV-amcatnloFXFX-pythia8_-102X_upgrade2018_realistic_v15_ext1-v2","WZ3LNu_v1","0","2018",
#"WZTo3LNu_TuneCP5_13TeV-amcatnloFXFX-pythia8_-102X_upgrade2018_realistic_v15-v1","WZ3LNu_v2","0","2018",
#"ZZTo4L_TuneCP5_13TeV-amcatnloFXFX-pythia8_-102X_upgrade2018_realistic_v15-v1","ZZ4L","0","2018"
#]
#
    place="/hdfs/store/user/caillol/WHTT_2016_17dec_data/"
    datatype="singlemu"
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
#    place="/hdfs/store/user/caillol/WHTT_2018_17dec_data/"
#    datatype="singlemu"
#    name=[
#"data_SingleMuon_Run2018A-17Sep2018","SingleMuonA","0","2018",
#"data_SingleMuon_Run2018B-17Sep2018","SingleMuonB","0","2018",
#"data_SingleMuon_Run2018C-17Sep2018","SingleMuonC","0","2018",
#"data_SingleMuon_Run2018D-PromptReco","SingleMuonD","0","2018"
#]

 
    datadir="/nfs_scratch/caillol/frwhmmt2016_4feb/"
    all_File = open("do_submit_"+datatype+"_mmt2016.sh" , 'w')
    line=""
    for j in range(0,len(name)/4):
       print name[4*j],name[4*j+1],name[4*j+2]
       submit_File = open("Submit_"+name[4*j+1]+"_"+datatype+"_mmt2016.sh" , 'w')
       line+="mkdir -p "+datadir+"Out_"+name[4*j+1]+"\n"
       line+="sh Submit_"+name[4*j+1]+"_"+datatype+"_mmt2016.sh" +"\n"
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

