/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Solution.cpp
 * Author: eddy
 * 
 * Created on May 10, 2017, 12:32 PM
 */

#include "Solution.h"
#include <limits.h>
#include <deque>

Solution::Solution() {
}

Solution::Solution(const Solution& orig) {
}

Solution::~Solution() {
}

vector<int> Solution::countSmaller(vector<int>& nums) {
    vector<int> result(nums.size(), 0);
    if(nums.size() == 0) return result;
    deque<int> ordered;
    ordered.push_back(nums[nums.size()-1]);
    for(int i=nums.size()-2; i>=0; --i) {
        if(nums[i] > ordered[ordered.size()-1]) {
            result[i] = ordered.size();
            ordered.push_back(nums[i]);
        } else if(nums[i] < ordered[0]) {
            ordered.push_front(nums[i]);
        } else {
            int begin = 0, end = ordered.size() - 1;
            int mid = 0;
            while(begin <= end) {
                mid = (begin + end) / 2;
                if(mid > 0 && ordered[mid] >= nums[i] && ordered[mid-1] < nums[i]) break;
                if(ordered[mid] < nums[i]) {
                    begin = mid + 1;
                } else if(ordered[mid] >= nums[i]) {
                    end = mid - 1;
                }
            }
            result[i] = mid;
            ordered.insert(ordered.begin()+mid, nums[i]);
        }
    }
    return result;
}

