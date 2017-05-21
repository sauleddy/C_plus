/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Solution.cpp
 * Author: eddy
 * 
 * Created on May 19, 2017, 10:47 AM
 */

#include "Solution.h"
#include <unordered_map>

Solution::Solution() {
}

Solution::Solution(const Solution& orig) {
}

Solution::~Solution() {
}

bool Solution::containsNearbyDuplicate(vector<int>& nums, int k) {
    if(k == 0 || nums.size() == 0) return false;
    unordered_map<int, int> valueToPos;
    for(int i=0; i<nums.size(); ++i) {
        if(valueToPos[nums[i]] == 0) {
            valueToPos[nums[i]] = i + 1;
            continue;
        }
        if((i + 1) - valueToPos[nums[i]] <= k) return true;
        valueToPos[nums[i]] = i + 1;
    }
    return false;
}

