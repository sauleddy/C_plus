/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Solution.cpp
 * Author: eddy
 * 
 * Created on May 8, 2017, 9:18 AM
 */

#include "Solution.h"
#include <set>

Solution::Solution() {
}

Solution::Solution(const Solution& orig) {
}

Solution::~Solution() {
}

int Solution::distributeCandies(vector<int>& candies) {
    set<int> candy_kinds(candies.begin(), candies.end());
    return (candy_kinds.size() >= candies.size() / 2 ? candies.size() / 2 : candy_kinds.size());
}

