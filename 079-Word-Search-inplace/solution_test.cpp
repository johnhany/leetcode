#define BOOST_TEST_MODULE SolutionTest

#include "solution.hpp"

//#define BOOST_TEST_DYN_LINK
#include <boost/test/unit_test.hpp>

BOOST_AUTO_TEST_SUITE(SolutionSuite)

BOOST_AUTO_TEST_CASE(PlainTest1)
{
    vector<vector<char>> board{
        {'A','B','C','E'},
        {'S','F','C','S'},
        {'A','D','E','E'}
    };
    string word = "ABCCED";
    bool result = Solution().exist(board, word);

    bool expected = true;

    BOOST_CHECK_EQUAL(result, expected);
}

BOOST_AUTO_TEST_CASE(PlainTest2)
{
    vector<vector<char>> board{
        {'A','B','C','E'},
        {'S','F','C','S'},
        {'A','D','E','E'}
    };
    string word = "SEE";
    bool result = Solution().exist(board, word);

    bool expected = true;

    BOOST_CHECK_EQUAL(result, expected);
}

BOOST_AUTO_TEST_CASE(PlainTest3)
{
    vector<vector<char>> board{
        {'A','B','C','E'},
        {'S','F','C','S'},
        {'A','D','E','E'}
    };
    string word = "ABCB";
    bool result = Solution().exist(board, word);

    bool expected = false;

    BOOST_CHECK_EQUAL(result, expected);
}

BOOST_AUTO_TEST_CASE(PlainTest5)
{
    vector<vector<char>> board{
        {'A'},
    };
    string word = "A";
    bool result = Solution().exist(board, word);

    bool expected = true;

    BOOST_CHECK_EQUAL(result, expected);
}

BOOST_AUTO_TEST_CASE(PlainTest6)
{
    vector<vector<char>> board{
        {'A'},
    };
    string word = "B";
    bool result = Solution().exist(board, word);

    bool expected = false;

    BOOST_CHECK_EQUAL(result, expected);
}

BOOST_AUTO_TEST_CASE(PlainTest7)
{
    vector<vector<char>> board{
        {'C','A','A'},
        {'A','A','A'},
        {'B','C','D'}
    };
    string word = "AAB";
    bool result = Solution().exist(board, word);

    bool expected = true;

    BOOST_CHECK_EQUAL(result, expected);
}

BOOST_AUTO_TEST_CASE(PlainTest8)
{
    vector<vector<char>> board{
        {'A','B','C','E'},
        {'S','F','E','S'},
        {'A','D','E','E'}
    };
    string word = "ABCESEEEFS";
    bool result = Solution().exist(board, word);

    bool expected = true;

    BOOST_CHECK_EQUAL(result, expected);
}

BOOST_AUTO_TEST_SUITE_END()