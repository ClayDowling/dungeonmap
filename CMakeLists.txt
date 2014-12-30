project (Dungeonmap)

add_subdirectory (gtest)
add_subdirectory (test)

set (Dungeonmap_SOURCE
	dungeonmap-main.cpp
	)

add_executable(dungeonmap ${Dungeonmap_SOURCE})

