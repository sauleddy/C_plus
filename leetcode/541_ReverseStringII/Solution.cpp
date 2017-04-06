/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Solution.cpp
 * Author: eddy
 * 
 * Created on March 30, 2017, 2:13 PM
 */

#include "Solution.h"
#include <algorithm>

Solution::Solution() {
}

Solution::Solution(const Solution& orig) {
}

Solution::~Solution() {
}

string Solution::reverseStr(string s, int k) {
    int n = s.size(), cnt = n / k;
    for (int i = 0; i <= cnt; ++i) {
        if (i % 2 == 0) {
            if (i * k + k < n) {
                reverse(s.begin() + i * k, s.begin() + i * k + k);
            } else {
                reverse(s.begin() + i * k, s.end());
            }
        }
    }
    return s;   
}

