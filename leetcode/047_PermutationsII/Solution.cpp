/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Solution.cpp
 * Author: eddy
 * 
 * Created on May 4, 2017, 9:55 AM
 */

#include "Solution.h"
#include <algorithm>
#include <iostream>
#include <unordered_map>

Solution::Solution() {
}

Solution::Solution(const Solution& orig) {
}

Solution::~Solution() {
}

vector<vector<int>> Solution::permuteUnique(vector<int>& nums) {
    // std::sort(nums.begin(), nums.end());
    return this->help(nums, 0);
}

vector<vector<int>> Solution::help(vector<int>& nums, int begin) {
    vector<vector<int>> resMatrix;
    if(begin == nums.size()-1) {
        vector<int> vecThis = {nums[begin]};
        resMatrix.push_back(vecThis);
        return resMatrix;
    }
    
    unordered_map<int, int> history;
    
    for(int i=begin; i<nums.size(); ++i) {
        if(history[nums[i]] != 0) continue;
        
        history[nums[i]] = 1;
        std::swap(nums[begin], nums[i]);
        vector<vector<int>> resThis = this->help(nums, begin+1);
        for(int j=0; j<resThis.size(); ++j) {
            resThis[j].push_back(nums[begin]);
            resMatrix.push_back(resThis[j]);
        }
        std::swap(nums[begin], nums[i]);
    }
    
    return resMatrix;
}

