#ifndef SOLUTION_029
#define SOLUTION_029

#include <iostream>
#include <vector>
#include <map>
#include <queue>
#include <set>
#include <string>
#include <sstream>
#include <algorithm>
#include <list>
#include <iterator>
#include <unordered_map>
#include <unordered_set>
#include <stack>

using namespace std;


class Solution {
public:
    int findKthLargest(vector<int>& nums, int k);
    int quickSortKthElement(vector<int>& nums, int k, int left, int right);
};

#endif