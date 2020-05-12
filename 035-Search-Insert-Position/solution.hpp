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
	int searchInsert(vector<int>& nums, int target);
	int binarySearch(vector<int>& nums, int target, int start, int end);
};

#endif