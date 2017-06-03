/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Solution.cpp
 * Author: eddy
 * 
 * Created on May 22, 2017, 10:00 AM
 */

#include "Solution.h"

Solution::Solution() {
}

Solution::Solution(const Solution& orig) {
}

Solution::~Solution() {
}

bool Solution::checkSubarraySum(vector<int>& nums, int k) {
    if(nums.size() <= 1) return false;
    vector<int> dp(nums.size(), 0);
    dp[0] = nums[0];
    for(int i=1; i<nums.size(); ++i) {
        dp[i] = dp[i-1] + nums[i];
        if(k == 0) {
            if(dp[i] == 0) return true;
        } else {
            if(dp[i] % k == 0) return true; 
        }
    }
    for(int i=1; i<nums.size()-1; ++i) {
        for(int j=i+1; j<nums.size(); ++j) {
            int sumThis = dp[j] - dp[i-1];
            if(k == 0) {
                if(sumThis == 0) return true;
            } else {
                if(sumThis % k == 0) return true; 
            }
        }
    }
    return false;
}

