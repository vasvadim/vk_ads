if(EXISTS "/home/vadim/vk_ads/seminars/seminar_1/hometask1/unit_tests/build/hello_test[1]_tests.cmake")
  include("/home/vadim/vk_ads/seminars/seminar_1/hometask1/unit_tests/build/hello_test[1]_tests.cmake")
else()
  add_test(hello_test_NOT_BUILT hello_test_NOT_BUILT)
endif()
