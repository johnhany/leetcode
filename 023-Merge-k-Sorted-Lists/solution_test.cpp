#include <catch2/catch_test_macros.hpp>
#include <catch2/matchers/catch_matchers_string.hpp>
#include <catch2/matchers/catch_matchers_vector.hpp>

#include "solution.hpp"


TEST_CASE( "Running solution test 1" ) {
    vector<int> num1{1, 4, 5};
    ListNode* list1 = stringToListNode(num1);
    vector<int> num2{1, 3, 4};
    ListNode* list2 = stringToListNode(num2);
    vector<int> num3{2, 6};
    ListNode* list3 = stringToListNode(num3);
    vector<ListNode*> lists{list1, list2, list3};

    ListNode* result = Solution().mergeKLists(lists);
    string result_str = listNodeToString(result);

    string expected = "[1, 1, 2, 3, 4, 4, 5, 6]";

    REQUIRE_THAT( expected, Catch::Matchers::Equals(result_str) );
}

TEST_CASE( "Running solution test 2" ) {
    vector<int> num1{1, 2, 4};
    ListNode* list1 = stringToListNode(num1);
    vector<int> num2{5, 6, 7};
    ListNode* list2 = stringToListNode(num2);
    vector<int> num3{9, 10};
    ListNode* list3 = stringToListNode(num3);
    vector<ListNode*> lists{list1, list2, list3};

    ListNode* result = Solution().mergeKLists(lists);
    string result_str = listNodeToString(result);

    string expected = "[1, 2, 4, 5, 6, 7, 9, 10]";

    REQUIRE_THAT( expected, Catch::Matchers::Equals(result_str) );
}

TEST_CASE( "Running solution test 3" ) {
    vector<int> num1{1, 4, 5};
    ListNode* list1 = stringToListNode(num1);
    vector<int> num2{3};
    ListNode* list2 = stringToListNode(num2);
    vector<int> num3{2};
    ListNode* list3 = stringToListNode(num3);
    vector<ListNode*> lists{list1, list2, list3};

    ListNode* result = Solution().mergeKLists(lists);
    string result_str = listNodeToString(result);

    string expected = "[1, 2, 3, 4, 5]";

    REQUIRE_THAT( expected, Catch::Matchers::Equals(result_str) );
}

TEST_CASE( "Running solution test 4" ) {
    vector<int> num1{};
    ListNode* list1 = stringToListNode(num1);
    vector<int> num2{};
    ListNode* list2 = stringToListNode(num2);
    vector<ListNode*> lists{list1, list2};

    ListNode* result = Solution().mergeKLists(lists);
    string result_str = listNodeToString(result);

    string expected = "[]";

    REQUIRE_THAT( expected, Catch::Matchers::Equals(result_str) );
}

TEST_CASE( "Running solution test 5" ) {
    vector<int> num1{1, 2};
    ListNode* list1 = stringToListNode(num1);
    vector<int> num2{};
    ListNode* list2 = stringToListNode(num2);
    vector<ListNode*> lists{list1, list2};

    ListNode* result = Solution().mergeKLists(lists);
    string result_str = listNodeToString(result);

    string expected = "[1, 2]";

    REQUIRE_THAT( expected, Catch::Matchers::Equals(result_str) );
}

TEST_CASE( "Running solution test 6" ) {
    vector<ListNode*> lists;

    ListNode* result = Solution().mergeKLists(lists);
    string result_str = listNodeToString(result);

    string expected = "[]";

    REQUIRE_THAT( expected, Catch::Matchers::Equals(result_str) );
}

TEST_CASE( "Running solution test 7" ) {
    vector<int> num1{};
    ListNode* list1 = stringToListNode(num1);
    vector<int> num2{1};
    ListNode* list2 = stringToListNode(num2);
    vector<ListNode*> lists{list1, list2};

    ListNode* result = Solution().mergeKLists(lists);
    string result_str = listNodeToString(result);

    string expected = "[1]";

    REQUIRE_THAT( expected, Catch::Matchers::Equals(result_str) );
}

TEST_CASE( "Running solution test 8" ) {
    vector<int> num1{1};
    ListNode* list1 = stringToListNode(num1);
    vector<int> num2{};
    ListNode* list2 = stringToListNode(num2);
    vector<ListNode*> lists{list1, list2};

    ListNode* result = Solution().mergeKLists(lists);
    string result_str = listNodeToString(result);

    string expected = "[1]";

    REQUIRE_THAT( expected, Catch::Matchers::Equals(result_str) );
}

TEST_CASE( "Running solution test 9" ) {
    vector<int> num1{1};
    ListNode* list1 = stringToListNode(num1);
    vector<int> num2{0};
    ListNode* list2 = stringToListNode(num2);
    vector<ListNode*> lists{list1, list2};

    ListNode* result = Solution().mergeKLists(lists);
    string result_str = listNodeToString(result);

    string expected = "[0, 1]";

    REQUIRE_THAT( expected, Catch::Matchers::Equals(result_str) );
}
