/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Solution.cpp
 * Author: eddy
 * 
 * Created on June 3, 2017, 6:00 PM
 */

#include "Solution.h"
#include <unordered_map>

Solution::Solution() {
}

Solution::Solution(const Solution& orig) {
}

Solution::~Solution() {
}

int Solution::arrayNesting(vector<int>& nums) {
    unordered_map<int, int> history;
    int max_length = 0;
    for(int i=0; i<nums.size(); ++i) {
        if(history[i] == 0) {
            int index = i;
            int length = 1;
            history[index] = 1;
            while(history[nums[index]] == 0) {
                history[nums[index]] = 1;
                index = nums[index];
                ++length;
            }
            if(length > max_length) max_length = length;
        }
    }
    return max_length;
}

