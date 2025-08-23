#include <catch2/catch_test_macros.hpp>
#include <catch2/matchers/catch_matchers_string.hpp>
#include <catch2/matchers/catch_matchers_vector.hpp>

#include "solution.hpp"


TEST_CASE( "Running solution test 1" ) {
    vector<int> num{3,2,0,-4};
    int pos = 1;
    ListNode* list = stringToListNodeWithCycle(num, pos);

    ListNode* result = Solution().detectCycle(list);

    ListNode* expected = getNodeFromListNode(list, pos);

    REQUIRE( expected == result );
}

TEST_CASE( "Running solution test 2" ) {
    vector<int> num{1,2};
    int pos = 0;
    ListNode* list = stringToListNodeWithCycle(num, pos);

    ListNode* result = Solution().detectCycle(list);

    ListNode* expected = getNodeFromListNode(list, pos);

    REQUIRE( expected == result );
}

TEST_CASE( "Running solution test 3" ) {
    vector<int> num{1};
    int pos = -1;
    ListNode* list = stringToListNodeWithCycle(num, pos);

    ListNode* result = Solution().detectCycle(list);

    ListNode* expected = getNodeFromListNode(list, pos);

    REQUIRE( expected == result );
}
