/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Solution.cpp
 * Author: eddy
 * 
 * Created on May 7, 2017, 11:20 AM
 */

#include "Solution.h"
#include <math.h>

Solution::Solution() {
}

Solution::Solution(const Solution& orig) {
}

Solution::~Solution() {
}

int Solution::findNthDigit(int n) {
    int rally = 1;
    long base = 0;
    long diff = 1;
    while(1) {
        long base_next = base + diff * 9;
        long diff_next = (rally+1) * pow(10, rally);
        if(base_next >= n) break;
        base = base_next;
        diff = diff_next;
        ++rally;
    }
    ++base;
    long shift = n - base;
    int run = shift % rally;
    if(run == 0) return shift / diff + 1;
    long remainder = shift % diff;
    long quotient = 0;
    for(int i=0; i<run; ++i) {
        diff /= 10;
        quotient = remainder / diff;
        remainder = remainder % diff;
    }
    return quotient;
}

