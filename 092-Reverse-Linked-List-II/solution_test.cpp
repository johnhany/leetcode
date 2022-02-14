#define BOOST_TEST_MODULE SolutionTest

#include "solution.hpp"

//#define BOOST_TEST_DYN_LINK
#include <boost/test/unit_test.hpp>

BOOST_AUTO_TEST_SUITE(SolutionSuite)

BOOST_AUTO_TEST_CASE(PlainTest1)
{
    vector<int> num1{1,2,3,4,5};
    int left = 2, right = 4;
    ListNode* head = stringToListNode(num1);
    ListNode* result = Solution().reverseBetween(head, left, right);
    string result_str = listNodeToString(result);

    string expected = "[1, 4, 3, 2, 5]";
    BOOST_CHECK_EQUAL(result_str, expected);
}

BOOST_AUTO_TEST_CASE(PlainTest2)
{
    vector<int> num1{5};
    int left = 1, right = 1;
    ListNode* head = stringToListNode(num1);
    ListNode* result = Solution().reverseBetween(head, left, right);
    string result_str = listNodeToString(result);

    string expected = "[5]";
    BOOST_CHECK_EQUAL(result_str, expected);
}

BOOST_AUTO_TEST_SUITE_END()