/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Solution.cpp
 * Author: eddy
 * 
 * Created on March 29, 2017, 2:59 PM
 */

#include "Solution.h"

#include <bitset>

Solution::Solution() {
}

Solution::Solution(const Solution& orig) {
}

Solution::~Solution() {
}

vector<string> Solution::readBinaryWatch(int num) {
    std::vector<string> vecResult;
    for(int i=0; i<=11; ++i) {
        for(int j=0; j<=59; ++j) {
            int time = (i << 6) + j;
            std::bitset<10> b(time);
            if(b.count() == num) {
                char time[6];
                sprintf(time, "%d:%02d", i, j);
                vecResult.push_back(time);
            }
        }
    }
    return vecResult;
}

