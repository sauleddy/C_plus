/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Solution.cpp
 * Author: eddy
 * 
 * Created on May 20, 2017, 9:47 AM
 */

#include "Solution.h"
#include <algorithm>

Solution::Solution() {
}

Solution::Solution(const Solution& orig) {
}

Solution::~Solution() {
}

void Solution::rotate(vector<int>& nums, int k) {
    k = k % nums.size();
    if(k == 0) return;
    int numMove = nums.size() - k;
    vector<int> temp(nums.begin(), nums.begin() + numMove);
    nums.erase(nums.begin(), nums.begin() + numMove);
    nums.insert(nums.end(), temp.begin(), temp.end()); 
}

