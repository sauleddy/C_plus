/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Solution.cpp
 * Author: eddy
 * 
 * Created on March 23, 2017, 3:54 PM
 */

#include "Solution.h"
#include <vector>
#include <algorithm>
#include <map>

Solution::Solution() {
}

Solution::Solution(const Solution& orig) {
}

Solution::~Solution() {
}

string Solution::frequencySort(string s) {
    if(s.length() <= 1) {
        return s;
    }
    std::vector<int> vecNum(128, 0);
    for(int i=0; i<s.length(); ++i) {
        vecNum[s[i]]++;
    }
    std::multimap<int, int> mmapFrequency;
    for(int i=0; i<vecNum.size(); ++i) {
        if(vecNum[i] == 0) {
            continue;
        }
        mmapFrequency.insert(std::pair<int, int>(vecNum[i], i));
    }
    string ret = "";
    
    for(auto iter=mmapFrequency.rbegin(); iter!=mmapFrequency.rend(); ++iter) {
        for(int j=0; j<iter->first; ++j) {
            ret += iter->second;
        }
    }
    return ret;
}

