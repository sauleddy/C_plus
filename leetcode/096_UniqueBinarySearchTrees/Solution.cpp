/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Solution.cpp
 * Author: eddy
 * 
 * Created on April 4, 2017, 7:28 PM
 */

#include "Solution.h"

Solution::Solution() {
}

Solution::Solution(const Solution& orig) {
}

Solution::~Solution() {
}

int Solution::numTrees(int n) {
    if(n <= 1) {
        return n;
    }
    std::unordered_map<int, int> umapDp;
    return this->help(1, n, umapDp);
}

int Solution::help(int left, int right, std::unordered_map<int, int>& umapDp) {
    if(left >= right) {
        return 1;
    }
    int key = right - left + 1;
    int value = umapDp[key];
    if(value > 0) {
        return value;
    }
    int sum = 0;
    for(int i=left; i<=right; ++i) {
        sum += this->help(left, i-1, umapDp) * this->help(i+1, right, umapDp);
    }
    umapDp[key] = sum;
    return sum;
}

