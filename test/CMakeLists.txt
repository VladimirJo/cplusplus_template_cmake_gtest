set(This
	runTest
)

set(Sources
	test.cpp
)

set(GoogleTestLibs 
	gtest_main 
	gmock_main
)

add_executable(${This} 
	${Sources}
)

target_include_directories(${This} PUBLIC 
	../include
	include
)

target_link_libraries(${This} PUBLIC 
	${GoogleTestLibs}
)
