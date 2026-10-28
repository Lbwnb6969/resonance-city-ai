@echo off
setlocal
cd /d "%~dp0"
set "PYTHONUTF8=1"
if not exist ".venv\Scripts\python.exe" (
  echo Python environment missing. Run setup.ps1 first.
  pause
  exit /b 1
)
if "%~1"=="" (
  ".venv\Scripts\python.exe" analyze.py --open
) else (
  ".venv\Scripts\python.exe" analyze.py %* --open
)
set "RESULT=%ERRORLEVEL%"
echo.
pause
exit /b %RESULT%
