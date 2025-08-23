#include <catch2/catch_test_macros.hpp>
#include <catch2/matchers/catch_matchers_string.hpp>
#include <catch2/matchers/catch_matchers_vector.hpp>

#include "solution.hpp"


TEST_CASE( "Running solution test 1" ) {
    vector<int> num1{1,4,3,2,5,2};
    ListNode* list1 = stringToListNode(num1);
    int k = 3;

    ListNode* results = Solution().partition(list1, k);
    string result_str = listNodeToString(results);

    string expected = "[1,2,2,4,3,5]";

    REQUIRE_THAT( result_str, Catch::Matchers::Equals(expected) );
}

TEST_CASE( "Running solution test 2" ) {
    vector<int> num1{2,1};
    ListNode* list1 = stringToListNode(num1);
    int k = 2;

    ListNode* results = Solution().partition(list1, k);
    string result_str = listNodeToString(results);

    string expected = "[1,2]";

    REQUIRE_THAT( result_str, Catch::Matchers::Equals(expected) );
}
