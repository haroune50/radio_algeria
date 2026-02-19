include("/home/hod-11/Documents/Radio_Algeria/build/Desktop_Qt_6_10_1-Debug/.qt/QtDeploySupport.cmake")
include("${CMAKE_CURRENT_LIST_DIR}/Radio_Algeria-plugins.cmake" OPTIONAL)
set(__QT_DEPLOY_I18N_CATALOGS "qtbase")

qt6_deploy_runtime_dependencies(
    EXECUTABLE "/home/hod-11/Documents/Radio_Algeria/build/Desktop_Qt_6_10_1-Debug/Radio_Algeria"
    GENERATE_QT_CONF
)
