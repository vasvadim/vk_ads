add_test( HelloTest.BasicAssertions /home/vadim/vk_ads/seminars/seminar_1/hometask1/unit_tests/build/hello_test [==[--gtest_filter=HelloTest.BasicAssertions]==] --gtest_also_run_disabled_tests)
set_tests_properties( HelloTest.BasicAssertions PROPERTIES WORKING_DIRECTORY /home/vadim/vk_ads/seminars/seminar_1/hometask1/unit_tests/build SKIP_REGULAR_EXPRESSION [==[\[  SKIPPED \]]==])
set( hello_test_TESTS HelloTest.BasicAssertions)
