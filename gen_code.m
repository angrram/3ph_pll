
clear cfg
model='dsogi_pll_3ph_top';
cfg = Simulink.fileGenControl('getConfig');
mkdir('code_gen');
cfg.CodeGenFolder = fullfile('C:\Users\ASUSTUF\Desktop\sim\pll\3ph\sim\code_gen');
cfg.CodeGenFolderStructure = 'TargetEnvironmentSubfolder';

Simulink.fileGenControl('setConfig', 'config', cfg);
slbuild(model)
system('xcopy.bat')
