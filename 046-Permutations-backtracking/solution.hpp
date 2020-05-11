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
	vector<vector<int>> permute(vector<int>&);
	void perm(vector<vector<int>>& vec, vector<int> nums, int index);
};

#endif