#ifndef SOLUTION_006
#define SOLUTION_006

#include <iostream>
#include <vector>
#include <map>
#include <math.h>
#include <set>
#include <queue>

using namespace std;


class Solution {
private:
    const int dx[4]={-1, 1, 0, 0}, dy[4]={0, 0, -1, 1};
    struct State {
        int x;
        int y;
        int state;
    };
public:
    int isKey(char c);
    int isLock(char c);
    int shortestPathAllKeys(vector<string>& grid);
};

#endif