#ifndef SOLUTION_029
#define SOLUTION_029

#include <iostream>
#include <vector>
#include <map>
#include <queue>
#include <set>
#include <string>
#include <algorithm>
#include <list>
#include <iterator>

using namespace std;


class Solution {
public:
	vector<vector<int>> permuteUnique(vector<int>& nums);
	void perm(vector<vector<int>>& res, vector<int> nums, int pos);
};

#endif