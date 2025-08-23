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

using namespace std;


class Solution {
public:
    int maxSubArray(vector<int>& nums);
    int max(int a, int b, int c);
    int maxCrossingSum(vector<int>& nums, int l, int m, int h);
    int maxSubArraySum(vector<int>& nums, int l, int h);
};

#endif