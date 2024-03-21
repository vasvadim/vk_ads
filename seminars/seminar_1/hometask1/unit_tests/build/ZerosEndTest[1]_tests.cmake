add_test( EndZeroTest.BasicAssertions /home/vadim/vk_ads/seminars/seminar_1/hometask1/unit_tests/build/ZerosEndTest [==[--gtest_filter=EndZeroTest.BasicAssertions]==] --gtest_also_run_disabled_tests)
set_tests_properties( EndZeroTest.BasicAssertions PROPERTIES WORKING_DIRECTORY /home/vadim/vk_ads/seminars/seminar_1/hometask1/unit_tests/build SKIP_REGULAR_EXPRESSION [==[\[  SKIPPED \]]==])
set( ZerosEndTest_TESTS EndZeroTest.BasicAssertions)
