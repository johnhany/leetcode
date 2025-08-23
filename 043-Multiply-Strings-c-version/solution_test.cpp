#include <catch2/catch_test_macros.hpp>
#include <catch2/matchers/catch_matchers_string.hpp>
#include <catch2/matchers/catch_matchers_vector.hpp>

#include "solution.hpp"


TEST_CASE( "Running solution test 1" ) {
    string num1 = "2";
    string num2 = "3";
    string result = Solution().multiply(num1, num2);

    string expected = "6";
    REQUIRE( result == expected );
}

TEST_CASE( "Running solution test 2" ) {
    string num1 = "123";
    string num2 = "456";
    string result = Solution().multiply(num1, num2);

    string expected = "56088";
    REQUIRE( result == expected );
}

TEST_CASE( "Running solution test 3" ) {
    string num1 = "0";
    string num2 = "0";
    string result = Solution().multiply(num1, num2);

    string expected = "0";
    REQUIRE( result == expected );
}

TEST_CASE( "Running solution test 5" ) {
    string num1 = "999";
    string num2 = "999";
    string result = Solution().multiply(num1, num2);

    string expected = "998001";
    REQUIRE( result == expected );
}
