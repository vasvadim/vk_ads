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
  ShellSortTest1
  unit_tests.cpp
)
target_link_libraries(
  ShellSortTest1
  GTest::gtest_main
)

add_executable(
  ShellSortTest2
  unit_tests.cpp
)
target_link_libraries(
  ShellSortTest2
  GTest::gtest_main
)

add_executable(
  ShellSortTest3
  unit_tests.cpp
)
target_link_libraries(
  ShellSortTest3
  GTest::gtest_main
)

add_executable(
  FeedAnimalsTest1
  unit_tests.cpp
)
target_link_libraries(
  FeedAnimalsTest1
  GTest::gtest_main
)

add_executable(
  FeedAnimalsTest2
  unit_tests.cpp
)
target_link_libraries(
  FeedAnimalsTest2
  GTest::gtest_main
)

add_executable(
  FeedAnimalsTest3
  unit_tests.cpp
)
target_link_libraries(
  FeedAnimalsTest3
  GTest::gtest_main
)

add_executable(
  ExtraLetterTest1
  unit_tests.cpp
)
target_link_libraries(
  ExtraLetterTest1
  GTest::gtest_main
)

add_executable(
  ExtraLetterTest2
  unit_tests.cpp
)
target_link_libraries(
  ExtraLetterTest2
  GTest::gtest_main
)

add_executable(
  ExtraLetterTest3
  unit_tests.cpp
)
target_link_libraries(
  ExtraLetterTest3
  GTest::gtest_main
)

add_executable(
  TwoSumTest1
  unit_tests.cpp
)
target_link_libraries(
  TwoSumTest1
  GTest::gtest_main
)

add_executable(
  TwoSumTest2
  unit_tests.cpp
)
target_link_libraries(
  TwoSumTest2
  GTest::gtest_main
)

add_executable(
  TwoSumTest3
  unit_tests.cpp
)
target_link_libraries(
  TwoSumTest3
  GTest::gtest_main
)

add_executable(
  AnagramGroupTest1
  unit_tests.cpp
)
target_link_libraries(
  AnagramGroupTest1
  GTest::gtest_main
)

add_executable(
  AnagramGroupTest2
  unit_tests.cpp
)
target_link_libraries(
  AnagramGroupTest2
  GTest::gtest_main
)

add_executable(
  AnagramGroupTest3
  unit_tests.cpp
)
target_link_libraries(
  AnagramGroupTest3
  GTest::gtest_main
)

include(GoogleTest)
gtest_discover_tests(ShellSortTest1 ShellSortTest2 ShellSortTest3
                    FeedAnimalsTest1 FeedAnimalsTest2 FeedAnimalsTest3
                    ExtraLetterTest1 ExtraLetterTest2 ExtraLetterTest3
                    TwoSumTest1 TwoSumTest2 TwoSumTest3
                    AnagramGroupTest1 AnagramGroupTest2 AnagramGroupTest3)