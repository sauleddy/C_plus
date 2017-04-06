/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Solution.cpp
 * Author: eddy
 * 
 * Created on March 29, 2017, 3:16 PM
 */

#include "Solution.h"

#include <unordered_set>

Solution::Solution() {
}

Solution::Solution(const Solution& orig) {
}

Solution::~Solution() {
}

bool Solution::containsDuplicate(vector<int>& nums) {
    bool bRet = false;
    std::unordered_set<int> usetNums;
    for(int i=0; i<nums.size(); ++i) {
        if(usetNums.find(nums[i]) != usetNums.end()) {
            bRet = true;
            break;
        } else {
            usetNums.insert(nums[i]);
        }
    }
    return bRet;
}

