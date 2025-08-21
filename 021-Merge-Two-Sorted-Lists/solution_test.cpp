#include <catch2/catch_test_macros.hpp>
#include <catch2/matchers/catch_matchers_string.hpp>
#include <catch2/matchers/catch_matchers_vector.hpp>

#include "solution.hpp"


TEST_CASE( "Running solution test 1" ) {
    vector<int> num1{1, 2, 4};
    ListNode* list1 = stringToListNode(num1);
    vector<int> num2{1, 3, 4};
    ListNode* list2 = stringToListNode(num2);

    ListNode* result = Solution().mergeTwoLists(list1, list2);
    string result_str = listNodeToString(result);

    string expected = "[1, 1, 2, 3, 4, 4]";

    REQUIRE_THAT( expected, Catch::Matchers::Equals(result_str) );
}

TEST_CASE( "Running solution test 2" ) {
    vector<int> num1{1, 2, 4};
    ListNode* list1 = stringToListNode(num1);
    vector<int> num2{5, 6, 7};
    ListNode* list2 = stringToListNode(num2);

    ListNode* result = Solution().mergeTwoLists(list1, list2);
    string result_str = listNodeToString(result);

    string expected = "[1, 2, 4, 5, 6, 7]";

    REQUIRE_THAT( expected, Catch::Matchers::Equals(result_str) );
}

TEST_CASE( "Running solution test 3" ) {
    vector<int> num1{1, 2, 4};
    ListNode* list1 = stringToListNode(num1);
    vector<int> num2{3};
    ListNode* list2 = stringToListNode(num2);

    ListNode* result = Solution().mergeTwoLists(list1, list2);
    string result_str = listNodeToString(result);

    string expected = "[1, 2, 3, 4]";

    REQUIRE_THAT( expected, Catch::Matchers::Equals(result_str) );
}

TEST_CASE( "Running solution test 4" ) {
    vector<int> num1{};
    ListNode* list1 = stringToListNode(num1);
    vector<int> num2{};
    ListNode* list2 = stringToListNode(num2);

    ListNode* result = Solution().mergeTwoLists(list1, list2);
    string result_str = listNodeToString(result);

    string expected = "[]";

    REQUIRE_THAT( expected, Catch::Matchers::Equals(result_str) );
}

TEST_CASE( "Running solution test 5" ) {
    vector<int> num1{1, 2};
    ListNode* list1 = stringToListNode(num1);
    vector<int> num2{};
    ListNode* list2 = stringToListNode(num2);

    ListNode* result = Solution().mergeTwoLists(list1, list2);
    string result_str = listNodeToString(result);

    string expected = "[1, 2]";

    REQUIRE_THAT( expected, Catch::Matchers::Equals(result_str) );
}
