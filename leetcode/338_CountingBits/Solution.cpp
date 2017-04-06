/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Solution.cpp
 * Author: eddy
 * 
 * Created on March 20, 2017, 2:04 PM
 */

#include "Solution.h"

Solution::Solution() {
}

Solution::Solution(const Solution& orig) {
}

Solution::~Solution() {
}

vector<int> Solution::countBits(int num) {
    std::vector<int> vecRet(num+1, 0);
    int multipleTwo = 1;
    int nextMultipleTwo = 2;
    for(int i=1; i<=num; ++i) {
        int reminder = i - multipleTwo;
        vecRet[i] = vecRet[reminder] + 1;
        if(i+1 >= nextMultipleTwo) {
            multipleTwo = nextMultipleTwo;
            nextMultipleTwo *= 2;
        }
    }
    return vecRet;
}

