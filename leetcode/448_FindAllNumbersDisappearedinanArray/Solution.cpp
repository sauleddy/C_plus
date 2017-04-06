/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Solution.cpp
 * Author: eddy
 * 
 * Created on March 21, 2017, 9:02 PM
 */

#include <stdlib.h>

#include "Solution.h"

Solution::Solution() {
}

Solution::Solution(const Solution& orig) {
}

Solution::~Solution() {
}

vector<int> Solution::findDisappearedNumbers(vector<int>& nums) {
    vector<int> vecRet;
    for(int i=0; i<nums.size(); ++i) {
        if(nums[i] != i+1 && nums[nums[i]-1] != nums[i]) {
            swap(nums[i], nums[nums[i]-1]);
            i = i - 1;
        }
    }
    
    for(int i=0; i<nums.size(); ++i) {
        if(nums[i] != i+1) {
            vecRet.push_back(i+1);
        }
    }
    
    return vecRet;
}

