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
  MergeListTest1
  unit_tests.cpp
)
target_link_libraries(
  MergeListTest1
  GTest::gtest_main
)

add_executable(
  MergeListTest2
  unit_tests.cpp
)
target_link_libraries(
  MergeListTest2
  GTest::gtest_main
)

add_executable(
  MergeListTest3
  unit_tests.cpp
)
target_link_libraries(
  MergeListTest3
  GTest::gtest_main
)

add_executable(
  MergeListTest4
  unit_tests.cpp
)
target_link_libraries(
  MergeListTest4
  GTest::gtest_main
)

add_executable(
  MergeListTest5
  unit_tests.cpp
)
target_link_libraries(
  MergeListTest5
  GTest::gtest_main
)

include(GoogleTest)
gtest_discover_tests(MergeListTest1 MergeListTest2 MergeListTest3 
                    MergeListTest4 MergeListTest5)