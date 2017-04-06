/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Solution.cpp
 * Author: eddy
 * 
 * Created on March 17, 2017, 3:35 PM
 */

#include "Solution.h"
#include <unordered_map>
#include <algorithm>

typedef std::vector<int>::iterator iterVec;

Solution::Solution() {
}

Solution::Solution(const Solution& orig) {
}

Solution::~Solution() {
}

vector<int> Solution::nextGreaterElement(vector<int>& findNums, vector<int>& nums) {
    std::unordered_map<int, int> mapNumToAns;
    int max= 0;
    for(int i = nums.size()-1; i >= 0; --i) {
        if((i == nums.size()-1) || nums[i] > max) {
            max = nums[i];
            mapNumToAns[nums[i]] = -1;
            continue;
        }
        
        iterVec iter = std::find_if(nums.begin()+i, nums.end(), [&](int thisNum){ return nums[i] < thisNum ? true : false;});
        if(iter != nums.end()) {
            mapNumToAns[nums[i]] = *iter;
        } else {
            mapNumToAns[nums[i]] = -1;
        }
    }
    std::vector<int> vecRet(findNums.size());
    for(int i=0; i<findNums.size(); ++i) {
        vecRet.push_back(mapNumToAns[findNums[i]]);
    }
    return vecRet;
}

