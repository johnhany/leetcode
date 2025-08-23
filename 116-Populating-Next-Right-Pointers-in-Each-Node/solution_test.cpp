#include <catch2/catch_test_macros.hpp>
#include <catch2/matchers/catch_matchers_string.hpp>
#include <catch2/matchers/catch_matchers_vector.hpp>

#include "solution.hpp"


TEST_CASE( "Running solution test 1" ) {
    string nums = "1,2,3,4,5,6,7";
    Node *root = stringToNode(nums);
    root = Solution().connect(root);
    string result = NodeToString(root);

    string expected = "[1,2,3,4,5,6,7]";

    REQUIRE( result == expected );
}
