@echo off
set "targetDirectory=C:\Users\aadar\Codes\dsa-course"

echo Deleting all .exe files in the directory %targetDirectory% and its subfolders...

cd /d "%targetDirectory%"
del /s /q *.exe

echo All .exe files have been deleted.
pause
