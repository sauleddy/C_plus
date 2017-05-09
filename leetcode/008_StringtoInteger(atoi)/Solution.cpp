/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Solution.cpp
 * Author: eddy
 * 
 * Created on May 8, 2017, 9:57 AM
 */

#include "Solution.h"
#include <limits.h>

Solution::Solution() {
}

Solution::Solution(const Solution& orig) {
}

Solution::~Solution() {
}

int Solution::myAtoi(string str) {
    if(str.find_first_not_of(" ") != string::npos) str = str.substr(str.find_first_not_of(" "));
    if(str.find_last_not_of(" ") != string::npos) str.erase(str.find_last_not_of(" ") + 1);
    int begin = 0;
    if(str[begin] == '+' || str[begin] == '-') ++begin;
    begin = str.find_first_not_of("0", begin);
    if(begin > str.length() - 1) return 0;
    long result = 0;
    while(begin <= str.length() - 1) {
        int digit = (int)str[begin] - 48;
        if(digit < 0 || digit > 9) return 0;
        result *= 10;
        result += digit;
        if(result >= INT_MAX) {
            if(str[0] == '-') {
                if(result > INT_MAX) return INT_MIN;
            } else {
                if(result >= INT_MAX) return INT_MAX;
            }
        }
        ++begin;
    }
    result *= (str[0] == '-' ? -1 : 1);
    return result;
}

