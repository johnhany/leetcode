#define BOOST_TEST_MODULE SolutionTest

#include "solution.hpp"

#define BOOST_TEST_DYN_LINK
#include <boost/test/unit_test.hpp>

struct less_than_key {
    inline bool operator() (const vector<int>& vec1, const vector<int>& vec2) {
        if (vec1.size() == vec2.size()) {
            for (int i = 0; i < vec1.size(); i++) {
                if (vec1[i] < vec2[i]) return true;
                else if (vec1[i] > vec2[i]) return false;
            }
        } else return false;
        return false;
    }
};

BOOST_AUTO_TEST_SUITE(SolutionSuite)

BOOST_AUTO_TEST_CASE(PlainTest1)
{
    vector<int> num1{1, 2, 3, 4, 5};
    ListNode* list1 = stringToListNode(num1);
    int n = 2;
    ListNode* result = Solution().removeNthFromEnd(list1, n);
    string result_str = listNodeToString(result);

    string expected = "[1, 2, 3, 5]";
    BOOST_CHECK_EQUAL(result_str, expected);
}

BOOST_AUTO_TEST_CASE(PlainTest2)
{
    vector<int> num1{1, 2, 3, 4, 5};
    ListNode* list1 = stringToListNode(num1);
    int n = 5;
    ListNode* result = Solution().removeNthFromEnd(list1, n);
    string result_str = listNodeToString(result);

    string expected = "[2, 3, 4, 5]";
    BOOST_CHECK_EQUAL(result_str, expected);
}

BOOST_AUTO_TEST_CASE(PlainTest3)
{
    vector<int> num1{1, 2};
    ListNode* list1 = stringToListNode(num1);
    int n = 1;
    ListNode* result = Solution().removeNthFromEnd(list1, n);
    string result_str = listNodeToString(result);

    string expected = "[1]";
    BOOST_CHECK_EQUAL(result_str, expected);
}

BOOST_AUTO_TEST_SUITE_END()