#include "solution.hpp"

int Solution::minRefuelStops(int target, int startFuel, vector<vector<int>>& stations) {
    int n=stations.size(), i=0, ans=0;
    int currp=startFuel;
    priority_queue<int> pq;
    if(target <= startFuel) {
        return 0;
    }
    while(currp<target && i<n)  {
        while(i<n && stations[i][0] <= currp) {
            pq.push(stations[i][1]);
            i++;
        }
        if(pq.empty()) {
            return -1;
        }
        currp += pq.top();
        pq.pop();
        ans++;
    }
    while(!pq.empty() && currp < target) {
        currp += pq.top();
        pq.pop();
        ans++;
    }
    if(currp >= target) {
        return ans;
    }
    return -1;
}
