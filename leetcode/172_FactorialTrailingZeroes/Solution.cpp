/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Solution.cpp
 * Author: eddy
 * 
 * Created on May 16, 2017, 9:08 AM
 */

#include "Solution.h"

Solution::Solution() {
}

Solution::Solution(const Solution& orig) {
}

Solution::~Solution() {
}

int Solution::trailingZeroes(int n) {
    int result = 0;
    int multiplyFive = 5;
    while(multiplyFive <= n) {
        result += n / multiplyFive;
        multiplyFive *= 5;
    }
    return result;
}

