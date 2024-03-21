#include <gtest/gtest.h>
#include "test_func.h"

TEST(EndZeroTest1, BasicAssertions) {
  std::array<int, 12> arr1{1, 2, 0, 100, 10, 2, 0, 1, 0, 1, 1, 1};
  std::array<int, 12> arr1_res{1, 2, 1, 100, 10, 2, 1, 1, 1, 0, 0, 0}; 
  zerosEnd(arr1);

  EXPECT_EQ(arr1, arr1_res);
}

TEST(EndZeroTest2, BasicAssertions){
  std::array<int, 9> arr1{0, 33, 57, 88, 60, 0, 0, 80, 99};
  std::array<int, 9> arr1_res{99, 33, 57, 88, 60, 80, 0, 0, 0}; 
  zerosEnd(arr1);

  EXPECT_EQ(arr1, arr1_res);
}

TEST(EndZeroTest3, BasicAssertions){
  std::array<int, 9> arr1{0, 0, 0, 18, 16, 0, 0, 77, 99};
  std::array<int, 9> arr1_res{16, 77, 99, 18, 0, 0, 0, 0, 0}; 
  zerosEnd(arr1);

  EXPECT_EQ(arr1, arr1_res);
}