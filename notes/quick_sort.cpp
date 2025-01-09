#include <iostream>
#include <vector>


using namespace std;

int Partition(vector<int>& nums, int start, int end) {
    if (start < 0 || start > end) return -1;
    int tmp = nums[end];
    int j = start - 1;
    for (int i = start; i < end; i++) {
        if (nums[i] < tmp) {
            j++;
            if (i != j)
                swap(nums[i], nums[j]);
        }
    }
    swap(nums[j+1], nums[end]);
    return j+1;
}


void QSort(vector<int>& nums, int start, int end) {
    if (start < 0 || start > end) return;
    int split = Partition(nums, start, end);
    QSort(nums, start, split-1);
    QSort(nums, split+1, end);
    return;
}


vector<int> QuickSort(vector<int>& nums) {
    vector<int> rst(nums);
    if (rst.empty() || rst.size() == 1) return rst;
    QSort(rst, 0, rst.size()-1);
    return rst;
}


int main() {
    vector<int> nums{ 4, 5, 1, 6, 2, 7, 3, 8 };
    vector<int> rst = QuickSort(nums);
    for (int x : rst)
        cout << x << ", ";
    cout << endl;
}