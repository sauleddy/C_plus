/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Solution.cpp
 * Author: eddy
 * 
 * Created on March 16, 2017, 4:29 PM
 */

#include "Solution.h"

Solution::Solution() {
}

Solution::Solution(const Solution& orig) {
}

Solution::~Solution() {
}

vector<string> Solution::fizzBuzz(int n) {
    vector<string> res;
    for (int i = 1; i <= n; ++i) {
        if (i % 15 == 0) res.push_back("FizzBuzz");
        else if (i % 3 == 0) res.push_back("Fizz");
        else if (i % 5 == 0) res.push_back("Buzz");
        else res.push_back(to_string(i));
    }
    return res;
}

