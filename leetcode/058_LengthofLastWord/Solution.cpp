/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Solution.cpp
 * Author: eddy
 * 
 * Created on May 19, 2017, 11:15 AM
 */

#include "Solution.h"

Solution::Solution() {
}

Solution::Solution(const Solution& orig) {
}

Solution::~Solution() {
}

int Solution::lengthOfLastWord(string s) {
    size_t pos = s.find_last_not_of(" ");
    if(pos == string::npos) return 0;
    s = s.substr(0, pos + 1);
    pos = s.find_last_of(" ");
    if(pos == string::npos) return s.length();
    else return s.substr(pos+1).length();
}

