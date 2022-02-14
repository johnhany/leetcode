#define BOOST_TEST_MODULE SolutionTest

#include "solution.hpp"

//#define BOOST_TEST_DYN_LINK
#include <boost/test/unit_test.hpp>

BOOST_AUTO_TEST_SUITE(SolutionSuite)

BOOST_AUTO_TEST_CASE(PlainTest1)
{
    vector<int> num1{1,2,2,1};
    ListNode* head = stringToListNode(num1);
    bool result = Solution().isPalindrome(head);

    bool expected = true;
    BOOST_CHECK_EQUAL(result, expected);
}

BOOST_AUTO_TEST_CASE(PlainTest2)
{
    vector<int> num1{1,2};
    ListNode* head = stringToListNode(num1);
    bool result = Solution().isPalindrome(head);

    bool expected = false;
    BOOST_CHECK_EQUAL(result, expected);
}

BOOST_AUTO_TEST_SUITE_END()