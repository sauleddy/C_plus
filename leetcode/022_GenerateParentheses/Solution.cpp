/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Solution.cpp
 * Author: eddy
 * 
 * Created on May 10, 2017, 5:40 PM
 */

#include "Solution.h"
#include <unordered_set>

Solution::Solution() {
}

Solution::Solution(const Solution& orig) {
}

Solution::~Solution() {
}

vector<string> Solution::generateParenthesis(int n) {
    vector<string> result;
    if(n == 0) return result;
    this->help("", n, n, result);
    return result;
}

void Solution::help(string cur, int remainL, int remainR, vector<string>& result) {
    if(remainL == 0) {
        if(remainR == 0) {
            result.push_back(cur);
            return;
        }
        for(int i=0; i<remainR; ++i) cur += ")";
        result.push_back(cur);
        return;
    }
    this->help(cur + "(", remainL - 1, remainR, result);
    if(remainR - 1 >= remainL)
        this->help(cur + ")", remainL, remainR - 1, result);
}

