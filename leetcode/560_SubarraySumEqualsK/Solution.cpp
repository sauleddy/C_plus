/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Solution.cpp
 * Author: eddy
 * 
 * Created on May 22, 2017, 9:33 AM
 */

#include "Solution.h"

Solution::Solution() {
}

Solution::Solution(const Solution& orig) {
}

Solution::~Solution() {
}

int Solution::subarraySum(vector<int>& nums, int k) {
    if(nums.size() == 0) return 0;
    int result = 0;
    vector<int> dp(nums.size(), 0);
    for(int i=0; i<nums.size(); ++i) {
        if(i == 0) dp[i] = nums[0];
        else dp[i] = dp[i-1] + nums[i];
        if(dp[i] == k) ++result;
    }
    for(int i=1; i<nums.size(); ++i) {
        for(int j=i; j<nums.size(); ++j) {
            int sumThis = dp[j] - dp[i-1];
            if(sumThis == k) ++result;
        }
    }
    return result;
}

