
set skipSetupArg=%2
if "%skipSetupArg%" NEQ "skip_setup_msvc" (
call "setup_msvc.bat"
)

cd .

if "%1"=="" (nmake  -f dsogi_pll_3ph_ca.mk all) else (nmake  -f dsogi_pll_3ph_ca.mk %1)
@if errorlevel 1 goto error_exit

exit /B 0

:error_exit
echo The make command returned an error of %errorlevel%
exit /B 1