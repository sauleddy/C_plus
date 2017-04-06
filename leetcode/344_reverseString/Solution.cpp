/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Solution.cpp
 * Author: eddy
 * 
 * Created on March 16, 2017, 5:02 PM
 */

#include "Solution.h"

Solution::Solution() {
}

Solution::Solution(const Solution& orig) {
}

Solution::~Solution() {
}

string Solution::reverseString(string s) {
    int len = s.length();
    if(len <= 1)
        return s;
    int idxLow = 0;
    int idxHigh = len - 1;
    while(idxLow < idxHigh) {
        swap(s[idxLow++], s[idxHigh--]);
    }
    return s;
}

