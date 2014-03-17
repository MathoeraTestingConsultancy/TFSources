set inifile="%TARGETDIR%\engine5.ini"
set clusterfile="%TARGETDIR%\Cluster\Example.txt"
set reportfile="%TARGETDIR%\Report\ExampleReport.rtf"

call java TestFrame %inifile% %clusterfile% %reportfile%
