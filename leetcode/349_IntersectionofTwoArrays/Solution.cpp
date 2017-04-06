/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Solution.cpp
 * Author: eddy
 * 
 * Created on March 27, 2017, 7:00 PM
 */

#include "Solution.h"

#include <unordered_set>

Solution::Solution() {
}

Solution::Solution(const Solution& orig) {
}

Solution::~Solution() {
}

vector<int> Solution::intersection(vector<int>& nums1, vector<int>& nums2) {
    std::vector<int> vecRet;
    if(nums1.size() == 0 || nums2.size() == 0)
        return vecRet;
    std::unordered_set<int> setNum1;
    for(int i=0; i<nums1.size(); ++i) {
        setNum1.insert(nums1[i]);
    }
    for(int i=0; i<nums2.size(); ++i) {
        auto iter = setNum1.find(nums2[i]);
        if(iter != setNum1.end()) {
            vecRet.push_back(nums2[i]);
            setNum1.erase(iter);
        }
    }
    return vecRet;
}

