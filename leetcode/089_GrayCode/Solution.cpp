/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Solution.cpp
 * Author: eddy
 * 
 * Created on April 19, 2017, 10:02 AM
 */

#include "Solution.h"

Solution::Solution() {
}

Solution::Solution(const Solution& orig) {
}

Solution::~Solution() {
}

vector<int> Solution::grayCode(int n) {
    std::vector<int> result;
    result.push_back(0);
    if(n == 0) {
        return result;
    }
    result.push_back(1);
    for(int i=1; i<n; ++i) {
        int protptype = (1 << i); 
        int j = result.size() - 1;
        for(j=result.size()-1; j>=0; --j) {
            result.push_back(protptype + result[j]);
        }
    }
    return result;
}

