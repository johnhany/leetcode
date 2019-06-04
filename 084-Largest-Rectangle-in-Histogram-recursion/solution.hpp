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
#include <unordered_map>
#include <unordered_set>

using namespace std;


class Solution {
public:
	int largestRectangleArea(vector<int>& heights);
	int findRect(vector<int>& heights, list<pair<int, int>>& lowest, int start, int end);
};

#endif