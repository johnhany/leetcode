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

class Node{
public:
    Node(){
        prev = nullptr;
        next = nullptr;
    };

    int value;
    class Node* next;
    class Node* prev;
};

class LRUCache {
public:
    class Node * head;
    class Node * tail;
    vector<Node> cache;
    int capacity;

    LRUCache(int capacity): cache(10001), capacity(capacity) {
        head = nullptr;
        tail = nullptr;
        // this->capacity=capacity;
    }

    void promote(class Node * node){
        if(node == head)
            return;

        if (!head) {
            head = node;
            tail = node;
            return;
        }

        if(node->prev || node->next) {
            if (node == tail) {
                tail = node->prev;
                tail->next = nullptr;
            } else {
                node->next->prev = node->prev;
                node->prev->next = node->next;
            }
        }
        head->prev = node;
        node->next = head;
        node->prev = nullptr;
        head = node;
    }

    void evict() {
        if(tail == head) {
            tail->prev = nullptr;
            tail->next = nullptr;
            tail = nullptr;
            head = nullptr;
            return;
        }

        class Node* evicted = tail;

        tail = evicted->prev;
        tail->next = nullptr;

        evicted->prev = nullptr;
        evicted->next = nullptr;

        return;
    }

    int get(int key) {
        Node & I = cache[key];

        if(!I.next && !I.prev && &I!=head)
            return -1;

        promote(&I);

        return I.value;

    }

    void put(int key, int value) {

        Node& I=cache[key];

        if (capacity == 0) {
            if(!I.next && !I.prev && &I!=head)
                evict();
        } else {
            if(!I.next && !I.prev && &I!=head)
                --capacity;
        }

        I.value=value;

        promote(&I);

        return;
    }
};

#endif