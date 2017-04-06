/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Solution.cpp
 * Author: eddy
 * 
 * Created on March 23, 2017, 4:34 PM
 */

#include "Solution.h"
#include <algorithm>
#include <iostream>

Solution::Solution() {
}

Solution::Solution(const Solution& orig) {
}

Solution::~Solution() {
}

vector<int> Solution::singleNumber(vector<int>& nums) {
    std::vector<int> vecRet(2, 0);
    int diff = std::accumulate(nums.begin(), nums.end(), 0, [](int diff, int element){ /*cout<< diff<< ","<< element<< endl;*/ return diff ^= element; });
    //int diff = accumulate(nums.begin(), nums.end(), 0, bit_xor<int>());
        
    int firstNonZeroBit = diff & -diff;
    for(int i=0; i<nums.size(); ++i) {
        if(firstNonZeroBit & nums[i]) {
            vecRet[0] ^= nums[i];
        } else{
            vecRet[1] ^= nums[i];
        }
    }
    return vecRet;
}

