#ifndef SOLUTION_146
#define SOLUTION_146

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


class LFUCache {
private:
    int cap;
    int cter = 0;   // # of elements in the stack
    int k2v[100001]; //key to val
    int k2f[100001]; //key to freq
    map<int, deque<int>> f2ks;  //freq to a bunch of keys of that freq
public:
    LFUCache(int capacity) {
        cap = capacity;
    }

    int get(int key) {
        if (!k2f[key])  //key does not exist
            return -1;

        if (k2f[key]) { //key exist, we need to remove it from the original freq queue
            auto &dq = f2ks[k2f[key]];
            dq.erase(find(dq.begin(), dq.end(), key));
            if (!dq.size())
                f2ks.erase(k2f[key]);
        }
        ++k2f[key];
        f2ks[k2f[key]].push_back(key);
        return k2v[key];
    }

    void put(int key, int value) {
        if (!cap) return;   //there is a test case where capacity=0
        if (cter < cap || k2f[key]) {
            k2v[key] = value;

            if (k2f[key]) {
                auto &dq = f2ks[k2f[key]];
                dq.erase(find(dq.begin(), dq.end(), key));
                if (!dq.size())
                    f2ks.erase(k2f[key]);
            } else
                ++cter;

            ++k2f[key];
            f2ks[k2f[key]].push_back(key);
            return;
        }
        //if we reach here, that means we have reached the capacity limit and trying to put a new k-v pair
        auto iter = f2ks.begin();
        int evict = iter->second.front();
        iter->second.pop_front();
        //todo: if deque becomes empty, erase the deque from map
        k2f[evict] = 0;

        ++k2f[key];
        k2v[key] = value;
        f2ks[k2f[key]].push_back(key);
    }
};

#endif