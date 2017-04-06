/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Solution.cpp
 * Author: eddy
 * 
 * Created on March 25, 2017, 7:57 PM
 */

#include "Solution.h"
#include <unordered_map>
#include <queue>


Solution::Solution() {
}

Solution::Solution(const Solution& orig) {
}

Solution::~Solution() {
}

vector<int> Solution::topKFrequent(vector<int>& nums, int k) {
    unordered_map<int, int> umapFreq;
    for(int i=0; i<nums.size(); ++i) {
        umapFreq[nums[i]] += 1;
    }
    std::priority_queue<std::pair<int, int>> pqFreq;
    for(auto iter=umapFreq.begin(); iter!=umapFreq.end(); ++iter) {
        pqFreq.push(std::pair<int, int>(iter->second, iter->first));
    }
    std::vector<int> vecResult;
    while(k > 0) {
        vecResult.push_back(pqFreq.top().second);
        pqFreq.pop();
        --k;
    }
    return vecResult;
}

