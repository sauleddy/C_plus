/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Solution.cpp
 * Author: eddy
 * 
 * Created on March 16, 2017, 3:15 PM
 */

#include <iostream>
#include <bitset>
#include "Solution.h"

Solution::Solution() {
}

Solution::Solution(const Solution& orig) {
}

Solution::~Solution() {
}

int Solution::hammingDistance(int x, int y) {
    std::bitset<32> bitx(x);
    std::bitset<32> bity(y);
    std::bitset<32> bitz = bitx ^ bity;
    return bitz.count();
}

