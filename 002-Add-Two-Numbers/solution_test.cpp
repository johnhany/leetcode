#include <catch2/catch_test_macros.hpp>
#include <catch2/matchers/catch_matchers_string.hpp>
#include <catch2/matchers/catch_matchers_vector.hpp>

#include "solution.hpp"


TEST_CASE( "Running solution test 1" ) {
    vector<int> num1{2, 4, 3};
    ListNode* list1 = stringToListNode(num1);
    vector<int> num2{5, 6, 4};
    ListNode* list2 = stringToListNode(num2);

    string expected = "[7, 0, 8]";

    REQUIRE_THAT( expected, Catch::Matchers::Equals(listNodeToString(Solution().addTwoNumbers(list1, list2))) );
}
