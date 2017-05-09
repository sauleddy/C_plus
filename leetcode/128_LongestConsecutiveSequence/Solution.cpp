/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Solution.cpp
 * Author: eddy
 * 
 * Created on May 8, 2017, 11:17 AM
 */

#include "Solution.h"

Solution::Solution() {
}

Solution::Solution(const Solution& orig) {
}

Solution::~Solution() {
}

int longestConsecutive(vector<int>& nums) {
    unordered_map<int, int> mapping;
    for(int i=0; i<nums.size(); ++i) {
        mapping[nums[i]] = 1;
    }
    int length_max = 0;
    for(int i=0; i<nums.size(); ++i) {
        if(mapping[nums[i]] == 1) {
            int max = nums[i];
            int min = nums[i];
            while(mapping[max+1] == 1 || mapping[min-1] == 1) {
                if(mapping[max+1] == 1) {
                    mapping[max+1] = 2;
                    ++max;
                }
                if(mapping[min-1] == 1) {
                    mapping[min-1] = 2;
                    --min;
                }
            }
            if(max - min + 1 > length_max) length_max = max - min + 1;
        }
    }
    return length_max;
}

