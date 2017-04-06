/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Solution.cpp
 * Author: eddy
 * 
 * Created on March 25, 2017, 8:30 PM
 */

#include "Solution.h"
#include <algorithm>
#include <math.h>

Solution::Solution() {
}

Solution::Solution(const Solution& orig) {
}

Solution::~Solution() {
}

int Solution::minMoves(vector<int>& nums) {
    if(nums.size() <= 1) {
        return 0;
    }
    /*int first = nums[0];
    if(std::all_of(nums.begin(), nums.end(), [&first](int num){ return num == first ? true : false; }) == true) {
        return 0;
    }*/
    //unsigned long total = std::accumulate(nums.begin(), nums.end(), 0);
    int min = *std::min_element(nums.begin(), nums.end());
    unsigned long total_diff = std::accumulate(nums.begin(), nums.end(), 0
        , [&min](int total, int num){ return total + (num - min); } );
    return total_diff;
}

