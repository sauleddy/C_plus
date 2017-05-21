/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Solution.cpp
 * Author: eddy
 * 
 * Created on May 19, 2017, 12:52 PM
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

int Solution::findUnsortedSubarray(vector<int>& nums) {
    if(nums.size() <= 1) return 0;
    vector<int> heap(nums.begin(), nums.end());
    std::make_heap(heap.begin(), heap.end(), greater<int>());
    
    /*while(heap.size() > 0) {
        cout<< heap.front()<< endl;
        std::pop_heap(heap.begin(), heap.end(), greater<int>());
        heap.pop_back();
    }*/
    int begin = -1;
    for(int i=0; i<nums.size(); ++i) {
        if(nums[i] != heap.front()) {
            begin = i;
            break;
        }
        std::pop_heap(heap.begin(), heap.end(), greater<int>());
        heap.pop_back();
    }
    if(begin == -1) return 0;
    int end = -1;
    std::make_heap(heap.begin(), heap.end());
    for(int i=nums.size()-1; i>=0; --i) {
        if(nums[i] != heap.front()) {
            end = i;
            break;
        }
        std::pop_heap(heap.begin(), heap.end());
        heap.pop_back();
    }
    if(end == -1) return 0;
    return end - begin + 1;
}

