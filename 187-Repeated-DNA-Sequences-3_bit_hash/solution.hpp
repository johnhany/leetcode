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


class Solution {
    using ui32=uint32_t;
    inline ui32 Num(char c) const noexcept {
        static constexpr char XLAT[26]=
            /*A B C D E F G H I J K L M N O P Q R S T U V W X Y Z */
            {0,0,1,0,0,0,2,0,0,0,0,0,0,0,0,0,0,0,0,3,0,0,0,0,0,0};

        return XLAT[c-'A'];
    }
public:
    vector<string> findRepeatedDnaSequences(string s);
};

#endif