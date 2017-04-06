/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Solution.cpp
 * Author: eddy
 * 
 * Created on March 21, 2017, 1:29 PM
 */

#include "Solution.h"

Solution::Solution() {
}

Solution::Solution(const Solution& orig) {
}

Solution::~Solution() {
}

int Solution::numberOfArithmeticSlices(vector<int>& A) {
    int res = 0, len = 2, n = A.size();
    for (int i = 2; i < n; ++i) {
        if (A[i] - A[i - 1] == A[i - 1] - A[i - 2]) {
            ++len;
        } else {
            if (len > 2) res += (len - 1) * (len - 2) * 0.5;
            len = 2;
        }
    }
    if (len > 2) res += (len - 1) * (len - 2) * 0.5;
    return res;
}

