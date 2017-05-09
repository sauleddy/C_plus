/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Solution.cpp
 * Author: eddy
 * 
 * Created on May 8, 2017, 10:44 AM
 */

#include "Solution.h"

Solution::Solution() {
}

Solution::Solution(const Solution& orig) {
}

Solution::~Solution() {
}

vector<string> Solution::summaryRanges(vector<int>& nums) {
    vector<string> result;
    if(nums.size() == 0) return result;
    int begin = nums[0];
    for(int i=1; i<nums.size(); ++i) {
        if(nums[i] - nums[i-1] > 1) {
            if(nums[i-1] == begin) result.push_back(std::to_string(begin));
            else {
                string str_this = std::to_string(begin) + "->" + std::to_string(nums[i-1]);
                result.push_back(str_this);
            }
            begin = nums[i];
        }
    }
    if(nums[nums.size() - 1] == begin) result.push_back(std::to_string(begin));
    else {
        string str_this = std::to_string(begin) + "->" + std::to_string(nums[nums.size() - 1]);
        result.push_back(str_this);
    }
    return result;
}

