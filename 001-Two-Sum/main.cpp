#include "solution.hpp"

int main()
{
	vector<int> nums{2, 7, 11, 15};
	int target = 9;
	vector<int> results = Solution().twoSum(nums, target);
	for (vector<int>::iterator itr = results.begin(); itr != results.end(); itr++) {
		cout << *itr << endl;
	}
}
