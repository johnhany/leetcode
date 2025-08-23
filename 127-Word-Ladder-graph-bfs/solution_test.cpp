#include <catch2/catch_test_macros.hpp>
#include <catch2/matchers/catch_matchers_string.hpp>
#include <catch2/matchers/catch_matchers_vector.hpp>

#include "solution.hpp"


TEST_CASE( "Running solution test 1" ) {
    string beginWord = "hit";
    string endWord = "cog";
    vector<string> wordList{"hot","dot","dog","lot","log","cog"};
    int results = Solution().ladderLength(beginWord, endWord, wordList);

    int expected = 5;

    REQUIRE( results == expected );
}

TEST_CASE( "Running solution test 2" ) {
    string beginWord = "hit";
    string endWord = "cog";
    vector<string> wordList{"hot","dot","dog","lot","log"};
    int results = Solution().ladderLength(beginWord, endWord, wordList);

    int expected = 0;

    REQUIRE( results == expected );
}

