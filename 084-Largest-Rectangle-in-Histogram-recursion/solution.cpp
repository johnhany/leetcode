#include "solution.hpp"

int Solution::largestRectangleArea(vector<int>& heights) {
	if (heights.empty()) return 0;
	list<pair<int, int>> lowest;
	for (int i = 0; i < heights.size(); ++i)
		lowest.emplace_back(make_pair(heights[i], i));
	lowest.sort([](const pair<int, int>& a, const pair<int, int>& b) {return a.first < b.first;});
	return findRect(heights, lowest, 0, heights.size()-1);
}

int Solution::findRect(vector<int>& heights, list<pair<int, int>>& lowest, int start, int end) {
	if (start > end)
		return 0;
	else if (start == end)
		return heights[start];
	auto itr = lowest.begin();
	int k;
	while (itr != lowest.end()) {
		int i = itr->second;
		if (i >= start && i <= end) {
			k = i;
			break;
		}
		itr++;
	}
	if (itr == lowest.end())
		return 0;
	lowest.erase(itr);
	int middle = (end - start + 1) * heights[k];
	int left = findRect(heights, lowest, start, k-1);
	int right = findRect(heights, lowest, k+1, end);
	return std::max(left, std::max(middle, right));
}
