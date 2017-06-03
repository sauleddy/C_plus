/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Solution.cpp
 * Author: eddy
 * 
 * Created on May 22, 2017, 8:32 AM
 */

#include "Solution.h"
#include <unordered_map>
#include <unordered_set>

Solution::Solution() {
}

Solution::Solution(const Solution& orig) {
}

Solution::~Solution() {
}

int Solution::findLHS(vector<int>& nums) {
    unordered_set<int> setFreq;
    unordered_map<int, int> mapFreq;
    for(int i=0; i<nums.size(); ++i) {
        ++mapFreq[nums[i]];
        setFreq.insert(nums[i]);
    }
    int result = 0;
    for(auto iter=setFreq.begin(); iter!=setFreq.end(); ++iter) {
        int numSmall = mapFreq[*iter];
        int numBig = mapFreq[*iter + 1];
        if(numBig != 0) {
            int numTotal = numSmall + numBig;
            if(numTotal > result) result = numTotal;
        }
    }
    return result;
}

