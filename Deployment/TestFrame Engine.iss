;--------------------------------------------------------------------------------------------
; Install script for the TestFrame Engine
; (c) Copyright 2008 - Logica Nederland BV
;--------------------------------------------------------------------------------------------

; Note: Make sure the Inno Setup Pre Processor is installed.


#define TF_Engine_Version "2008.06"
#define TF_Engine_Build   "61"
#define configuration "release"

[Setup]
AppName=TestFrame Engine
AppVerName=TestFrame Engine v{#TF_Engine_Version} (Build {#TF_Engine_Build})
AppPublisher=Logica, Nederland BV
AppCopyright=Copyright (C) 1997-2008 Logica, Nederland BV
AppPublisherURL=http://www.logica.com/
AppSupportURL=http://www.logica.com/
AppSupportPhone=+31 20 503 3000
OutputDir=..
OutputBaseFilename=TestFrame Engine v{#TF_Engine_Version}
DefaultDirName=C:\TestFrame
SourceDir=TestFrame
DisableDirPage=yes
DefaultGroupName=Logica\TestFrame Engine
DisableProgramGroupPage=yes
LicenseFile=License.txt
Compression=lzma
SolidCompression=yes
; No administrator rights are needed
PrivilegesRequired=none

; Needed for correctly applying the path environment variable
AlwaysRestart=yes

; Branding
WizardImageFile=..\Left column.bmp
WizardSmallImageFile=..\LOGICA_LOGO_SMALL.bmp
SetupIconFile=..\TF.ico


[Languages]
Name: "english"; MessagesFile: "compiler:Default.isl"
Name: "basque"; MessagesFile: "compiler:Languages\Basque.isl"
Name: "brazilianportuguese"; MessagesFile: "compiler:Languages\BrazilianPortuguese.isl"
Name: "catalan"; MessagesFile: "compiler:Languages\Catalan.isl"
Name: "czech"; MessagesFile: "compiler:Languages\Czech.isl"
Name: "danish"; MessagesFile: "compiler:Languages\Danish.isl"
Name: "dutch"; MessagesFile: "compiler:Languages\Dutch.isl"
Name: "finnish"; MessagesFile: "compiler:Languages\Finnish.isl"
Name: "french"; MessagesFile: "compiler:Languages\French.isl"
Name: "german"; MessagesFile: "compiler:Languages\German.isl"
Name: "hebrew"; MessagesFile: "compiler:Languages\Hebrew.isl"
Name: "hungarian"; MessagesFile: "compiler:Languages\Hungarian.isl"
Name: "italian"; MessagesFile: "compiler:Languages\Italian.isl"
Name: "norwegian"; MessagesFile: "compiler:Languages\Norwegian.isl"
Name: "polish"; MessagesFile: "compiler:Languages\Polish.isl"
Name: "portuguese"; MessagesFile: "compiler:Languages\Portuguese.isl"
Name: "russian"; MessagesFile: "compiler:Languages\Russian.isl"
Name: "slovak"; MessagesFile: "compiler:Languages\Slovak.isl"
Name: "slovenian"; MessagesFile: "compiler:Languages\Slovenian.isl"
Name: "spanish"; MessagesFile: "compiler:Languages\Spanish.isl"

[CustomMessages]

[Dirs]
Name: "{app}\Log"
Name: "{app}\Template\Sheet"
Name: "{app}\Report\Template"

[Files]
; Base
Source: "engine.ini"; DestDir: "{app}";   Flags: ignoreversion
Source: "EULA.rtf"; DestDir: "{app}";   Flags: ignoreversion
Source: "readme1st.txt"; DestDir: "{app}";   Flags: ignoreversion

; Files for the Bin folder
; these are libraries and exectutables generated by the Engine6.sln project
Source: "..\..\Sources\output\{#configuration}\emc.exe"; DestDir: "{app}\Bin";   Flags: ignoreversion
Source: "..\..\Sources\output\{#configuration}\Coengine.dll"; DestDir: "{app}\Bin";   Flags: ignoreversion
Source: "..\..\Sources\output\{#configuration}\Enggui.dll"; DestDir: "{app}\Bin";   Flags: ignoreversion
Source: "..\..\Sources\output\{#configuration}\MessageCentre.dll"; DestDir: "{app}\Bin";   Flags: ignoreversion
Source: "..\..\Sources\output\{#configuration}\Napiwrapper.dll"; DestDir: "{app}\Bin";   Flags: ignoreversion
Source: "..\..\Sources\output\{#configuration}\stdcoengine.dll"; DestDir: "{app}\Bin";   Flags: ignoreversion
; ActiveX component, for use with Visual Basic 6
Source: "..\..\Sources\output\{#configuration}\comengine.dll"; DestDir: "{app}\Bin";   Flags: ignoreversion regserver
; Java support, uses a JNI wrapper
Source: "..\..\Sources\output\{#configuration}\JavaEngine.dll"; DestDir: "{app}\Bin";   Flags: ignoreversion

; Cluster
; --------
Source: "Cluster\Example.xls"; DestDir: "{app}\Cluster";   Flags: ignoreversion
Source: "Cluster\Example.txt"; DestDir: "{app}\Cluster";   Flags: ignoreversion

; Documentation
; -------------
Source: "Doc\TestFrame Engine - Installation Guide.pdf"; DestDir: "{app}\Doc";   Flags: ignoreversion
Source: "Doc\TestFrame Engine - User Manual.pdf"; DestDir: "{app}\Doc";   Flags: ignoreversion

; Include
; -------
Source: "..\..\Sources\Coengine\Coengine.h"; DestDir: "{app}\Include";   Flags: ignoreversion
Source: "..\..\Sources\Napi\Navigation\Napi.h"; DestDir: "{app}\Include\Napi";   Flags: ignoreversion
Source: "..\..\Sources\Napi\Wrapper\NapiWrapper.h"; DestDir: "{app}\Include\Napi";   Flags: ignoreversion

; Keep / Snap
; ----
Source: "Keep\keep.ini"; DestDir: "{app}\Keep";   Flags: ignoreversion
Source: "Snap\snap.ini"; DestDir: "{app}\Snap";   Flags: ignoreversion

; Libraries
; ---------
Source: "..\..\Sources\output\{#configuration}\Coengine.lib"; DestDir: "{app}\Lib";   Flags: ignoreversion
Source: "..\..\Sources\output\{#configuration}\Navigation.lib"; DestDir: "{app}\Lib\Napi";   Flags: ignoreversion
Source: "..\..\Sources\output\{#configuration}\NapiWrapper.lib"; DestDir: "{app}\Lib\Napi";   Flags: ignoreversion

; Report template
; ---------------
Source: "Report\Template\logo.tpl"; DestDir: "{app}\Report\Template";   Flags: ignoreversion


;----------------------------
; Scripts
;

; C++
Source: "Scripts\C++\Navigation\*"; DestDir: "{app}\Scripts\C++\Navigation";   Flags: ignoreversion recursesubdirs createallsubdirs
Source: "Scripts\C++\Wrapper\*"; DestDir: "{app}\Scripts\C++\Wrapper";   Flags: ignoreversion recursesubdirs createallsubdirs
Source: "Scripts\C++\Example start.lnk"; DestDir: "{app}\Scripts\C++";   Flags: ignoreversion
Source: "Scripts\C++\Example.bat"; DestDir: "{app}\Scripts\C++";   Flags: ignoreversion
Source: "Scripts\C++\Example.ini"; DestDir: "{app}\Scripts\C++";   Flags: ignoreversion
Source: "..\..\Sources\output\{#configuration}\Example.dll"; DestDir: "{app}\Scripts\C++";   Flags: ignoreversion
Source: "..\..\Sources\output\{#configuration}\TestFrame.exe"; DestDir: "{app}\Scripts\C++";   Flags: ignoreversion

; Others
Source: "Scripts\Java\*"; DestDir: "{app}\Scripts\Java";   Flags: ignoreversion recursesubdirs createallsubdirs
Source: "Scripts\QARun\*"; DestDir: "{app}\Scripts\QARun";   Flags: ignoreversion recursesubdirs createallsubdirs
Source: "Scripts\Rational Robot\*"; DestDir: "{app}\Scripts\Rational Robot";   Flags: ignoreversion recursesubdirs createallsubdirs
Source: "Scripts\Visual Basic\*"; DestDir: "{app}\Scripts\Visual Basic";   Flags: ignoreversion recursesubdirs createallsubdirs
Source: "Scripts\WinRunner\*"; DestDir: "{app}\Scripts\WinRunner";   Flags: ignoreversion recursesubdirs createallsubdirs

[Registry]
; Set the path  : HKEY_LOCAL_MACHINE\SYSTEM\CurrentControlSet\Control\Session Manager\Environment
Root: "HKLM"; Subkey: "SYSTEM\CurrentControlSet\Control\Session Manager\Environment"; ValueType: expandsz; ValueName: "Path"; ValueData: "{reg:HKLM\SYSTEM\CurrentControlSet\Control\Session Manager\Environment,Path};C:\TestFrame\Bin"

[Code]
procedure CurUninstallStepChanged(CurUninstallStep: TUninstallStep);
var
S, SS: String;
begin
    if CurUninstallStep = usDone then
    begin
        RegQueryStringValue(HKEY_LOCAL_MACHINE, 'SYSTEM\CurrentControlSet\Control\Session Manager\Environment', 'Path', S);

        StringChangeEx(S, ';C:\TestFrame\Bin', '', True);

        RegWriteExpandStringValue(HKEY_LOCAL_MACHINE, 'SYSTEM\CurrentControlSet\Control\Session Manager\Environment', 'Path', S );
    end;
end;
