/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Solution.cpp
 * Author: eddy
 * 
 * Created on May 9, 2017, 10:16 AM
 */

#include "Solution.h"
#include <math.h>


Solution::Solution() {
}

Solution::Solution(const Solution& orig) {
}

Solution::~Solution() {
}

int Solution::splitArray(vector<int>& nums, int m) {
    int sum = std::accumulate(nums.begin(), nums.end(), 0);
    unordered_map<int, int> history;
    return this->help(nums, 0, m, sum, history);
}

int Solution::help(vector<int>& nums, int begin, int m, int sum, unordered_map<int, int>& history) {
    if(m == 1) return sum;
    int key = (begin << 8) + m;
    if(history[key] != 0) return history[key];
    
    if(nums.size() - begin == m) {
        int result = *std::max_element(nums.begin() + begin, nums.end());
        history[key] = result;
        return result;
    }
    int average = sum / m;
    int sumThis = 0;
    int idxThis = begin;
    while(1) {
        sumThis += nums[idxThis];
        if(sumThis >= average || nums.size() - idxThis <= m) break;
        ++idxThis;
    }
    int res1 = this->help(nums, idxThis + 1, m - 1, sum - sumThis, history);
    int max1 = max(res1, sumThis);
    int max2 = max1;
    if(idxThis > begin && sumThis >= average) {
        int sumLess = sumThis - nums[idxThis];
        int res2 = this->help(nums, idxThis, m - 1, sum - sumLess, history);
        max2 = max(res2, sumLess);
    }
    int result = min(max1, max2);
    history[key] = result;
    return result;
}

