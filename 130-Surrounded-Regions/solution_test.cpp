#define BOOST_TEST_MODULE SolutionTest

#include "solution.hpp"

//#define BOOST_TEST_DYN_LINK
#include <boost/test/unit_test.hpp>

BOOST_AUTO_TEST_SUITE(SolutionSuite)

BOOST_AUTO_TEST_CASE(PlainTest1)
{
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

    BOOST_CHECK_EQUAL(board.size(), expected.size());
    for (int i = 0; i < board.size(); i++)
        BOOST_CHECK_EQUAL_COLLECTIONS(board[i].begin(), board[i].end(), expected[i].begin(), expected[i].end());
}

BOOST_AUTO_TEST_CASE(PlainTest2)
{
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

    BOOST_CHECK_EQUAL(board.size(), expected.size());
    for (int i = 0; i < board.size(); i++)
        BOOST_CHECK_EQUAL_COLLECTIONS(board[i].begin(), board[i].end(), expected[i].begin(), expected[i].end());
}


BOOST_AUTO_TEST_SUITE_END()