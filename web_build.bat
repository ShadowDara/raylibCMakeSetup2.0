@echo off
setlocal

REM Pfad zu deinem Projekt
cd /d "%~dp0"

echo ======================================
echo Loesche alten Build...
echo ======================================

if exist build (
    rmdir /s /q build
)

REM Falls raylib einen eigenen Buildordner hat
if exist thirdparty\raylib-5.0\build (
    rmdir /s /q thirdparty\raylib-5.0\build
)

REM Alte Bibliotheken entfernen
for /r %%f in (libraylib.a) do (
    echo Loesche %%f
    del /f /q "%%f"
)

echo.
echo ======================================
echo Konfiguriere mit Emscripten...
echo ======================================

call emcmake cmake -B build

if errorlevel 1 (
    echo.
    echo CMake-Konfiguration fehlgeschlagen.
    pause
    exit /b 1
)

echo.
echo ======================================
echo Baue Projekt...
echo ======================================

call emmake cmake --build build -j

if errorlevel 1 (
    echo.
    echo Build fehlgeschlagen.
    pause
    exit /b 1
)

echo.
echo ======================================
echo Fertig!
echo ======================================

pause
