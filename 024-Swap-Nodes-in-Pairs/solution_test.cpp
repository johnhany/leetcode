#define BOOST_TEST_MODULE SolutionTest

#include "solution.hpp"

//#define BOOST_TEST_DYN_LINK
#include <boost/test/unit_test.hpp>

BOOST_AUTO_TEST_SUITE(SolutionSuite)

BOOST_AUTO_TEST_CASE(PlainTest1)
{
    vector<int> num{1, 2, 3, 4};
    ListNode* head = stringToListNode(num);
    ListNode* result = Solution().swapPairs(head);
    string result_str = listNodeToString(result);

    string expected = "[2, 1, 4, 3]";
    BOOST_CHECK_EQUAL(result_str, expected);
}

BOOST_AUTO_TEST_CASE(PlainTest2)
{
    vector<int> num{1, 2, 3};
    ListNode* head = stringToListNode(num);
    ListNode* result = Solution().swapPairs(head);
    string result_str = listNodeToString(result);

    string expected = "[2, 1, 3]";
    BOOST_CHECK_EQUAL(result_str, expected);
}

BOOST_AUTO_TEST_SUITE_END()