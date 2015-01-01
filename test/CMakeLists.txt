set (PROJECT_TEST_NAME dungeonmap_test)
set (Test_SOURCE
	minimalist.cpp
	)

find_package(Qt5Gui)

include_directories ("${gtest_SOURCE_DIR}/include" ${Qt5Gui_INCLUDE_DIRS})

add_executable(${PROJECT_TEST_NAME} ${Test_SOURCE})
target_link_libraries(${PROJECT_TEST_NAME} 
	gtest
	gtest_main
	pthread
	dmap
	Qt5::Gui
	)
