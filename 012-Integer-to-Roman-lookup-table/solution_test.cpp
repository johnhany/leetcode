#include <catch2/catch_test_macros.hpp>
#include <catch2/matchers/catch_matchers_string.hpp>
#include <catch2/matchers/catch_matchers_vector.hpp>

#include "solution.hpp"


TEST_CASE( "Running solution test 1" ) {
    int num = 3;

    string expected = "III";

    REQUIRE_THAT( Solution().intToRoman(num), Catch::Matchers::Equals(expected) );
}

TEST_CASE( "Running solution test 2" ) {
    int num = 4;

    string expected = "IV";

    REQUIRE_THAT( Solution().intToRoman(num), Catch::Matchers::Equals(expected) );
}

TEST_CASE( "Running solution test 3" ) {
    int num = 9;

    string expected = "IX";

    REQUIRE_THAT( Solution().intToRoman(num), Catch::Matchers::Equals(expected) );
}

TEST_CASE( "Running solution test 4" ) {
    int num = 58;

    string expected = "LVIII";

    REQUIRE_THAT( Solution().intToRoman(num), Catch::Matchers::Equals(expected) );
}

TEST_CASE( "Running solution test 5" ) {
    int num = 1994;

    string expected = "MCMXCIV";

    REQUIRE_THAT( Solution().intToRoman(num), Catch::Matchers::Equals(expected) );
}

TEST_CASE( "Running solution test 6" ) {
    int num = 0;

    string expected = "";

    REQUIRE_THAT( Solution().intToRoman(num), Catch::Matchers::Equals(expected) );
}
