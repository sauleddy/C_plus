/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Solution.cpp
 * Author: eddy
 * 
 * Created on May 10, 2017, 11:58 AM
 */

#include "Solution.h"

#include <unordered_map>

Solution::Solution() {
}

Solution::Solution(const Solution& orig) {
}

Solution::~Solution() {
}

bool Solution::isIsomorphic(string s, string t) {
    unordered_map<int, int> mapping;
    for(int i=0; i<s.length(); ++i) {
        int numS = (int)s[i];
        int numT = (int)t[i];
        if(mapping[numS] != 0 || mapping[numT] != 0) {
            if(mapping[numS] != 0 && mapping[numS] != numT) return false;
            if(mapping[numT] != 0 && mapping[numT] != numS) return false;
        }
        mapping[numS] = numT;
        mapping[numT] = numS;
    }
    return true;
}

