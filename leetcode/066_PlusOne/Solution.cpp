/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Solution.cpp
 * Author: eddy
 * 
 * Created on April 20, 2017, 9:55 AM
 */

#include "Solution.h"

Solution::Solution() {
}

Solution::Solution(const Solution& orig) {
}

Solution::~Solution() {
}

vector<int> Solution::plusOne(vector<int>& digits) {
    int carry = 1;
    for(int i=digits.size()-1; i>=0; --i) {
        int sum_this = digits[i] + carry;
        digits[i] = sum_this % 10;
        carry  = sum_this / 10;
    }
    if(carry > 0) {
        digits.insert(digits.begin(), carry);
    }
    return digits;
}

