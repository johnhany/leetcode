#define BOOST_TEST_MODULE SolutionTest

#include "solution.hpp"

// #define BOOST_TEST_DYN_LINK
#include <boost/test/unit_test.hpp>

BOOST_AUTO_TEST_SUITE(SolutionSuite)

BOOST_AUTO_TEST_CASE(PlainTest1)
{
    vector<string> grid{
        "@.a.#",
        "###.#",
        "b.A.B"
    };
    int results = Solution().shortestPathAllKeys(grid);

    int expected = 8;
    BOOST_CHECK_EQUAL(results, expected);
}

BOOST_AUTO_TEST_CASE(PlainTest2)
{
    vector<string> grid{
        "@..aA",
        "..B#.",
        "....b"
    };
    int results = Solution().shortestPathAllKeys(grid);

    int expected = 6;
    BOOST_CHECK_EQUAL(results, expected);
}

BOOST_AUTO_TEST_CASE(PlainTest3)
{
    vector<string> grid{
        "@Aa"
    };
    int results = Solution().shortestPathAllKeys(grid);

    int expected = -1;
    BOOST_CHECK_EQUAL(results, expected);
}

BOOST_AUTO_TEST_SUITE_END()