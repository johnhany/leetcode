#include <catch2/catch_test_macros.hpp>
#include <catch2/matchers/catch_matchers_string.hpp>
#include <catch2/matchers/catch_matchers_vector.hpp>

#include "solution.hpp"

struct less_than_key {
    inline bool operator() (const vector<int>& vec1, const vector<int>& vec2) {
        if (vec1.size() == vec2.size()) {
            for (int i = 0; i < vec1.size(); i++) {
                if (vec1[i] < vec2[i]) return true;
                else if (vec1[i] > vec2[i]) return false;
            }
        } else if (vec1.size() < vec2.size())
            return true;
        return false;
    }
};


TEST_CASE( "Running solution test 1" ) {
    vector<int> nums{1,2,3};
    vector<vector<int>> results = Solution().subsets(nums);

    vector<vector<int>> expected = {
        {3},
        {1},
        {2},
        {1,2,3},
        {1,3},
        {2,3},
        {1,2},
        {}
    };

    sort(results.begin(), results.end(), less_than_key());
    sort(expected.begin(), expected.end(), less_than_key());

    REQUIRE( results.size() == expected.size() );

    for (int i = 0; i < results.size(); i++)
        REQUIRE_THAT( results[i], Catch::Matchers::Equals(expected[i]) );
}
