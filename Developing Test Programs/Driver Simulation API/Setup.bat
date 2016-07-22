:: **************************************************************
:: * TestStand 2: Framework Development course			*
:: * Version 2012						*
:: *								*
:: * Execute this batch file to install the solution for the 	*
:: * respective exercise.					*
:: *								*
:: * Note the installer will replace existing exercises 	*
:: **************************************************************

@ECHO off
:MENU
CLS

::**************************
:: Begin installation
::**************************
set lvinstall=false
set lvinstall6432=false

set CVIinstall=false
set CVIinstall6432=false

:: Check if LabVIEW is installed. If LabVIEW is not installed, stop the installation.
REG QUERY "HKEY_LOCAL_MACHINE\SOFTWARE\National Instruments\LabVIEW\CurrentVersion" > NUL
IF %ERRORLEVEL% == 0 set lvinstall=true
REG QUERY "HKEY_LOCAL_MACHINE\SOFTWARE\WOW6432Node\National Instruments\LabVIEW\CurrentVersion" > NUL
IF %ERRORLEVEL% == 0 set lvinstall6432=true

CLS

IF %lvinstall%==false IF %lvinstall6432%==false ECHO LabVIEW Not Found! 
IF %lvinstall%==false IF %lvinstall6432%==false GOTO ERROR

:: Set batch file's location as working directory
CD /D %~dp0

::**************************
:: Begin file transfers 
::**************************
ECHO Installing . . .
ECHO.

ECHO.
:: Install files to instr.lib directory of the latest LabVIEW version installed if applicable.
set lvinstallSuccess=FAILURE
IF %lvinstall%==true FOR /F "tokens=2*" %%A IN ('REG QUERY "HKEY_LOCAL_MACHINE\SOFTWARE\National Instruments\LabVIEW\CurrentVersion" /v Path') DO SET LVInstrLib=%%Binstr.lib
IF %lvinstall%==true XCOPY "LabVIEW\Driver Simulation" "%LVInstrLib%\Driver Simulation\" /r /s /y
IF %ERRORLEVEL% == 0 set lvinstallSuccess=Success

:: Install files to instr.lib directory of the latest 32-bit LabVIEW version installed on 64-bit OS if applicable.
set lvinstall6432Success=FAILURE
IF %lvinstall6432%==true FOR /F "tokens=2*" %%A IN ('REG QUERY "HKEY_LOCAL_MACHINE\SOFTWARE\WOW6432NODE\National Instruments\LabVIEW\CurrentVersion" /v Path') DO SET LV3264InstrLib=%%Binstr.lib
IF %lvinstall6432%==true XCOPY "LabVIEW\Driver Simulation" "%LV3264InstrLib%\Driver Simulation\" /r /s /y
IF %ERRORLEVEL% == 0 set lvinstall6432Success=Success

:: Install driver files to 32-bit CVI shared location on 64-bit system
set CVIInstrLibSuccess=FAILURE
REG QUERY "HKEY_LOCAL_MACHINE\SOFTWARE\Wow6432Node\National Instruments\Common\Installer" /v NISHAREDDIR > NUL
IF NOT %ERRORLEVEL% == 0 GOTO CVI32
FOR /F "tokens=2*" %%A IN ('REG QUERY "HKEY_LOCAL_MACHINE\SOFTWARE\Wow6432Node\National Instruments\Common\Installer" /v NISHAREDDIR') DO SET CVIInstrLib=%%BCVI\instr
echo "%CVIInstrLib%\Driver Simulation\"
XCOPY "CVI\Driver Simulation" "%CVIInstrLib%\Driver Simulation\" /r /s /y
XCOPY "LabVIEW\Driver Simulation\UUTs" "%CVIInstrLib%\Driver Simulation\UUTs\" /r /s /y
XCOPY "LabVIEW\Driver Simulation\TestStand Instrument Simulation.dll" "%CVIInstrLib%\Driver Simulation\*" /r /s /y
IF %ERRORLEVEL% == 0 set CVIInstrLibSuccess=Success
goto :END

:CVI32
:: Install driver files to 32-bit CVI shared location on 32-bit system.  should be skipped if the previous keys are present
REG QUERY "HKEY_LOCAL_MACHINE\SOFTWARE\National Instruments\Common\Installer" /v NISHAREDDIR > NUL
IF NOT %ERRORLEVEL% == 0 GOTO END
FOR /F "tokens=2*" %%A IN ('REG QUERY "HKEY_LOCAL_MACHINE\SOFTWARE\Wow6432Node\National Instruments\Common\Installer" /v NISHAREDDIR') DO SET CVIInstrLib=%%BCVI\instr
echo "%CVIInstrLib%\Driver Simulation\"
XCOPY "CVI\Driver Simulation" "%CVIInstrLib%\Driver Simulation\" /r /s /y
XCOPY "LabVIEW\Driver Simulation\UUTs" "%CVIInstrLib%\Driver Simulation\UUTs\" /r /s /y
XCOPY "LabVIEW\Driver Simulation\TestStand Instrument Simulation.dll" "%CVIInstrLib%\Driver Simulation\* /r /s /y
IF %ERRORLEVEL% == 0 set CVIInstrLibSuccess=Success

GOTO END

::**************************
::End of installation
::**************************

:ERROR
ECHO.
ECHO * Installation FAILED.
PAUSE
GOTO NO

:END
ECHO.
ECHO ___________________________________________________________________
ECHO * Instrument Simulation Driver installation completed to the following directories:
ECHO(
IF %lvinstall%==true ECHO %lvinstallSuccess% - %LVInstrLib%
IF %lvinstall6432%==true ECHO %lvinstall6432Success% - %LV3264InstrLib%
ECHO(%CVIInstrLibSuccess% - %CVIInstrLib%
ECHO ___________________________________________________________________
ECHO.
PAUSE

:NO
EXIT