#include <catch2/catch_test_macros.hpp>
#include <catch2/matchers/catch_matchers_string.hpp>
#include <catch2/matchers/catch_matchers_vector.hpp>

#include "solution.hpp"


TEST_CASE( "Running solution test 1" ) {
    vector<string> strs{"flower","flow","flight"};

    string expected = "fl";

    REQUIRE_THAT( Solution().longestCommonPrefix(strs), Catch::Matchers::Equals(expected) );
}

TEST_CASE( "Running solution test 2" ) {
    vector<string> strs{"dog","racecar","car"};

    string expected = "";

    REQUIRE_THAT( Solution().longestCommonPrefix(strs), Catch::Matchers::Equals(expected) );
}

TEST_CASE( "Running solution test 3" ) {
    vector<string> strs{};

    string expected = "";

    REQUIRE_THAT( Solution().longestCommonPrefix(strs), Catch::Matchers::Equals(expected) );
}

TEST_CASE( "Running solution test 4" ) {
    vector<string> strs{"flower","flow",""};

    string expected = "";

    REQUIRE_THAT( Solution().longestCommonPrefix(strs), Catch::Matchers::Equals(expected) );
}

TEST_CASE( "Running solution test 5" ) {
    vector<string> strs{"abb","abc"};

    string expected = "ab";

    REQUIRE_THAT( Solution().longestCommonPrefix(strs), Catch::Matchers::Equals(expected) );
}
