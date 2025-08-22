#include "solution.hpp"


int Solution::findKthLargest(vector<int>& nums, int k) {
	return quickSortKthElement(nums, k, 0, nums.size() - 1);    // 快排整个区间
}

int Solution::quickSortKthElement(vector<int>& nums, int k, int left, int right) {
	int mid = left + (right - left) / 2;    // 选取中间元素作为切分值
	swap(nums[mid], nums[right]);           // 将切分值放到右边界避免加入元素的划分
	int partition = nums[right], i = left, j = right;   // 双指针从左右边界开始，分别找到要交换的元素
	while(i < j) {
		while(i < j && nums[i] >= partition) i++;    // 找到左侧小于切分值的元素
		while(j > i && nums[j] <= partition) j--;    // 找到右侧大于切分值的元素【因为是找大于，即使j从right开始，right也不会被选中】
		if(i < j)
			swap(nums[i], nums[j]);     // 将大于元素放到左侧，小于元素放到右侧
	}
	swap(nums[i], nums[right]);     // i最后停留的位置一定是右侧首个小于切分值的元素，与切分值交换，则[left, i)都是大于（等于）切分值，[i+1, right]都是小于（等于）切分值
	if(i == k - 1) return nums[i];   // 如果切分值就是第k大元素，直接返回
	if(i < k - 1) return quickSortKthElement(nums, k, i + 1, right);     // 切分值是第k大之前的元素，在右区间搜索第k大
	return quickSortKthElement(nums, k, left, i - 1);   // 切分值是第k大之后的元素，在左区间搜索第k大
};

