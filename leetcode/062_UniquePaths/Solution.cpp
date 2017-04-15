/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Solution.cpp
 * Author: eddy
 * 
 * Created on April 14, 2017, 9:16 PM
 */

#include "Solution.h"
#include <vector>

using namespace std;


Solution::Solution() {
}

Solution::Solution(const Solution& orig) {
}

Solution::~Solution() {
}

int Solution::uniquePaths(int m, int n) {
    if(m * n == 0) {
        return 0;
    }
    if(m * n == 1) {
        return 1;
    }
    vector<int> vec_dp(n, 1);
    int i = 1, j = 1;
    for(i=1; i<m; ++i) {
        for(j=1; j<n; ++j) {
            vec_dp[j] += vec_dp[j-1];
        }
    }
    return vec_dp[j-1];
}

