#include <catch2/catch_test_macros.hpp>
#include <catch2/matchers/catch_matchers_string.hpp>
#include <catch2/matchers/catch_matchers_vector.hpp>

#include "solution.hpp"


TEST_CASE( "Running solution test 1" ) {
    string roman = "III";

    int expected = 3;

    REQUIRE( Solution().romanToInt(roman) == expected );
}

TEST_CASE( "Running solution test 2" ) {
    string roman = "IV";

    int expected = 4;

    REQUIRE( Solution().romanToInt(roman) == expected );
}

TEST_CASE( "Running solution test 3" ) {
    string roman = "IX";

    int expected = 9;

    REQUIRE( Solution().romanToInt(roman) == expected );
}

TEST_CASE( "Running solution test 4" ) {
    string roman = "LVIII";

    int expected = 58;

    REQUIRE( Solution().romanToInt(roman) == expected );
}

TEST_CASE( "Running solution test 5" ) {
    string roman = "MCMXCIV";

    int expected = 1994;

    REQUIRE( Solution().romanToInt(roman) == expected );
}

TEST_CASE( "Running solution test 6" ) {
    string roman = "";

    int expected = 0;

    REQUIRE( Solution().romanToInt(roman) == expected );
}
