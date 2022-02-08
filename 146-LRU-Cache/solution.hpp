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


class LRUCache {
private:
    int size;
    list<pair<int,int>> cache;
    unordered_map<int, list<pair<int,int>>::iterator> hash;
public:
    LRUCache(int capacity): size(capacity) {}

    int get(int key) {
        if (hash.find(key) == hash.end())
            return -1;
        cache.splice(cache.begin(), cache, hash[key]);
        return hash[key]->second;
    }

    void put(int key, int value) {
        if (hash.find(key) != hash.end()) {
            cache.splice(cache.begin(), cache, hash[key]);
            hash[key]->second = value;
        } else {
            if (cache.size() == size) {
                hash.erase(cache.back().first);
                cache.pop_back();
            }
            cache.push_front({key, value});
            hash[key] = cache.begin();
        }
    }
};

#endif