/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Solution.cpp
 * Author: eddy
 * 
 * Created on May 17, 2017, 8:54 AM
 */

#include "Solution.h"

#include <algorithm>

Solution::Solution() {
}

Solution::Solution(const Solution& orig) {
}

Solution::~Solution() {
}

vector<int> Solution::findAnagrams(string s, string p) {
    vector<int> result;
    if(s.length() < p.length()) return result;
    unordered_map<char, int> table;
    int sum = std::accumulate(p.begin(), p.end(), 0, 
        [&table](int total, char b) {
        ++table[b];
        return total + (int)b;
    });
    int sumCur = 0;
    for(int i=0; i<p.length()-1; ++i) {
        sumCur += (int)s[i];
    }
    for(int i=0; i<s.length() - p.length() + 1; ++i) {
        sumCur += (int)s[i+p.length()-1];
        string strThis = s.substr(i, p.length());
        if(sumCur == sum) {
            if((result.size() > 0 && result.back() == i - 1) || help(table, strThis))
                result.push_back(i);
        }
        sumCur -= (int)s[i];
    }
    return result;
}

bool Solution::help(unordered_map<char, int>& table, string& s) {
    unordered_map<char, int> compare;
    for(int i=0; i<s.length(); ++i) {
        ++compare[s[i]];
        if(compare[s[i]] > table[s[i]]) return false;
    }
    return true;
}


