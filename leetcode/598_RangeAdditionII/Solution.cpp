/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Solution.cpp
 * Author: eddy
 * 
 * Created on June 3, 2017, 1:37 PM
 */

#include "Solution.h"
#include <algorithm>

Solution::Solution() {
}

Solution::Solution(const Solution& orig) {
}

Solution::~Solution() {
}

int Solution::maxCount(int m, int n, vector<vector<int>>& ops) {
    int min_m = m;
    int min_n = n;
    for(int i=0; i<ops.size(); ++i) {
        min_m = min(min_m, ops[i][0]);
        min_n = min(min_n, ops[i][1]);
    }
    return min_m * min_n;
}

