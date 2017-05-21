/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Solution.cpp
 * Author: eddy
 * 
 * Created on May 20, 2017, 10:39 AM
 */

#include "Solution.h"

Solution::Solution() {
}

Solution::Solution(const Solution& orig) {
}

Solution::~Solution() {
}

int Solution::firstBadVersion(int n) {
    int begin = 1, end = n;
    int mid = n;
    while(begin < end) {
        mid = (n + 1) / 2;
        if(isBadVersion(mid)) {
            end = mid - 1;
            if(end <= 0) return mid;
            if(!isBadVersion(end)) return mid;
        } else {
            begin = mid + 1;
            if(isBadVersion(begin)) return begin;
        }
        
    }
    return mid;
}

bool Solution::isBadVersion(int version) {
    
}

