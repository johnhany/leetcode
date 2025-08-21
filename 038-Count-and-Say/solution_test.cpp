#include <catch2/catch_test_macros.hpp>
#include <catch2/matchers/catch_matchers_string.hpp>
#include <catch2/matchers/catch_matchers_vector.hpp>

#include "solution.hpp"


TEST_CASE( "Running solution test 1" ) {
    int n = 1;
    string result = Solution().countAndSay(n);

    string expected = "1";

    REQUIRE_THAT( expected, Catch::Matchers::Equals(result) );
}

TEST_CASE( "Running solution test 2" ) {
    int n = 2;
    string result = Solution().countAndSay(n);

    string expected = "11";

    REQUIRE_THAT( expected, Catch::Matchers::Equals(result) );
}

TEST_CASE( "Running solution test 3" ) {
    int n = 3;
    string result = Solution().countAndSay(n);

    string expected = "21";

    REQUIRE_THAT( expected, Catch::Matchers::Equals(result) );
}

TEST_CASE( "Running solution test 4" ) {
    int n = 4;
    string result = Solution().countAndSay(n);

    string expected = "1211";

    REQUIRE_THAT( expected, Catch::Matchers::Equals(result) );
}

TEST_CASE( "Running solution test 5" ) {
    int n = 5;
    string result = Solution().countAndSay(n);

    string expected = "111221";

    REQUIRE_THAT( expected, Catch::Matchers::Equals(result) );
}

TEST_CASE( "Running solution test 6" ) {
    int n = 6;
    string result = Solution().countAndSay(n);

    string expected = "312211";

    REQUIRE_THAT( expected, Catch::Matchers::Equals(result) );
}

TEST_CASE( "Running solution test 7" ) {
    int n = 7;
    string result = Solution().countAndSay(n);

    string expected = "13112221";

    REQUIRE_THAT( expected, Catch::Matchers::Equals(result) );
}

TEST_CASE( "Running solution test 8" ) {
    int n = 8;
    string result = Solution().countAndSay(n);

    string expected = "1113213211";

    REQUIRE_THAT( expected, Catch::Matchers::Equals(result) );
}

TEST_CASE( "Running solution test 9" ) {
    int n = 9;
    string result = Solution().countAndSay(n);

    string expected = "31131211131221";

    REQUIRE_THAT( expected, Catch::Matchers::Equals(result) );
}

TEST_CASE( "Running solution test 10" ) {
    int n = 10;
    string result = Solution().countAndSay(n);

    string expected = "13211311123113112211";

    REQUIRE_THAT( expected, Catch::Matchers::Equals(result) );
}
