#include "solution.hpp"


int Solution::romanToInt(string s) {
    unordered_map<char, int> table = {{ 'I' , 1 },
                                    { 'V' , 5 },
                                    { 'X' , 10 },
                                    { 'L' , 50 },
                                    { 'C' , 100 },
                                    { 'D' , 500 },
                                    { 'M' , 1000 }};
    int result = table[s.back()];
    for (int i = s.length() - 2; i >= 0; --i) {
        if (table[s[i]] < table[s[i + 1]])
            result -= table[s[i]];
        else
            result += table[s[i]];
    }
    return result;
}
