#define BOOST_TEST_MODULE SolutionTest

#include "solution.hpp"

#define BOOST_TEST_DYN_LINK
#include <boost/test/unit_test.hpp>

BOOST_AUTO_TEST_SUITE(SolutionSuite)

BOOST_AUTO_TEST_CASE(PlainTest)
{
    vector<int> num1{2, 4, 3};
    ListNode* list1 = stringToListNode(num1);
    vector<int> num2{5, 6, 4};
    ListNode* list2 = stringToListNode(num2);

    ListNode* results = Solution().addTwoNumbers(list1, list2);
    string result_str = listNodeToString(results);

    string expected = "[7, 0, 8]";

    BOOST_CHECK_EQUAL(result_str, expected);
}
BOOST_AUTO_TEST_SUITE_END()