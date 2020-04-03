#define BOOST_TEST_MODULE SolutionTest

#include "solution.hpp"

//#define BOOST_TEST_DYN_LINK
#include <boost/test/unit_test.hpp>

BOOST_AUTO_TEST_SUITE(SolutionSuite)

BOOST_AUTO_TEST_CASE(PlainTest1)
{
    vector<int> num{1, 2, 3, 4, 5};
    int k = 2;
    ListNode* head = stringToListNode(num);
    ListNode* result = Solution().reverseKGroup(head, k);
    string result_str = listNodeToString(result);

    string expected = "[2, 1, 4, 3, 5]";
    BOOST_CHECK_EQUAL(result_str, expected);
}

BOOST_AUTO_TEST_CASE(PlainTest2)
{
    vector<int> num{1, 2, 3, 4, 5};
    int k = 3;
    ListNode* head = stringToListNode(num);
    ListNode* result = Solution().reverseKGroup(head, k);
    string result_str = listNodeToString(result);

    string expected = "[3, 2, 1, 4, 5]";
    BOOST_CHECK_EQUAL(result_str, expected);
}

BOOST_AUTO_TEST_SUITE_END()