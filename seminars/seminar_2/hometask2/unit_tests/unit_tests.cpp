#include <gtest/gtest.h>
#include "test_func.h"
#include "../class_headers/linkedlist1.h"

TEST(MergeListTest1, BasicAssertions){
    linked_list1 list1{};
    list1.push_front(8);
    list1.push_front(6);
    list1.push_front(3);

    linked_list1 list2{};
    list2.push_front(9);
    list2.push_front(4);

    linked_list1 list_res{};
    list_res.push_back(3);
    list_res.push_back(4);
    list_res.push_back(6);
    list_res.push_back(8);
    list_res.push_back(9);

    linked_list1 list{merge_list(list1, list2)};

    EXPECT_TRUE(elementCompare(list, list_res));
}

TEST(MergeListTest2, BasicAssertions){
    linked_list1 list1{};
    list1.push_front(0);

    linked_list1 list2{};
    list2.push_front(0);

    linked_list1 list_res{};
    list_res.push_back(0);
    list_res.push_back(0);

    linked_list1 list{merge_list(list1, list2)};

    EXPECT_TRUE(elementCompare(list, list_res));
}

TEST(MergeListTest3, BasicAssertions){
    linked_list1 list1{};

    linked_list1 list2{};
    list2.push_front(1);

    linked_list1 list_res{};
    list_res.push_back(1);

    linked_list1 list{merge_list(list1, list2)};

    EXPECT_TRUE(elementCompare(list, list_res));
}