if(EXISTS "/home/vadim/vk_ads/seminars/seminar_1/hometask1/unit_tests/build/ZerosEndTest1[1]_tests.cmake")
  include("/home/vadim/vk_ads/seminars/seminar_1/hometask1/unit_tests/build/ZerosEndTest1[1]_tests.cmake")
else()
  add_test(ZerosEndTest1_NOT_BUILT ZerosEndTest1_NOT_BUILT)
endif()