#include "solution.hpp"


double Solution::findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
    if ((nums1.size() + nums2.size()) % 2 == 1) {
        return findKth(nums1, nums2, (nums1.size() + nums2.size() + 1) / 2);
    } else {
        return (findKth(nums1, nums2, (nums1.size() + nums2.size()) / 2) +
                findKth(nums1, nums2, (nums1.size() + nums2.size()) / 2 + 1)) / 2.0;
    }
}

int Solution::findKth(vector<int> a, vector<int> b, int k) {
    if (a.size() == 0) {
        return b[k-1];
    }
    if (b.size() == 0) {
        return a[k-1];
    }
    if (k == 1) {
        return min(a[0], b[0]);
    }
    int i = min(k/2, (int)a.size());
    int j = min(k/2, (int)b.size());
    if (a[i-1] < b[j-1]) {
        return findKth(vector<int>(a.begin()+i, a.end()), b, k-i);
    } else {
        return findKth(a, vector<int>(b.begin()+j, b.end()), k-j);
    }
}

