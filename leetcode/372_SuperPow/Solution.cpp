/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Solution.cpp
 * Author: eddy
 * 
 * Created on April 11, 2017, 1:28 PM
 */

#include "Solution.h"

Solution::Solution() {
}

Solution::Solution(const Solution& orig) {
}

Solution::~Solution() {
}

int Solution::superPow(int a, vector<int>& b) {
    if(b.size() == 0) {
        return 0;
    }
    int remainder = 1;
    int next_remainder = 1;
    int target = 1337;
    
    if(a > target) {
        a = a % target;
    }
    for(int i=b.size()-1; i>=0; --i) {
        for(int j=1; j<10; ++j) {
            next_remainder *= a;
            if(next_remainder > target) {
                next_remainder = next_remainder % target;
            }
            if(j == b[i]) {
                remainder *= next_remainder;
                if(remainder > target) {
                    remainder = remainder % target;
                }
                if(i == 0) {
                    break;
                }
            }
            if(j == 1) {
                a = next_remainder;
            }
        }
    }
    return remainder;
}

