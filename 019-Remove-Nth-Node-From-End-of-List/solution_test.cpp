#include <catch2/catch_test_macros.hpp>
#include <catch2/matchers/catch_matchers_string.hpp>
#include <catch2/matchers/catch_matchers_vector.hpp>

#include "solution.hpp"


TEST_CASE( "Running solution test 1" ) {
    vector<int> num1{1, 2, 3, 4, 5};
    ListNode* list1 = stringToListNode(num1);
    int n = 2;

    ListNode* result = Solution().removeNthFromEnd(list1, n);
    string result_str = listNodeToString(result);
    string expected = "[1, 2, 3, 5]";

    REQUIRE_THAT( expected, Catch::Matchers::Equals(result_str) );
}

TEST_CASE( "Running solution test 2" ) {
    vector<int> num1{1, 2, 3, 4, 5};
    ListNode* list1 = stringToListNode(num1);
    int n = 5;

    ListNode* result = Solution().removeNthFromEnd(list1, n);
    string result_str = listNodeToString(result);
    string expected = "[2, 3, 4, 5]";

    REQUIRE_THAT( expected, Catch::Matchers::Equals(result_str) );
}

TEST_CASE( "Running solution test 3" ) {
    vector<int> num1{1, 2};
    ListNode* list1 = stringToListNode(num1);
    int n = 1;

    ListNode* result = Solution().removeNthFromEnd(list1, n);
    string result_str = listNodeToString(result);
    string expected = "[1]";

    REQUIRE_THAT( expected, Catch::Matchers::Equals(result_str) );
}
