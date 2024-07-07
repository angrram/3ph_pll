: :xcopy "*.h" /E "C:\Users\ASUSTUF\Desktop\sim\pll\3ph\smt32\Core\Inc"
: :xcopy "*.c" /E "C:\Users\ASUSTUF\Desktop\sim\pll\3ph\smt32\Core\Src"


FOR /R ".\code_gen" %%i IN (*.h) DO MOVE "%%i" "C:\Users\ASUSTUF\Desktop\sim\pll\3ph\smt32\Core\Inc"

FOR /R ".\code_gen" %%i IN (*.c) DO MOVE "%%i" "C:\Users\ASUSTUF\Desktop\sim\pll\3ph\smt32\Core\Src"
pause