/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Solution.cpp
 * Author: eddy
 * 
 * Created on April 12, 2017, 2:31 PM
 */

#include "Solution.h"
#include <iostream>

Solution::Solution() {
}

Solution::Solution(const Solution& orig) {
}

Solution::~Solution() {
}

int Solution::removeDuplicates(vector<int>& nums) {
    int len_nums = nums.size();
    if(len_nums == 0) {
        return 0;
    }
    int count = 1;
    int valid_pos = 0;
    for(int i=1; i<nums.size(); ++i) {
        if(nums[i] != nums[valid_pos]) {
            ++valid_pos;
            nums[valid_pos] = nums[i];
            count = 1;
        } else {
            if(count < 2) {
                ++count;
                ++valid_pos;
                nums[valid_pos] = nums[i];
            }
        }
    }
    return valid_pos + 1;
}

