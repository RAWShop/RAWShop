SetCompressor lzma

!include x64.nsh
!include FileFunc.nsh

!define VERSION "RAWShop_1.0"
!define VERSION_PRETTY "RAWShop 1.0"
OutFile "${VERSION}_install.exe"
InstallDir "$PROGRAMFILES\${VERSION}"
Name "${VERSION_PRETTY}"




AllowRootDirInstall true
RequestExecutionLevel admin
;---------------------------------
Page directory 
Page components
Page instfiles 
UninstPage uninstConfirm
UninstPage instfiles

;---------------------------------

AutoCloseWindow false
ShowInstDetails hide
Icon "D:\RAWShop_ico.ico"
UninstallIcon "D:\1432785860_Delete.ico"


Section "" 							
SetOutPath "$INSTDIR"

File D:\Test_Installer\Rawshop_install_files\RAWShop.exe			;Dateien kopieren
File D:\Test_Installer\Rawshop_install_files\icudt53.dll
File D:\Test_Installer\Rawshop_install_files\icuin53.dll
File D:\Test_Installer\Rawshop_install_files\icuuc53.dll
File D:\Test_Installer\Rawshop_install_files\jpeg.dll
File D:\Test_Installer\Rawshop_install_files\lcms2.dll
File D:\Test_Installer\Rawshop_install_files\libraw.dll
File D:\Test_Installer\Rawshop_install_files\Qt5Core.dll
File D:\Test_Installer\Rawshop_install_files\Qt5Gui.dll
File D:\Test_Installer\Rawshop_install_files\Qt5Svg.dll
File D:\Test_Installer\Rawshop_install_files\Qt5Widgets.dll
File D:\Test_Installer\Rawshop_install_files\msvcp100.dll
File D:\Test_Installer\Rawshop_install_files\msvcr100.dll
File D:\Test_Installer\Rawshop_install_files\msvcp120.dll
File D:\Test_Installer\Rawshop_install_files\msvcr120.dll
CreateDirectory "$INSTDIR\platforms"
SetOutPath "$INSTDIR\platforms"
File D:\Test_Installer\Rawshop_install_files\platforms\qwindows.dll
CreateDirectory "$INSTDIR\imageformats"
SetOutPath "$INSTDIR\imageformats"
File D:\Test_Installer\Rawshop_install_files\imageformats\qtiff.dll
File D:\Test_Installer\Rawshop_install_files\imageformats\qico.dll
WriteRegStr HKEY_CLASSES_ROOT "RAWShop\DefaultIcon" "" "$INSTDIR\RAWShop.exe"	;Icon setzen für RAWShop
WriteRegStr HKEY_CLASSES_ROOT "RAWShop\shell\open\command" "" "$INSTDIR\RAWShop.exe %1"	;fürs Doppelklicken auf .xxx -> öffnet sich mit RAWShop
WriteUninstaller "$INSTDIR\uninstall.exe"						;Uninstaller schreiben (siehe unten)
SectionEnd
;-------------------------



Section "Create Desktop Shortcut"
SetShellVarContext all								;alle Benutzer
CreateShortCut "$DESKTOP\${VERSION_PRETTY}.lnk " "$INSTDIR\RAWShop.exe" ;Desktop Verknüpfung erstellen mit Icon
SectionEnd

Section "Create Startmenu Shortcut"
SetShellVarContext all								;alle Benutzer
CreateDirectory "$SMPROGRAMS\${VERSION_PRETTY}"
CreateShortCut "$SMPROGRAMS\${VERSION_PRETTY}\${VERSION_PRETTY}.lnk " "$INSTDIR\RAWShop.exe" ;Startmenü Verknüpfung erstellen mit Icon
CreateShortCut "$SMPROGRAMS\${VERSION_PRETTY}\uninstall.lnk " "$INSTDIR\uninstall.exe" 	;Startmenü Verknüpfung erstellen mit Icon
SectionEnd

SectionGroup "Associate files with RAWShop"

Section ".3fr"
WriteRegStr HKEY_CLASSES_ROOT ".3fr" "" "RAWShop"		;.3fr mit RAWShop assoziieren
Push 1
SectionEnd

Section ".arw"
WriteRegStr HKEY_CLASSES_ROOT ".arw" "" "RAWShop"		;.arw mit RAWShop assoziieren
Push 2
SectionEnd

Section ".cr2"
WriteRegStr HKEY_CLASSES_ROOT ".cr2" "" "RAWShop"		;.cr2 mit RAWShop assoziieren
Push 3
SectionEnd

Section ".crw"	
WriteRegStr HKEY_CLASSES_ROOT ".crw" "" "RAWShop"		;.crw mit RAWShop assoziieren
Push 4
SectionEnd

Section ".dcr"
WriteRegStr HKEY_CLASSES_ROOT ".dcr" "" "RAWShop"		;.dcr mit RAWShop assoziieren
Push 5
SectionEnd

Section ".dng"	
WriteRegStr HKEY_CLASSES_ROOT ".dng" "" "RAWShop"		;.dng mit RAWShop assoziieren
Push 6
SectionEnd

Section ".erf"
WriteRegStr HKEY_CLASSES_ROOT ".erf" "" "RAWShop"		;.erf mit RAWShop assoziieren
Push 7
SectionEnd

Section ".kdc"
WriteRegStr HKEY_CLASSES_ROOT ".kdc" "" "RAWShop"		;.kdc mit RAWShop assoziieren
Push 8
SectionEnd

Section ".mdc"
WriteRegStr HKEY_CLASSES_ROOT ".mdc" "" "RAWShop"		;.mdc mit RAWShop assoziieren
Push 9
SectionEnd

Section ".mef"	
WriteRegStr HKEY_CLASSES_ROOT ".mef" "" "RAWShop"		;.mef mit RAWShop assoziieren
Push 10
SectionEnd

Section ".mrw"
WriteRegStr HKEY_CLASSES_ROOT ".mrw" "" "RAWShop"		;.mrw mit RAWShop assoziieren
Push 11
SectionEnd

Section ".nef"
WriteRegStr HKEY_CLASSES_ROOT ".nef" "" "RAWShop"		;.nef mit RAWShop assoziieren
Push 12
SectionEnd

Section ".nrw"	
WriteRegStr HKEY_CLASSES_ROOT ".nrw" "" "RAWShop"		;.nrw mit RAWShop assoziieren
Push 13
SectionEnd

Section ".orf"
WriteRegStr HKEY_CLASSES_ROOT ".orf" "" "RAWShop"		;.orf mit RAWShop assoziieren
Push 14
SectionEnd

Section ".pef"
WriteRegStr HKEY_CLASSES_ROOT ".pef" "" "RAWShop"		;.pef mit RAWShop assoziieren
Push 15
SectionEnd

Section ".raf"
WriteRegStr HKEY_CLASSES_ROOT ".raf" "" "RAWShop"		;.raf mit RAWShop assoziieren
Push 16
SectionEnd

Section ".raw"
WriteRegStr HKEY_CLASSES_ROOT ".raw" "" "RAWShop"		;.raw mit RAWShop assoziieren
Push 17
SectionEnd

Section ".rwl"
WriteRegStr HKEY_CLASSES_ROOT ".rwl" "" "RAWShop"		;.rwl mit RAWShop assoziieren
Push 18
SectionEnd

Section ".rw2"
WriteRegStr HKEY_CLASSES_ROOT ".rw2" "" "RAWShop"		;.rw2 mit RAWShop assoziieren
Push 19
SectionEnd

Section ".sr2"	
WriteRegStr HKEY_CLASSES_ROOT ".sr2" "" "RAWShop"		;.sr2 mit RAWShop assoziieren
Push 20
SectionEnd

Section ".srw"
WriteRegStr HKEY_CLASSES_ROOT ".srw" "" "RAWShop"		;.srw mit RAWShop assoziieren
Push 21
SectionEnd

Section ".tif"
WriteRegStr HKEY_CLASSES_ROOT ".tif" "" "RAWShop"		;.tif mit RAWShop assoziieren
Push 22
SectionEnd

Section ".x3f"
WriteRegStr HKEY_CLASSES_ROOT ".x3f" "" "RAWShop"		;.x3f mit RAWShop assoziieren
Push 23
SectionEnd

SectionGroupEnd

Section "Uninstall"
	SetShellVarContext all	
	RMDir /r /REBOOTOK $INSTDIR			;Alle Dateien löschen
	Delete "$DESKTOP\${VERSION_PRETTY}.lnk"			;Dektop Verknüpfung löschen
	RMDir /r /REBOOTOK "$SMPROGRAMS\${VERSION_PRETTY} " ;Startmenü Verknüpfung löschen
	DeleteRegValue HKEY_CLASSES_ROOT ".3fr" ""			;.3fr deassoziieren
	DeleteRegValue HKEY_CLASSES_ROOT ".arw" ""			;.arw deassoziieren
	DeleteRegValue HKEY_CLASSES_ROOT ".cr2" ""			;.cr2 deassoziieren
	DeleteRegValue HKEY_CLASSES_ROOT ".crw" ""			;.crw deassoziieren
	DeleteRegValue HKEY_CLASSES_ROOT ".dcr" ""			;.dcr deassoziieren
	DeleteRegValue HKEY_CLASSES_ROOT ".dng" ""			;.dng deassoziieren
	DeleteRegValue HKEY_CLASSES_ROOT ".erf" ""			;.erf deassoziieren
	DeleteRegValue HKEY_CLASSES_ROOT ".kdc" ""			;.kdc deassoziieren
	DeleteRegValue HKEY_CLASSES_ROOT ".mdc" ""			;.mdc deassoziieren
	DeleteRegValue HKEY_CLASSES_ROOT ".mef" ""			;.mef deassoziieren
	DeleteRegValue HKEY_CLASSES_ROOT ".mrw" ""			;.mrw deassoziieren
	DeleteRegValue HKEY_CLASSES_ROOT ".nef" ""			;.nef deassoziieren
	DeleteRegValue HKEY_CLASSES_ROOT ".nrw" ""			;.nrw deassoziieren
	DeleteRegValue HKEY_CLASSES_ROOT ".orf" ""			;.orf deassoziieren
	DeleteRegValue HKEY_CLASSES_ROOT ".pef" ""			;.pef deassoziieren
	DeleteRegValue HKEY_CLASSES_ROOT ".raf" ""			;.raf deassoziieren
	DeleteRegValue HKEY_CLASSES_ROOT ".raw" ""			;.raw deassoziieren
	DeleteRegValue HKEY_CLASSES_ROOT ".rwl" ""			;.rwl deassoziieren
	DeleteRegValue HKEY_CLASSES_ROOT ".rw2" ""			;.rw2 deassoziieren
	DeleteRegValue HKEY_CLASSES_ROOT ".sr2" ""			;.sr2 deassoziieren
	DeleteRegValue HKEY_CLASSES_ROOT ".srw" ""			;.srw deassoziieren
	DeleteRegValue HKEY_CLASSES_ROOT ".tif" ""			;.tif deassoziieren
	DeleteRegValue HKEY_CLASSES_ROOT ".x3f" ""			;.x3f deassoziieren
	DeleteRegKey HKEY_CLASSES_ROOT "RAWShop"			;RAWShop Registry Eintrag löschen
	${RefreshShellIcons}
SectionEnd

Function .onInstSuccess
Pop $1
IntCmp $1 0 nope jo			;$1==0? ja: assoziiert nein: nichts assoziiert
jo:
${RefreshShellIcons}
nope:
FunctionEnd

Function .onInit
Push 0						;Stack Ende
${If} ${RunningX64}			;Überprüfung, ob System 64 bit ist -> In entsprechendes Registry schreiben
SetRegView 64	
${ELSE}
SetRegView 32
${ENDIF}
FunctionEnd