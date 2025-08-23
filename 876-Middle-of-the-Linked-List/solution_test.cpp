#include <catch2/catch_test_macros.hpp>
#include <catch2/matchers/catch_matchers_string.hpp>
#include <catch2/matchers/catch_matchers_vector.hpp>

#include "solution.hpp"


TEST_CASE( "Running solution test 1" ) {
    vector<int> num1{1,2,3,4,5};
    ListNode* head = stringToListNode(num1);
    ListNode* result = Solution().middleNode(head);
    string result_str = listNodeToString(result);

    string expected = "[3, 4, 5]";
    REQUIRE_THAT( result_str, Catch::Matchers::Equals(expected) );
}

TEST_CASE( "Running solution test 2" ) {
    vector<int> num1{1,2,3,4,5,6};
    ListNode* head = stringToListNode(num1);
    ListNode* result = Solution().middleNode(head);
    string result_str = listNodeToString(result);

    string expected = "[4, 5, 6]";
    REQUIRE_THAT( result_str, Catch::Matchers::Equals(expected) );
}
