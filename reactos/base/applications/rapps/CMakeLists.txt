
include_directories(${REACTOS_SOURCE_DIR}/sdk/lib/cryptlib)

list(APPEND SOURCE
    aboutdlg.c
    available.c
    installdlg.c
    installed.c
    listview.c
    loaddlg.c
    misc.c
    richedit.c
    settingsdlg.c
    splitter.c
    statusbar.c
    toolbar.c
    treeview.c
    winmain.c
    rapps.h)

add_definitions(-DUSE_CERT_PINNING)
file(GLOB_RECURSE rapps_rc_deps res/*.*)
add_rc_deps(rapps.rc ${rapps_rc_deps})
add_executable(rapps ${SOURCE} rapps.rc)
set_module_type(rapps win32gui UNICODE)
target_link_libraries(rapps uuid)
add_importlibs(rapps advapi32 comctl32 gdi32 wininet user32 shell32 shlwapi ole32 msvcrt kernel32 ntdll)
add_pch(rapps rapps.h SOURCE)
add_dependencies(rapps rappsmsg)
add_message_headers(ANSI rappsmsg.mc)
add_cd_file(TARGET rapps DESTINATION reactos/system32 FOR all)
