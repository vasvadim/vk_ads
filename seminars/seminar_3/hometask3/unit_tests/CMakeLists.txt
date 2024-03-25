cmake_minimum_required(VERSION 3.14)
project(my_project)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include(FetchContent)
FetchContent_Declare(
  googletest
  URL https://github.com/google/googletest/archive/03597a01ee50ed33e9dfd640b249b4be3799d395.zip
)

set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)

enable_testing()

add_executable(
  RemoveDuplicatesTest1
  unit_tests.cpp
)
target_link_libraries(
  RemoveDuplicatesTest1
  GTest::gtest_main
)

add_executable(
  RemoveDuplicatesTest2
  unit_tests.cpp
)
target_link_libraries(
  RemoveDuplicatesTest2
  GTest::gtest_main
)

add_executable(
  RemoveDuplicatesTest3
  unit_tests.cpp
)
target_link_libraries(
  RemoveDuplicatesTest3
  GTest::gtest_main
)

add_executable(
  RemoveDuplicatesTest4
  unit_tests.cpp
)
target_link_libraries(
  RemoveDuplicatesTest4
  GTest::gtest_main
)

add_executable(
  RemoveDuplicatesTest5
  unit_tests.cpp
)
target_link_libraries(
  RemoveDuplicatesTest5
  GTest::gtest_main
)

include(GoogleTest)
gtest_discover_tests(RemoveDuplicatesTest1 RemoveDuplicatesTest2 RemoveDuplicatesTest3 
                    RemoveDuplicatesTest4 RemoveDuplicatesTest5)