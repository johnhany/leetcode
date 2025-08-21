#include <catch2/catch_test_macros.hpp>
#include <catch2/matchers/catch_matchers_string.hpp>
#include <catch2/matchers/catch_matchers_vector.hpp>

#include "solution.hpp"


TEST_CASE( "Running solution test 1" ) {
    string s = "barfoothefoobarman";
    vector<string> words{
        "foo","bar"
    };

    vector<int> result = Solution().findSubstring(s, words);

    vector<int> expected{0, 9};

    REQUIRE_THAT( expected, Catch::Matchers::Equals(result) );
}

TEST_CASE( "Running solution test 2" ) {
    string s = "wordgoodgoodgoodbestword";
    vector<string> words{
        "word","good","best","word"
    };

    vector<int> result = Solution().findSubstring(s, words);

    vector<int> expected{};

    REQUIRE_THAT( expected, Catch::Matchers::Equals(result) );
}

TEST_CASE( "Running solution test 3" ) {
    string s = "foofoobarbar";
    vector<string> words{
        "foo","bar"
    };

    vector<int> result = Solution().findSubstring(s, words);

    vector<int> expected{3};

    REQUIRE_THAT( expected, Catch::Matchers::Equals(result) );
}

TEST_CASE( "Running solution test 4" ) {
    string s = "barfoofoobarthefoobarman";
    vector<string> words{
        "bar","foo","the"
    };

    vector<int> result = Solution().findSubstring(s, words);

    vector<int> expected{6, 9, 12};

    REQUIRE_THAT( expected, Catch::Matchers::Equals(result) );
}

TEST_CASE( "Running solution test 5" ) {
    string s = "wordgoodgoodgoodbestword";
    vector<string> words{
        "word","good","best","good"
    };

    vector<int> result = Solution().findSubstring(s, words);

    vector<int> expected{8};

    REQUIRE_THAT( expected, Catch::Matchers::Equals(result) );
}
