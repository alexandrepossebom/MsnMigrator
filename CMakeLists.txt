project (msnmigrator)
cmake_minimum_required (VERSION 2.6)

set(msnmigrator_SRCS main.cpp
	     loginwindow.cpp
             msnmigrator.cpp)

set(msnmigrator_HDRS msnmigrator.h
             loginwindow.h)

set (msnmigrator_UIS msnmigrator.ui
	loginwindow.ui)


find_package(PkgConfig)
pkg_check_modules(LIBMSN REQUIRED libmsn)

find_package(Qt4)
include_directories(${CMAKE_CURRENT_SOURCE_DIR}
                    ${CMAKE_CURRENT_BINARY_DIR}
                    ${QT_INCLUDE_DIRS} 
		    ${LIBMSN_INCLUDE_DIRS}) 

LINK_DIRECTORIES(${LIBMSN_LIBDIR})
QT4_WRAP_CPP(msnmigrator_MOC_SRCS ${msnmigrator_HDRS})
QT4_WRAP_UI(msnmigrator_UI_SRCS ${msnmigrator_UIS})
#QT4_ADD_RESOURCES(msnmigrator_RES_SRCS msnmigrator.qrc)
#QT4_ADD_TRANSLATION(msnmigrator_QMS i18n/msnmigrator-pt_BR.ts) 

#add_definitions(-DMSNMIGRATOR_TRANSLATION_PATH=\"${CMAKE_INSTALL_PREFIX}/share/msnmigrator/locale\" )
include(${QT_USE_FILE})
add_executable(msnmigrator ${msnmigrator_SRCS} ${msnmigrator_MOC_SRCS} ${msnmigrator_UI_SRCS})

target_link_libraries(msnmigrator ${QT_LIBRARIES} ${LIBMSN_LIBRARIES}) 

install(TARGETS msnmigrator DESTINATION bin)
#install(FILES ${msnmigrator_QMS} DESTINATION share/msnmigrator/locale)
