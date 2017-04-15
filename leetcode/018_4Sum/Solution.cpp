/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Solution.cpp
 * Author: eddy
 * 
 * Created on April 14, 2017, 6:11 PM
 */

#include "Solution.h"

#include <algorithm>
#include <set>



Solution::Solution() {
}

Solution::Solution(const Solution& orig) {
}

Solution::~Solution() {
}

vector<vector<int>> Solution::fourSum(vector<int>& nums, int target) {
    set<vector<int> > res;
    sort(nums.begin(), nums.end());
    for (int i = 0; i < int(nums.size() - 3); ++i) {
        for (int j = i + 1; j < int(nums.size() - 2); ++j) {
            int left = j + 1, right = nums.size() - 1;
            while (left < right) {
                int sum = nums[i] + nums[j] + nums[left] + nums[right];
                if (sum == target) {
                    vector<int> out;
                    out.push_back(nums[i]);
                    out.push_back(nums[j]);
                    out.push_back(nums[left]);
                    out.push_back(nums[right]);
                    res.insert(out);
                    ++left; --right;
                } else if (sum < target) ++left;
                else --right;
            }
        }
    }
    return vector<vector<int> > (res.begin(), res.end());
}

