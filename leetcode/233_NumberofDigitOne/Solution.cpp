/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Solution.cpp
 * Author: eddy
 * 
 * Created on May 16, 2017, 9:33 AM
 */

#include "Solution.h"
#include <math.h>

Solution::Solution() {
}

Solution::Solution(const Solution& orig) {
}

Solution::~Solution() {
}

int Solution::countDigitOne(int n) {
    int lastMax = 0;
    int run = 0;
    int result = 0;
    int digitLast = 0;
    while(n > 0) {
        int digitThis = n % 10;
        n /= 10;
        result += lastMax * digitThis;
        if(digitThis > 1) result += pow(10, run);
        else if(digitThis == 1) result += (digitLast + 1) * pow(10, run-1);
        lastMax = lastMax * 10 + pow(10, run);
        digitLast = digitThis;
        ++run;
    }
    return result;
}

