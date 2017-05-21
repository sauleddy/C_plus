/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   NumArray.cpp
 * Author: eddy
 * 
 * Created on May 21, 2017, 3:03 PM
 */

#include "NumArray.h"

/*NumArray::NumArray() {
}*/

NumArray::NumArray(vector<int> nums) {
    if(nums.size() == 0) return;
    dp.resize(nums.size(), 0);
    dp[0] = nums[0];
    for(int i=1; i<nums.size(); ++i) {
        dp[i] = dp[i-1] + nums[i];
    }   
}

NumArray::NumArray(const NumArray& orig) {
}

NumArray::~NumArray() {
}

int NumArray::sumRange(int i, int j) {
    if(i == 0) return dp[j];
    else return dp[j] - dp[i-1];
}

