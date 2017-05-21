/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Solution.cpp
 * Author: eddy
 * 
 * Created on May 20, 2017, 9:32 AM
 */

#include "Solution.h"
#include <limits.h>

Solution::Solution() {
}

Solution::Solution(const Solution& orig) {
}

Solution::~Solution() {
}

int Solution::thirdMax(vector<int>& nums) {
    vector<long> result(3, LONG_MIN);
    for(int i=0; i<nums.size(); ++i) {
        if(nums[i] > result[0]) {
            result[2] = result[1];
            result[1] = result[0];
            result[0] = nums[i];
        } else if(nums[i] > result[1]) {
            if(nums[i] == result[0]) continue;
            result[2] = result[1];
            result[1] = nums[i];
        } else if(nums[i] > result[2]) {
            if(nums[i] == result[1]) continue;
            result[2] = nums[i];
        }
    }
    if(result[2] != LONG_MIN) return result[2];
    return result[0];
}
