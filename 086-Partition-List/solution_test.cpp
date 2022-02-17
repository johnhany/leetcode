#define BOOST_TEST_MODULE SolutionTest

#include "solution.hpp"

//#define BOOST_TEST_DYN_LINK
#include <boost/test/unit_test.hpp>

BOOST_AUTO_TEST_SUITE(SolutionSuite)

BOOST_AUTO_TEST_CASE(PlainTest1)
{
    vector<int> num1{1,4,3,2,5,2};
    ListNode* list1 = stringToListNode(num1);
    int k = 3;

    ListNode* results = Solution().partition(list1, k);
    string result_str = listNodeToString(results);

    string expected = "[1,2,2,4,3,5]";

    BOOST_CHECK_EQUAL(result_str, expected);
}

BOOST_AUTO_TEST_CASE(PlainTest2)
{
    vector<int> num1{2,1};
    ListNode* list1 = stringToListNode(num1);
    int k = 2;

    ListNode* results = Solution().partition(list1, k);
    string result_str = listNodeToString(results);

    string expected = "[1,2]";

    BOOST_CHECK_EQUAL(result_str, expected);
}

BOOST_AUTO_TEST_SUITE_END()