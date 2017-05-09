/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Solution.cpp
 * Author: eddy
 * 
 * Created on May 6, 2017, 11:12 AM
 */

#include "Solution.h"

Solution::Solution() {
}

Solution::Solution(const Solution& orig) {
}

Solution::~Solution() {
}

string Solution::removeKdigits(string num, int k) {
    int idx_cur = 0;
    while(k > 0) {
        if(num[idx_cur] > num[idx_cur+1]) {
            num.replace(idx_cur, 1, "");
            --idx_cur;
            --k;
            continue;
        }
        ++idx_cur;
    }
    if(num == "") return "0";
    int idx_non_zero = num.find_first_not_of("0");
    if(idx_non_zero == string::npos) return "0";
    num = num.substr(idx_non_zero);
    return num; 
}

