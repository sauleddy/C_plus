/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Solution.cpp
 * Author: eddy
 * 
 * Created on March 24, 2017, 10:37 AM
 */

#include "Solution.h"
#include <iostream>
#include <math.h>

Solution::Solution() {
}

Solution::Solution(const Solution& orig) {
}

Solution::~Solution() {
}

vector<int> Solution::constructRectangle(int area) {
    std::vector<int> vecRet(2, 0);
    int sqrtArea = sqrt(area);
    int lengthCur = sqrtArea;
    while(area % lengthCur != 0) {
        --lengthCur;
    }
    vecRet[0] = area / lengthCur;
    vecRet[1] = lengthCur;
    return vecRet;
}

