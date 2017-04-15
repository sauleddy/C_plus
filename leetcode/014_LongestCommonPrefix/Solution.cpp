/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Solution.cpp
 * Author: eddy
 * 
 * Created on April 14, 2017, 7:41 PM
 */

#include "Solution.h"

Solution::Solution() {
}

Solution::Solution(const Solution& orig) {
}

Solution::~Solution() {
}

string Solution::longestCommonPrefix(vector<string>& strs) {
    int len_min = strs[0].length();
    for(int i=1; i<strs.size(); ++i) {
        if(strs[i].length() < len_min) {
            len_min = strs[i].length();
        }
    }
    if(len_min == 0) {
        return "";
    }
    for(int i=0; i<len_min; ++i) {
        for(int j=1; j<strs.size(); ++j) {
            if(strs[j][i] != strs[0][i]) {
                if(i == 0) {
                    return "";
                } else {
                    return strs[0].substr(0, i);
                } 
            }
        }
        
    }
    return strs[0].substr(0, len_min);
}

