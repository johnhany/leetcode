#include <catch2/catch_test_macros.hpp>
#include <catch2/matchers/catch_matchers_string.hpp>
#include <catch2/matchers/catch_matchers_vector.hpp>

#include "solution.hpp"


TEST_CASE( "Running solution test 1" ) {
    vector<vector<char>> board{
        {'X', 'X', 'X', 'X'},
        {'X', 'O', 'O', 'X'},
        {'X', 'X', 'O', 'X'},
        {'X', 'O', 'X', 'X'}
    };
    Solution().solve(board);

    vector<vector<char>> expected{
        {'X', 'X', 'X', 'X'},
        {'X', 'X', 'X', 'X'},
        {'X', 'X', 'X', 'X'},
        {'X', 'O', 'X', 'X'}
    };

    REQUIRE( board.size() == expected.size() );
    for (int i = 0; i < board.size(); i++)
        REQUIRE_THAT( board[i], Catch::Matchers::Equals(expected[i]) );
}

TEST_CASE( "Running solution test 2" ) {
    vector<vector<char>> board{
        {'O','O','O','O','X','X'},
        {'O','O','O','O','O','O'},
        {'O','X','O','X','O','O'},
        {'O','X','O','O','X','O'},
        {'O','X','O','X','O','O'},
        {'O','X','O','O','O','O'}
    };
    Solution().solve(board);

    vector<vector<char>> expected{
        {'O','O','O','O','X','X'},
        {'O','O','O','O','O','O'},
        {'O','X','O','X','O','O'},
        {'O','X','O','O','X','O'},
        {'O','X','O','X','O','O'},
        {'O','X','O','O','O','O'}
    };

    REQUIRE( board.size() == expected.size() );
    for (int i = 0; i < board.size(); i++)
        REQUIRE_THAT( board[i], Catch::Matchers::Equals(expected[i]) );
}

