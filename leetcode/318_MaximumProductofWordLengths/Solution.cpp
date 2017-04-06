/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Solution.cpp
 * Author: eddy
 * 
 * Created on March 31, 2017, 9:50 AM
 */

#include "Solution.h"

Solution::Solution() {
}

Solution::Solution(const Solution& orig) {
}

Solution::~Solution() {
}

int Solution::maxProduct(vector<string>& words) {
    int max = 0;
    for(int i=0; i<words.size(); ++i) {
        for(int j=i+1; j<words.size(); ++j) {
            if(haveCommonLetter(words[i], words[j])) {
                continue;
            }
            int product = words[i].length() * words[j].length();
            if(product > max) {
                max = product;
            }
        }
    }
    return max; 
}

bool Solution::haveCommonLetter(string str1, string str2) {
    return (calculateCommonLNum(str1) & calculateCommonLNum(str2)) != 0;
}

int Solution::calculateCommonLNum(string str) {
    if(umapStrToMask[str] != 0) {
        return umapStrToMask[str];
    }
    int num = 0;
    for(int i=0; i<str.length(); ++i) {
        num |= 1 << (str[i] - 'a');
    }
    umapStrToMask[str] = num;
    return num;
}


