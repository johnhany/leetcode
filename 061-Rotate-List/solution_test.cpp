#define BOOST_TEST_MODULE SolutionTest

#include "solution.hpp"

//#define BOOST_TEST_DYN_LINK
#include <boost/test/unit_test.hpp>

BOOST_AUTO_TEST_SUITE(SolutionSuite)

BOOST_AUTO_TEST_CASE(PlainTest1)
{
    vector<int> num1{1,2,3,4,5};
    ListNode* list1 = stringToListNode(num1);
    int k = 2;

    ListNode* results = Solution().rotateRight(list1, k);
    string result_str = listNodeToString(results);

    string expected = "[4,5,1,2,3]";

    BOOST_CHECK_EQUAL(result_str, expected);
}

BOOST_AUTO_TEST_CASE(PlainTest2)
{
    vector<int> num1{0,1,2};
    ListNode* list1 = stringToListNode(num1);
    int k = 4;

    ListNode* results = Solution().rotateRight(list1, k);
    string result_str = listNodeToString(results);

    string expected = "[2,0,1]";

    BOOST_CHECK_EQUAL(result_str, expected);
}

BOOST_AUTO_TEST_SUITE_END()