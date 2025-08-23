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


bool isBadVersion(int version) {
    if (version >= 4) return true;
    else return false;
}

class Solution {
public:
    int firstBadVersion(int n);
};

#endif