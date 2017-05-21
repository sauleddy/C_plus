/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Solution.cpp
 * Author: eddy
 * 
 * Created on May 21, 2017, 2:41 PM
 */

#include "Solution.h"

Solution::Solution() {
}

Solution::Solution(const Solution& orig) {
}

Solution::~Solution() {
}

string Solution::convertToTitle(int n) {
    string result = "";
    
    while(n > 0) {
        int remainder = (n - 1) % 26;
        char cThis = (char)(remainder + (int)'A');
        result = cThis + result;
        n = (n-1) / 26;
    }
    
    return result;
}
