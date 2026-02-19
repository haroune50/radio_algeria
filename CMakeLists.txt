cmake_minimum_required(VERSION 3.19)
project(Radio_Algeria LANGUAGES CXX)

find_package(Qt6 6.5 COMPONENTS Widgets REQUIRED)



qt_standard_project_setup()

qt_add_executable(Radio_Algeria
    WIN32 MACOSX_BUNDLE
    main.cpp
    widget.cpp
    widget.h
    widget.ui
    resources.qrc/
)

target_link_libraries(Radio_Algeria
    PRIVATE
        Qt::Core
        Qt::Widgets
)

include(GNUInstallDirs)

install(TARGETS Radio_Algeria
    BUNDLE  DESTINATION .
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
)

qt_generate_deploy_app_script(
    TARGET Radio_Algeria
    OUTPUT_SCRIPT deploy_script
    NO_UNSUPPORTED_PLATFORM_ERROR
)
install(SCRIPT ${deploy_script})
