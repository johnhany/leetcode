#define BOOST_TEST_MODULE SolutionTest

#include "solution.hpp"

//#define BOOST_TEST_DYN_LINK
#include <boost/test/unit_test.hpp>

BOOST_AUTO_TEST_SUITE(SolutionSuite)

BOOST_AUTO_TEST_CASE(PlainTest1)
{
    vector<int> num1{1, 4, 5};
    ListNode* list1 = stringToListNode(num1);
    vector<int> num2{1, 3, 4};
    ListNode* list2 = stringToListNode(num2);
    vector<int> num3{2, 6};
    ListNode* list3 = stringToListNode(num3);
    vector<ListNode*> lists{list1, list2, list3};
    ListNode* result = Solution().mergeKLists(lists);
    string result_str = listNodeToString(result);

    string expected = "[1, 1, 2, 3, 4, 4, 5, 6]";
    BOOST_CHECK_EQUAL(result_str, expected);
}

BOOST_AUTO_TEST_CASE(PlainTest2)
{
    vector<int> num1{1, 2, 4};
    ListNode* list1 = stringToListNode(num1);
    vector<int> num2{5, 6, 7};
    ListNode* list2 = stringToListNode(num2);
    vector<int> num3{9, 10};
    ListNode* list3 = stringToListNode(num3);
    vector<ListNode*> lists{list1, list2, list3};
    ListNode* result = Solution().mergeKLists(lists);
    string result_str = listNodeToString(result);

    string expected = "[1, 2, 4, 5, 6, 7, 9, 10]";
    BOOST_CHECK_EQUAL(result_str, expected);
}

BOOST_AUTO_TEST_CASE(PlainTest3)
{
    vector<int> num1{1, 4, 5};
    ListNode* list1 = stringToListNode(num1);
    vector<int> num2{3};
    ListNode* list2 = stringToListNode(num2);
    vector<int> num3{2};
    ListNode* list3 = stringToListNode(num3);
    vector<ListNode*> lists{list1, list2, list3};
    ListNode* result = Solution().mergeKLists(lists);
    string result_str = listNodeToString(result);

    string expected = "[1, 2, 3, 4, 5]";
    BOOST_CHECK_EQUAL(result_str, expected);
}

BOOST_AUTO_TEST_CASE(PlainTest4)
{
    vector<int> num1{};
    ListNode* list1 = stringToListNode(num1);
    vector<int> num2{};
    ListNode* list2 = stringToListNode(num2);
    vector<ListNode*> lists{list1, list2};
    ListNode* result = Solution().mergeKLists(lists);
    string result_str = listNodeToString(result);

    string expected = "[]";
    BOOST_CHECK_EQUAL(result_str, expected);
}

BOOST_AUTO_TEST_CASE(PlainTest5)
{
    vector<int> num1{1, 2};
    ListNode* list1 = stringToListNode(num1);
    vector<int> num2{};
    ListNode* list2 = stringToListNode(num2);
    vector<ListNode*> lists{list1, list2};
    ListNode* result = Solution().mergeKLists(lists);
    string result_str = listNodeToString(result);

    string expected = "[1, 2]";
    BOOST_CHECK_EQUAL(result_str, expected);
}

BOOST_AUTO_TEST_CASE(PlainTest6)
{
    vector<ListNode*> lists;
    ListNode* result = Solution().mergeKLists(lists);
    string result_str = listNodeToString(result);

    string expected = "[]";
    BOOST_CHECK_EQUAL(result_str, expected);
}

BOOST_AUTO_TEST_CASE(PlainTest7)
{
    vector<int> num1{};
    ListNode* list1 = stringToListNode(num1);
    vector<int> num2{1};
    ListNode* list2 = stringToListNode(num2);
    vector<ListNode*> lists{list1, list2};
    ListNode* result = Solution().mergeKLists(lists);
    string result_str = listNodeToString(result);

    string expected = "[1]";
    BOOST_CHECK_EQUAL(result_str, expected);
}

BOOST_AUTO_TEST_CASE(PlainTest8)
{
    vector<int> num1{1};
    ListNode* list1 = stringToListNode(num1);
    vector<int> num2{};
    ListNode* list2 = stringToListNode(num2);
    vector<ListNode*> lists{list1, list2};
    ListNode* result = Solution().mergeKLists(lists);
    string result_str = listNodeToString(result);

    string expected = "[1]";
    BOOST_CHECK_EQUAL(result_str, expected);
}

BOOST_AUTO_TEST_CASE(PlainTest9)
{
    vector<int> num1{1};
    ListNode* list1 = stringToListNode(num1);
    vector<int> num2{0};
    ListNode* list2 = stringToListNode(num2);
    vector<ListNode*> lists{list1, list2};
    ListNode* result = Solution().mergeKLists(lists);
    string result_str = listNodeToString(result);

    string expected = "[0, 1]";
    BOOST_CHECK_EQUAL(result_str, expected);
}

BOOST_AUTO_TEST_SUITE_END()