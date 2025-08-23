#include <catch2/catch_test_macros.hpp>
#include <catch2/matchers/catch_matchers_string.hpp>
#include <catch2/matchers/catch_matchers_vector.hpp>

#include "solution.hpp"


TEST_CASE( "Running solution test 1" ) {
    vector<vector<char>> board{
        {'A','B','C','E'},
        {'S','F','C','S'},
        {'A','D','E','E'}
    };
    string word = "ABCCED";
    bool result = Solution().exist(board, word);

    bool expected = true;

    REQUIRE( result == expected );
}

TEST_CASE( "Running solution test 2" ) {
    vector<vector<char>> board{
        {'A','B','C','E'},
        {'S','F','C','S'},
        {'A','D','E','E'}
    };
    string word = "SEE";
    bool result = Solution().exist(board, word);

    bool expected = true;

    REQUIRE( result == expected );
}

TEST_CASE( "Running solution test 3" ) {
    vector<vector<char>> board{
        {'A','B','C','E'},
        {'S','F','C','S'},
        {'A','D','E','E'}
    };
    string word = "ABCB";
    bool result = Solution().exist(board, word);

    bool expected = false;

    REQUIRE( result == expected );
}

TEST_CASE( "Running solution test 5" ) {
    vector<vector<char>> board{
        {'A'},
    };
    string word = "A";
    bool result = Solution().exist(board, word);

    bool expected = true;

    REQUIRE( result == expected );
}

TEST_CASE( "Running solution test 6" ) {
    vector<vector<char>> board{
        {'A'},
    };
    string word = "B";
    bool result = Solution().exist(board, word);

    bool expected = false;

    REQUIRE( result == expected );
}

TEST_CASE( "Running solution test 7" ) {
    vector<vector<char>> board{
        {'C','A','A'},
        {'A','A','A'},
        {'B','C','D'}
    };
    string word = "AAB";
    bool result = Solution().exist(board, word);

    bool expected = true;

    REQUIRE( result == expected );
}

TEST_CASE( "Running solution test 8" ) {
    vector<vector<char>> board{
        {'A','B','C','E'},
        {'S','F','E','S'},
        {'A','D','E','E'}
    };
    string word = "ABCESEEEFS";
    bool result = Solution().exist(board, word);

    bool expected = true;

    REQUIRE( result == expected );
}
