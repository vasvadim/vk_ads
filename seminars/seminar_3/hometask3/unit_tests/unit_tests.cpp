#include <gtest/gtest.h>
#include "test_func.h"

TEST(RemoveDuplicatesTest1, BasicAssertions){
    std::string string{"cdffd"};
    std::cout << "Input data: "<< string << '\n';
    
    std::string string_res{"c"};
    std::cout << "Expected data: " << string_res << '\n';

    string.assign(removeDuplicates(string));

    std::cout << "Result: " << string << '\n';

    EXPECT_EQ(string, string_res);
}

TEST(RemoveDuplicatesTest2, BasicAssertions){
    std::string string{"uioouiouuo"};
    std::cout << "Input data: "<< string << '\n';
    
    std::string string_res{"uiui"};
    std::cout << "Expected data: " << string_res << '\n';

    string.assign(removeDuplicates(string));

    std::cout << "Result: " << string << '\n';

    EXPECT_EQ(string, string_res);
}

TEST(RemoveDuplicatesTest3, BasicAssertions){
    std::string string{"aa"};
    std::cout << "Input data: "<< string << '\n';

    std::string string_res{""};
    std::cout << "Expected data: " << string_res << '\n';

    string.assign(removeDuplicates(string));

    std::cout << "Result: " << string << '\n';

    EXPECT_EQ(string, string_res);
}

TEST(RemoveDuplicatesTest4, BasicAssertions){
    std::string string{"aboba"};
    std::cout << "Input data: "<< string << '\n';

    std::string string_res{"aboba"};
    std::cout << "Expected data: " << string_res << '\n';

    string.assign(removeDuplicates(string));

    std::cout << "Result: " << string << '\n';

    EXPECT_EQ(string, string_res);
}

TEST(RemoveDuplicatesTest5, BasicAssertions){
    std::string string{"sojkkjo"};
    std::cout << "Input data: "<< string << '\n';

    std::string string_res{"s"};
    std::cout << "Expected data: " << string_res << '\n';

    string.assign(removeDuplicates(string));

    std::cout << "Result: " << string << '\n';

    EXPECT_EQ(string, string_res);
}