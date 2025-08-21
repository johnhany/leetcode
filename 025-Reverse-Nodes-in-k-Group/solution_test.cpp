#include <catch2/catch_test_macros.hpp>
#include <catch2/matchers/catch_matchers_string.hpp>
#include <catch2/matchers/catch_matchers_vector.hpp>

#include "solution.hpp"


TEST_CASE( "Running solution test 1" ) {
    vector<int> num{1, 2, 3, 4, 5};
    int k = 2;
    ListNode* head = stringToListNode(num);

    ListNode* result = Solution().reverseKGroup(head, k);
    string result_str = listNodeToString(result);

    string expected = "[2, 1, 4, 3, 5]";

    REQUIRE_THAT( expected, Catch::Matchers::Equals(result_str) );
}

TEST_CASE( "Running solution test 2" ) {
    vector<int> num{1, 2, 3, 4, 5};
    int k = 3;
    ListNode* head = stringToListNode(num);

    ListNode* result = Solution().reverseKGroup(head, k);
    string result_str = listNodeToString(result);

    string expected = "[3, 2, 1, 4, 5]";

    REQUIRE_THAT( expected, Catch::Matchers::Equals(result_str) );
}
