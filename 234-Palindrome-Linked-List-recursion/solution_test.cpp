#include <catch2/catch_test_macros.hpp>
#include <catch2/matchers/catch_matchers_string.hpp>
#include <catch2/matchers/catch_matchers_vector.hpp>

#include "solution.hpp"


TEST_CASE( "Running solution test 1" ) {
    vector<int> num1{1,2,2,1};
    ListNode* head = stringToListNode(num1);
    bool result = Solution().isPalindrome(head);

    bool expected = true;
    REQUIRE( result == expected );
}

TEST_CASE( "Running solution test 2" ) {
    vector<int> num1{1,2};
    ListNode* head = stringToListNode(num1);
    bool result = Solution().isPalindrome(head);

    bool expected = false;
    REQUIRE( result == expected );
}
