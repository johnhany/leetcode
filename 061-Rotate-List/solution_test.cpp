#include <catch2/catch_test_macros.hpp>
#include <catch2/matchers/catch_matchers_string.hpp>
#include <catch2/matchers/catch_matchers_vector.hpp>

#include "solution.hpp"


TEST_CASE( "Running solution test 1" ) {
    vector<int> num1{1,2,3,4,5};
    ListNode* list1 = stringToListNode(num1);
    int k = 2;

    ListNode* results = Solution().rotateRight(list1, k);
    string result_str = listNodeToString(results);

    string expected = "[4,5,1,2,3]";

    REQUIRE_THAT( result_str, Catch::Matchers::Equals(expected) );
}

TEST_CASE( "Running solution test 2" ) {
    vector<int> num1{0,1,2};
    ListNode* list1 = stringToListNode(num1);
    int k = 4;

    ListNode* results = Solution().rotateRight(list1, k);
    string result_str = listNodeToString(results);

    string expected = "[2,0,1]";

    REQUIRE_THAT( result_str, Catch::Matchers::Equals(expected) );
}
