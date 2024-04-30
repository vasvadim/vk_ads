#include <gtest/gtest.h>
#include "test_func.h"

TEST(ShellSortTest1, ShellSortTests){
    std::array<int,10> arr{10,5,3,7,8,6,2,1,4,9};
    std::array<int,10> arr_res{1,2,3,4,5,6,7,8,9,10};

    std::cout << "Input data: ";
    print(arr);
    std::cout << "Expected data: ";
    print(arr_res);

    shell_sort(arr);

    std::cout << "Output data: ";
    print(arr);

    EXPECT_EQ(arr, arr_res);
}

TEST(ShellSortTest2, ShellSortTests){
    std::array<int,7> arr{1,2,1,1,1,0,-1};
    std::array<int,7> arr_res{-1,0,1,1,1,1,2};

    std::cout << "Input data: ";
    print(arr);
    std::cout << "Expected data: ";
    print(arr_res);

    shell_sort(arr);
    
    std::cout << "Output data: ";
    print(arr);

    EXPECT_EQ(arr, arr_res);
}

TEST(ShellSortTest3, ShellSortTests){
    std::array<int,1> arr{1};
    std::array<int,1> arr_res{1};

    std::cout << "Input data: ";
    print(arr);
    std::cout << "Expected data: ";
    print(arr_res);

    shell_sort(arr);
    
    std::cout << "Output data: ";
    print(arr);

    EXPECT_EQ(arr, arr_res);
}

TEST(FeedAnimalsTest1, FeedAnimalsTests){
    std::array<int,3> animals{1,3,2};
    std::array<int,3> food{1,2,2};
    int result{2};

    std::cout << "Input data: " << "animals: ";
    print(animals);
    std::cout << "food: ";
    print(food);
    std::cout << "Expected data: ";
    std::cout << result << std::endl;
    
    std::cout << "Output data: ";
    std::cout << feedAnimals(animals,food) << std::endl;

    EXPECT_EQ(result, feedAnimals(animals,food));
}

TEST(FeedAnimalsTest2, FeedAnimalsTests){
    std::array<int,5> animals{1,3,3,4,10};
    std::array<int,5> food{1,2,2,5,11};
    int result{3};

    std::cout << "Input data: " << "animals: ";
    print(animals);
    std::cout << "food: ";
    print(food);
    std::cout << "Expected data: ";
    std::cout << result << std::endl;
    
    std::cout << "Output data: ";
    std::cout << feedAnimals(animals,food) << std::endl;

    EXPECT_EQ(result, feedAnimals(animals,food));
}

TEST(FeedAnimalsTest3, FeedAnimalsTests){
    std::array<int,1> animals{10};
    std::array<int,6> food{5,9,8,8,2,3};
    int result{0};

    std::cout << "Input data: " << "animals: ";
    print(animals);
    std::cout << "food: ";
    print(food);
    std::cout << "Expected data: ";
    std::cout << result << std::endl;
    
    std::cout << "Output data: ";
    std::cout << feedAnimals(animals,food) << std::endl;

    EXPECT_EQ(result, feedAnimals(animals,food));
}

TEST(ExtraLetterTest1, ExtraLetterTests){
    std::string s_1{"aboba"};
    std::string s_2{"abosba"};
    char s_res{'s'};

    std::cout << "Input data: ";
    std::cout << "String_1: " << s_1 << std::endl;
    std::cout << "String_2: " << s_2 << std::endl;
    std::cout << "Expected data: ";
    std::cout << s_res << std::endl;
    
    std::cout << "Output data: ";
    std::cout << s_res << std::endl;

    EXPECT_EQ(s_res, extraLetter(s_1, s_2));
}

TEST(ExtraLetterTest2, ExtraLetterTests){
    std::string s_1{"abcdef"};
    std::string s_2{"abcdefd"};
    char s_res{'d'};

    std::cout << "Input data: ";
    std::cout << "String_1: " << s_1 << std::endl;
    std::cout << "String_2: " << s_2 << std::endl;
    std::cout << "Expected data: ";
    std::cout << s_res << std::endl;
    
    std::cout << "Output data: ";
    std::cout << s_res << std::endl;

    EXPECT_EQ(s_res, extraLetter(s_1, s_2));
}

TEST(ExtraLetterTest3, ExtraLetterTests){
    std::string s_1{""};
    std::string s_2{"a"};
    char s_res{'a'};

    std::cout << "Input data: ";
    std::cout << "String_1: " << s_1 << std::endl;
    std::cout << "String_2: " << s_2 << std::endl;
    std::cout << "Expected data: ";
    std::cout << s_res << std::endl;
    
    std::cout << "Output data: ";
    std::cout << s_res << std::endl;

    EXPECT_EQ(s_res, extraLetter(s_1, s_2));
}

TEST(TwoSumTest1, TwoSumTests){
    std::array<int,5> arr{1,2,3,4,10};
    std::pair<int,int> result{0,4};
    int target = 11;

    std::cout << "Input data: ";
    print(arr);
    std::cout << "target: " << target << std::endl;
    std::cout << "Expected data: ";
    std::cout << result.first << ' ' << result.second << std::endl;
    
    std::pair<int,int> output_pair = twoSum(arr, target);

    std::cout << "Output data: ";
    std::cout <<  output_pair.first << ' ' << output_pair.second << std::endl;

    EXPECT_EQ(result, output_pair);
}

TEST(TwoSumTest2, TwoSumTests){
    std::array<int,6> arr{0,0,0,1,15,3};
    std::pair<int,int> result{2,5};
    int target = 3;

    std::cout << "Input data: ";
    print(arr);
    std::cout << "target: " << target << std::endl;
    std::cout << "Expected data: ";
    std::cout << result.first << ' ' << result.second << std::endl;
    
    std::pair<int,int> output_pair = twoSum(arr, target);

    std::cout << "Output data: ";
    std::cout <<  output_pair.first << ' ' << output_pair.second << std::endl;

    EXPECT_EQ(result, output_pair);
}

TEST(TwoSumTest3, TwoSumTests){
    std::array<int,7> arr{0,0,12,0,0,0,13};
    std::pair<int,int> result{2,6};
    int target = 25;

    std::cout << "Input data: ";
    print(arr);
    std::cout << "target: " << target << std::endl;
    std::cout << "Expected data: ";
    std::cout << result.first << ' ' << result.second << std::endl;
    
    std::pair<int,int> output_pair = twoSum(arr, target);

    std::cout << "Output data: ";
    std::cout <<  output_pair.first << ' ' << output_pair.second << std::endl;

    EXPECT_EQ(result, output_pair);
}

TEST(AnagramGroupTest1, AnagramGroupTests){
    std::array<std::string,6> arr{"abc","avg","bca", "voda", "adov", "cab"};
    std::cout << "Input data: ";
    print(arr);

    std::vector<std::vector<std::string>> result{};

    result.push_back(std::vector<std::string>{"abc", "bca", "cab"});
    result.push_back(std::vector<std::string>{"avg"});
    result.push_back(std::vector<std::string>{"voda", "adov"});
    
    std::cout << "Expected data: " << std::endl;
    print2Dvector(result);

    std::vector<std::vector<std::string>> output_vector = anagramGroup(arr);

    std::cout << "Output data: " << std::endl;
    print2Dvector(output_vector);

    EXPECT_EQ(result, output_vector);
}

TEST(AnagramGroupTest2, AnagramGroupTests){
    std::array<std::string,5> arr{"ba","allo","olla","ab", "a"};
    std::cout << "Input data: ";
    print(arr);

    std::vector<std::vector<std::string>> result{};

    result.push_back(std::vector<std::string>{"ba","ab"});
    result.push_back(std::vector<std::string>{"allo", "olla"});
    result.push_back(std::vector<std::string>{"a"});
    
    std::cout << "Expected data: " << std::endl;
    print2Dvector(result);

    std::vector<std::vector<std::string>> output_vector = anagramGroup(arr);

    std::cout << "Output data: " << std::endl;
    print2Dvector(output_vector);

    EXPECT_EQ(result, output_vector);
}

TEST(AnagramGroupTest3, AnagramGroupTests){
    std::array<std::string,7> arr{"aboba", "bobaa", "gava", "bboaa", "avag", "dom", "baboa"};
    std::cout << "Input data: ";
    print(arr);

    std::vector<std::vector<std::string>> result{};

    result.push_back(std::vector<std::string>{"aboba", "bobaa", "bboaa", "baboa"});
    result.push_back(std::vector<std::string>{"gava","avag"});
    result.push_back(std::vector<std::string>{"dom"});
    
    std::cout << "Expected data: " << std::endl;
    print2Dvector(result);

    std::vector<std::vector<std::string>> output_vector = anagramGroup(arr);

    std::cout << "Output data: " << std::endl;
    print2Dvector(output_vector);

    EXPECT_EQ(result, output_vector);
}