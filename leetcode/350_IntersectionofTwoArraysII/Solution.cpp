/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Solution.cpp
 * Author: eddy
 * 
 * Created on March 30, 2017, 2:44 PM
 */

#include "Solution.h"

#include <unordered_map>

Solution::Solution() {
}

Solution::Solution(const Solution& orig) {
}

Solution::~Solution() {
}

vector<int> Solution::intersect(vector<int>& nums1, vector<int>& nums2) {
    std::vector<int> vecReturn;
    std::unordered_map<int, int> umapNums1;
    for(int i=0; i<nums1.size(); ++i) {
        umapNums1[nums1[i]]++;
    }
    for(int i=0; i<nums2.size(); ++i) {
        if(umapNums1[nums2[i]] > 0) {
            umapNums1[nums2[i]]--;
            vecReturn.push_back(nums2[i]);
        }
    }
    return vecReturn;   
}

