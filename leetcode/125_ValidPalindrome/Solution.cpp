/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Solution.cpp
 * Author: eddy
 * 
 * Created on May 13, 2017, 9:01 AM
 */

#include "Solution.h"

#include <unordered_map>

Solution::Solution() {
}

Solution::Solution(const Solution& orig) {
}

Solution::~Solution() {
}

bool Solution::isPalindrome(string s) {
    unordered_map<char, int> valid;
    for(int i=0; i<26; ++i) {
        int numSmall = (int)'a' + i;
        int numBig = (int)'A' + i;
        valid[(char)numBig] = numSmall;
        valid[(char)numSmall] = numSmall;
    }
    for(int i=0; i<10; ++i) {
        int numDigit = (int)'0' + i;
        valid[(char)numDigit] = numDigit;
    }
    
    int idxL = 0, idxR = s.length() - 1;
    while(idxL < idxR) {
        while(idxL < idxR && valid[s[idxL]] == 0) {
            ++idxL;
        }
        while(idxR > idxL && valid[s[idxR]] == 0) {
            --idxR;
        }
        if(idxL > idxR || valid[s[idxL]] != valid[s[idxR]]) return false;
        ++idxL;
        --idxR;
    }
    return true;
}

