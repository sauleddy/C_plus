/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Solution.cpp
 * Author: eddy
 * 
 * Created on May 18, 2017, 8:21 AM
 */

#include "Solution.h"

#include <vector>
#include <unordered_map>

Solution::Solution() {
}

Solution::Solution(const Solution& orig) {
}

Solution::~Solution() {
}

bool Solution::wordPattern(string pattern, string str) {

    vector<string> strs;
    int pos = 0;
    while(pos < str.length()) {
        size_t posSpace = str.find_first_of(" ", pos);
        if(posSpace == string::npos) {
            strs.push_back(str.substr(pos));
            break;
        }
        strs.push_back(str.substr(pos, posSpace - pos));
        pos = posSpace + 1;
    }
    if(strs.size() != pattern.length()) return false;
    unordered_map<char, string> mapping;
    unordered_map<string, int> mapped;
    for(int i=0; i<pattern.length(); ++i) {
        if(mapping[pattern[i]] == "") {
            if(mapped[strs[i]] != 0) return false;
            mapping[pattern[i]] = strs[i];
            mapped[strs[i]] = 1;
            continue;
        }
        if(mapping[pattern[i]] != strs[i]) return false;
    }
    return true;
}

