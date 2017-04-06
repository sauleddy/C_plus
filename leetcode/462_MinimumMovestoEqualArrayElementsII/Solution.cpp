/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Solution.cpp
 * Author: eddy
 * 
 * Created on March 23, 2017, 11:20 AM
 */

#include "Solution.h"
#include <algorithm>

Solution::Solution() {
}

Solution::Solution(const Solution& orig) {
}

Solution::~Solution() {
}

int Solution::minMoves2(vector<int>& nums) {
    if(nums.size() <= 1) {
        return 0;
    }
    std::sort(nums.begin(), nums.end());
    
    int steps = 0;
    int vecSize = nums.size();
    for(int i=0; i<vecSize/2; ++i) {
        steps += nums[vecSize-i-1] - nums[i];
    }
    return steps;
}

