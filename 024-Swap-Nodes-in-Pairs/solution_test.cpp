#include <catch2/catch_test_macros.hpp>
#include <catch2/matchers/catch_matchers_string.hpp>
#include <catch2/matchers/catch_matchers_vector.hpp>

#include "solution.hpp"


TEST_CASE( "Running solution test 1" ) {
    vector<int> num{1, 2, 3, 4};
    ListNode* head = stringToListNode(num);

    ListNode* result = Solution().swapPairs(head);
    string result_str = listNodeToString(result);

    string expected = "[2, 1, 4, 3]";

    REQUIRE_THAT( expected, Catch::Matchers::Equals(result_str) );
}

TEST_CASE( "Running solution test 2" ) {
    vector<int> num{1, 2, 3};
    ListNode* head = stringToListNode(num);

    ListNode* result = Solution().swapPairs(head);
    string result_str = listNodeToString(result);

    string expected = "[2, 1, 3]";

    REQUIRE_THAT( expected, Catch::Matchers::Equals(result_str) );
}
