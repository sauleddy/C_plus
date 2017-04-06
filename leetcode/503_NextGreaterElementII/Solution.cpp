/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Solution.cpp
 * Author: eddy
 * 
 * Created on March 25, 2017, 10:11 PM
 */

#include "Solution.h"
#include <stack>

Solution::Solution() {
}

Solution::Solution(const Solution& orig) {
}

Solution::~Solution() {
}

vector<int> Solution::nextGreaterElements(vector<int>& nums) {
    int size = nums.size();
    std::vector<int> vecResult(size, -1);
    std::stack<int> stackNums;
    for(int i=0; i<size*2; ++i) {
        int num = nums[i % size];
        while(stackNums.empty() == false && nums[stackNums.top()] < num) {
            vecResult[stackNums.top()] = num;
            stackNums.pop();
        }
        if(i < size) {
            stackNums.push(i);
        }
            
    }
    return vecResult;
}

