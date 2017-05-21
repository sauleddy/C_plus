/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Solution.cpp
 * Author: eddy
 * 
 * Created on May 21, 2017, 9:48 AM
 */

#include "Solution.h"
#include <unordered_map>

Solution::Solution() {
}

Solution::Solution(const Solution& orig) {
}

Solution::~Solution() {
}

int Solution::findPairs(vector<int>& nums, int k) {
    if(k < 0) return 0;
    unordered_map<int, int> mapping;
    for(int i=0; i<nums.size(); ++i) {
        ++mapping[nums[i]];
    }
    int result = 0;
    for(int i=0; i<nums.size(); ++i) {
        if(mapping[nums[i]] != 0) {
            if(k == 0) {
                if(mapping[nums[i]] > 1) ++result;
            } else {
                if(mapping[nums[i]+k] != 0) ++result;
                if(mapping[nums[i]-k] != 0) ++result;            
            }
            mapping[nums[i]] = 0;
        }
    }
    return result;
}

