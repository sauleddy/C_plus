/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Solution.cpp
 * Author: eddy
 * 
 * Created on April 14, 2017, 10:52 AM
 */

#include "Solution.h"

Solution::Solution() {
}

Solution::Solution(const Solution& orig) {
}

Solution::~Solution() {
}

double Solution::myPow(double x, int n) {
    if (n < 0) return 1 / help(x, -n);
    return help(x, n);
}

double Solution::help(double x, int n) {
    if (n == 0) return 1;
    double half = help(x, n / 2);
    if (n % 2 == 0) return half * half;
    return x * half * half;
}

