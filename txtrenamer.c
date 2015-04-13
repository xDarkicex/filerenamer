@Echo Off
set "desPath=c:\TEST\"
set "extension=.txt"
Set /P FName= File name:
set "target=%desPath%%FName%%extension%"
Echo Target = %target%
pause
copy  "c:\TMP\eps.log" %target%
pause