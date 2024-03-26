#include <gtest/gtest.h>
#include "test_func.h"
#include "../class_headers/linkedlist1.h"

TEST(MergeListTest1, BasicAssertions){
    linked_list1 list1{};
    list1.push_back(3);
    list1.push_back(6);
    list1.push_back(8);

    linked_list1 list2{};
    list2.push_back(4);
    list2.push_back(9);

    std::cout << "Input data: ";
    list1.print();
    list2.print();

    linked_list1 list_res{};
    list_res.push_back(3);
    list_res.push_back(4);
    list_res.push_back(6);
    list_res.push_back(8);
    list_res.push_back(9);

    std::cout << "Expected data: ";
    list_res.print();

    linked_list1 list{merge_list(list1, list2)};

    std::cout << "Result data: ";
    list.print();

    EXPECT_TRUE(elementCompare(list, list_res));
}

TEST(MergeListTest2, BasicAssertions){
    linked_list1 list1{};
    list1.push_front(0);

    linked_list1 list2{};
    list2.push_front(0);

    std::cout << "Input data: ";
    list1.print();
    list2.print();

    linked_list1 list_res{};
    list_res.push_back(0);
    list_res.push_back(0);

    std::cout << "Expected data: ";
    list_res.print();

    linked_list1 list{merge_list(list1, list2)};

    std::cout << "Result data: ";
    list.print();

    EXPECT_TRUE(elementCompare(list, list_res));
}

TEST(MergeListTest3, BasicAssertions){
    linked_list1 list1{};

    linked_list1 list2{};
    list2.push_front(1);

    std::cout << "Input data: ";
    list1.print();
    list2.print();

    linked_list1 list_res{};
    list_res.push_back(1);

    std::cout << "Expected data: ";
    list_res.print();

    linked_list1 list{merge_list(list1, list2)};

    std::cout << "Result data: ";
    list.print();

    EXPECT_TRUE(elementCompare(list, list_res));
}

TEST(MergeListTest4, BasicAssertions){
    linked_list1 list1{};
    list1.push_back(1);
    list1.push_back(2);
    list1.push_back(3);

    linked_list1 list2{};
    list2.push_back(1);
    list2.push_back(2);
    list2.push_back(3);

    std::cout << "Input data: ";
        list1.print();
        list2.print();

    linked_list1 list_res{};
    list_res.push_back(1);
    list_res.push_back(1);
    list_res.push_back(2);
    list_res.push_back(2);
    list_res.push_back(3);
    list_res.push_back(3);

    std::cout << "Expected data: ";
    list_res.print();

    linked_list1 list{merge_list(list1, list2)};

    std::cout << "Result data: ";
    list.print();

    EXPECT_TRUE(elementCompare(list, list_res));
}

TEST(MergeListTest5, BasicAssertions){
    linked_list1 list1{};
    list1.push_back(1);
    list1.push_back(3);
    list1.push_back(5);

    linked_list1 list2{};
    list2.push_back(2);
    list2.push_back(4);

    std::cout << "Input data: ";
    list1.print();
    list2.print();

    linked_list1 list_res{};
    list_res.push_back(1);
    list_res.push_back(2);
    list_res.push_back(3);
    list_res.push_back(4);
    list_res.push_back(5);

    std::cout << "Expected data: ";
    list_res.print();

    linked_list1 list{merge_list(list1, list2)};

    std::cout << "Result data: ";
    list.print();

    EXPECT_TRUE(elementCompare(list, list_res));
}