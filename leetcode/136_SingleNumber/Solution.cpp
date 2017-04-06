/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Solution.cpp
 * Author: eddy
 * 
 * Created on March 19, 2017, 9:18 PM
 */

#include "Solution.h"
#include <stdlib.h>

Solution::Solution() {
}

Solution::Solution(const Solution& orig) {
}

Solution::~Solution() {
}

int Solution::singleNumber(vector<int>& nums) {
    int res = 0;
    for(auto num : nums) {
        res ^= num;
    }
    return res;
}

