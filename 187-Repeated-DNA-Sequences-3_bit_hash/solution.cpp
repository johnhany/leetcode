#include "solution.hpp"
#include <bitset>


vector<string> Solution::findRepeatedDnaSequences(string s) {
    const ui32 n = s.size();
    if (n<=10) return {};

    ui32 x = 0, shift = 0;
    for (ui32 i = 0; i < 10; ++i) {
        x |= Num(s[i]) << shift;
        shift += 2;
    }
    std::vector<std::string> out;
    std::bitset<1<<20> H, D;
    H.set(x);
    for (ui32 i = 10; i < n; ++i) {
        x = (x >> 2) | (Num(s[i]) << 18);
        if (H.test(x) && !D.test(x)) {
            out.emplace_back(s.substr(i-9, 10));
            D.set(x);
        }
        H.set(x);
    }
    return out;
}
