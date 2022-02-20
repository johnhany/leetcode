#define BOOST_TEST_MODULE SolutionTest

#include "solution.hpp"

//#define BOOST_TEST_DYN_LINK
#include <boost/test/unit_test.hpp>

BOOST_AUTO_TEST_SUITE(SolutionSuite)

BOOST_AUTO_TEST_CASE(PlainTest1)
{
    string line = "1,2,3,4,null,2,4,null,null,4";
    TreeNode* root = stringToTreeNode(line);
    vector<TreeNode*> result = Solution().findDuplicateSubtrees(root);
    vector<string> resultVec;
    for (TreeNode* t: result) {
        resultVec.push_back(treeNodeToString(t));
    }

    vector<string> expected{
        "[4,null,null]",
        "[2,4,null,null,null]"
    };

    BOOST_CHECK_EQUAL_COLLECTIONS(resultVec.begin(), resultVec.end(),
                                  expected.begin(), expected.end());
}

BOOST_AUTO_TEST_SUITE_END()