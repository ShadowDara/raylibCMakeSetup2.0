@echo off

echo Starting Dev Server via NPM
echo the web build can now be played in the browser
echo 
echo INFO The webbuild has to be build before via web_build.bat

start "" "http://localhost:8080/mygame.html"
echo

npm i
npx http-server build

pause
