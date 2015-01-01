cmake_minimum_required(VERSION 2.8)
project (Dungeonmap)

find_package(Qt5Gui)

add_definitions(${QT_DEFINITIONS})
include_directories(${Qt5Gui_INCLUDE_DIRS})
set(CMAKE_POSITION_INDEPENDENT_CODE ON)

set (DUNGEONMAP_LIBRARY_SOURCE
	dungeonmap.cpp
	)

add_library(dmap STATIC ${DUNGEONMAP_LIBRARY_SOURCE})

add_subdirectory (gtest)
add_subdirectory (test)

set (Dungeonmap_SOURCE
	dungeonmap-main.cpp
	${DUNGEONMAP_LIBRARY_SOURCE}
	)

add_executable(dungeonmap ${Dungeonmap_SOURCE})
target_link_libraries(dungeonmap Qt5::Gui)

