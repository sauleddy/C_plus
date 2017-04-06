/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Solution.cpp
 * Author: eddy
 * 
 * Created on March 19, 2017, 8:20 PM
 */

#include "Solution.h"

Solution::Solution() {
}

Solution::Solution(const Solution& orig) {
}

Solution::~Solution() {
}

bool Solution::canWinNim(int n) {
    if(n == 0) {
        return false;
    } else if(n % 4 == 0) {
        return false;
    } else {
        return true;
    }
}

