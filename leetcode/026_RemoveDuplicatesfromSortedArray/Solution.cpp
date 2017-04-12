/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Solution.cpp
 * Author: eddy
 * 
 * Created on April 12, 2017, 2:20 PM
 */

#include "Solution.h"

Solution::Solution() {
}

Solution::Solution(const Solution& orig) {
}

Solution::~Solution() {
}

int Solution::removeDuplicates(vector<int>& nums) {
    if(nums.size() == 0) {
        return 0;
    }
    int valid_len = 1;
    for(int i=1; i<nums.size(); ++i) {
        if(nums[i] != nums[valid_len-1]) {
            nums[valid_len] = nums[i];
            ++valid_len;
        }
    }
    return valid_len;
}

