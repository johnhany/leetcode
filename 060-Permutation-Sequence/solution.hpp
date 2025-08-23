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
    string getPermutation(int n, int k);
private:
    int fact[10] = {1,1,2,6,24,120,720,5040,40320,362880};
};

#endif