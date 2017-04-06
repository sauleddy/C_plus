/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Solution.cpp
 * Author: eddy
 * 
 * Created on March 22, 2017, 10:50 AM
 */

#include "Solution.h"

Solution::Solution() {
}

Solution::Solution(const Solution& orig) {
}

Solution::~Solution() {
}

vector<int> Solution::findDuplicates(vector<int>& nums) {
    std::vector<int> vecRet;
    if(nums.size() <= 1)
        return vecRet;
    for(int i=0; i<nums.size(); ++i) {
        if(nums[i] == -1 || nums[i] == i+1) {
            continue;
        }
        if(nums[nums[i]-1] == -1) {
            continue;
        } else if(nums[nums[i]-1] == nums[i]) {
            nums[nums[i]-1] = -1;
        } else {
            swap(nums[i], nums[nums[i]-1]);
            --i;
        }
    }
    for(int i=0; i<nums.size(); ++i) {
        if(nums[i] == -1) {
            vecRet.push_back(i+1);
        }
    }
    return vecRet;
}
