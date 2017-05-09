/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Solution.cpp
 * Author: eddy
 * 
 * Created on May 6, 2017, 10:49 AM
 */

#include "Solution.h"

#include <algorithm>

Solution::Solution() {
}

Solution::Solution(const Solution& orig) {
}

Solution::~Solution() {
}

void Solution::nextPermutation(vector<int>& nums) {
    int i = 0;
    for(i=nums.size()-1; i>0; --i) {
        if(nums[i] > nums[i-1]) {
            break;
        }
    }
    std::sort(nums.begin()+i, nums.end());
    if(i > 0) {
        for(int j=i; j<nums.size(); ++j) {
            if(nums[j] > nums[i-1]) {
                std::swap(nums[j], nums[i-1]);
                break;
            }
        }
    }
}

