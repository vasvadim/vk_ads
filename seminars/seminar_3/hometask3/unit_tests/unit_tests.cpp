#include <gtest/gtest.h>
#include "test_func.h"

TEST(RemoveDuplicatesTest1, BasicAssertions){
    std::string string{"cdffd"};
    string.assign(removeDuplicates(string));
    std::string string_res{"c"};

    EXPECT_EQ(string, string_res);
}

TEST(RemoveDuplicatesTest2, BasicAssertions){
    std::string string{"uioouiouuo"};
    string.assign(removeDuplicates(string));
    std::string string_res{"uiui"};

    EXPECT_EQ(string, string_res);
}

TEST(RemoveDuplicatesTest3, BasicAssertions){
    std::string string{"aa"};
    string.assign(removeDuplicates(string));
    std::string string_res{""};

    EXPECT_EQ(string, string_res);
}

TEST(RemoveDuplicatesTest4, BasicAssertions){
    std::string string{"aboba"};
    string.assign(removeDuplicates(string));
    std::string string_res{"aboba"};

    EXPECT_EQ(string, string_res);
}