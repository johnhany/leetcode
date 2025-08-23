#include <catch2/catch_test_macros.hpp>
#include <catch2/matchers/catch_matchers_string.hpp>
#include <catch2/matchers/catch_matchers_vector.hpp>

#include "solution.hpp"


TEST_CASE( "Running solution test 1" ) {
    string s = "A man, a plan, a canal: Panama";
    bool results = Solution().isPalindrome(s);

    bool expected = true;

    REQUIRE( results == expected );
}

TEST_CASE( "Running solution test 2" ) {
    string s = "race a car";
    bool results = Solution().isPalindrome(s);

    bool expected = false;

    REQUIRE( results == expected );
}

TEST_CASE( "Running solution test 3" ) {
    string s = "0P";
    bool results = Solution().isPalindrome(s);

    bool expected = false;

    REQUIRE( results == expected );
}

TEST_CASE( "Running solution test 4" ) {
    string s = "0P,";
    bool results = Solution().isPalindrome(s);

    bool expected = false;

    REQUIRE( results == expected );
}
