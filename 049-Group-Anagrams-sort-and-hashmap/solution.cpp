#include "solution.hpp"

vector<vector<string>> Solution::groupAnagrams(vector<string>& strs) {
    unordered_map <string, vector<string>> groupAnaGram;

    for(string i:strs){
        string  word = i;
        sort(word.begin(), word.end());
        groupAnaGram[word].push_back(i);
    }

    vector<vector<string>> result;
    for(auto & group: groupAnaGram){
        result.push_back(group.second);
    }
    return result;
}
