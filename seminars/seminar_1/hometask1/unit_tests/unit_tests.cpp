#include <gtest/gtest.h>
#include "test_func.h"

TEST(EndZeroTest1, BasicAssertions) {
  std::array<int, 12> arr{1, 2, 0, 100, 10, 2, 0, 1, 0, 1, 1, 1};
  std::array<int, 12> arr_res{1, 2, 1, 100, 10, 2, 1, 1, 1, 0, 0, 0}; 
  zerosEnd(arr);

  EXPECT_EQ(arr, arr_res);
}

TEST(EndZeroTest2, BasicAssertions){
  std::array<int, 9> arr{0, 33, 57, 88, 60, 0, 0, 80, 99};
  std::array<int, 9> arr_res{99, 33, 57, 88, 60, 80, 0, 0, 0}; 
  zerosEnd(arr);

  EXPECT_EQ(arr, arr_res);
}

TEST(EndZeroTest3, BasicAssertions){
  std::array<int, 9> arr{0, 0, 0, 18, 16, 0, 0, 77, 99};
  std::array<int, 9> arr_res{16, 77, 99, 18, 0, 0, 0, 0, 0}; 
  zerosEnd(arr);

  EXPECT_EQ(arr, arr_res);
}

TEST(EndZeroTest4, BasicAssertions){
  std::array<int, 17> arr{0, 0, 0, 2, 18, 1, 3, 102, 16, 0, 0, 200, 8, 0, 77, 99, 0};
  std::array<int, 17> arr_res{77, 200, 8, 2, 18, 1, 3, 102, 16, 99, 0, 0, 0, 0, 0, 0, 0}; 
  zerosEnd(arr);

  EXPECT_EQ(arr, arr_res);
}

TEST(EndZeroTest5, BasicAssertions){
  std::array<int, 3> arr{0, 0, 1};
  std::array<int, 3> arr_res{1, 0, 0}; 
  zerosEnd(arr);

  EXPECT_EQ(arr, arr_res);
}