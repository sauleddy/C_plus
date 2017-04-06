/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Solution.cpp
 * Author: eddy
 * 
 * Created on March 22, 2017, 3:51 PM
 */

#include "Solution.h"

Solution::Solution() {
}

Solution::Solution(const Solution& orig) {
}

Solution::~Solution() {
}

int Solution::getSum(int a, int b) {
    if(b == 0) {
        return a;
    }
    if(a == 0) {
        return b;
    }
    int sum = a ^ b;
    int carry = (a & b) << 1;
    return getSum(sum, carry);
}

