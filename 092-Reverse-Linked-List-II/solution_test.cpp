#include <catch2/catch_test_macros.hpp>
#include <catch2/matchers/catch_matchers_string.hpp>
#include <catch2/matchers/catch_matchers_vector.hpp>

#include "solution.hpp"


TEST_CASE( "Running solution test 1" ) {
    vector<int> num1{1,2,3,4,5};
    int left = 2, right = 4;
    ListNode* head = stringToListNode(num1);
    ListNode* result = Solution().reverseBetween(head, left, right);
    string result_str = listNodeToString(result);

    string expected = "[1, 4, 3, 2, 5]";
    REQUIRE_THAT( result_str, Catch::Matchers::Equals(expected) );
}

TEST_CASE( "Running solution test 2" ) {
    vector<int> num1{5};
    int left = 1, right = 1;
    ListNode* head = stringToListNode(num1);
    ListNode* result = Solution().reverseBetween(head, left, right);
    string result_str = listNodeToString(result);

    string expected = "[5]";
    REQUIRE_THAT( result_str, Catch::Matchers::Equals(expected) );
}
