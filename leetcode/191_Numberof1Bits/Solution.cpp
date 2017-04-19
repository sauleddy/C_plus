/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Solution.cpp
 * Author: eddy
 * 
 * Created on April 19, 2017, 10:51 AM
 */

#include "Solution.h"
#include <bitset>

using namespace std;

Solution::Solution() {
}

Solution::Solution(const Solution& orig) {
}

Solution::~Solution() {
}

int hammingWeight(uint32_t n) {
    std::bitset<32> bit_n(n);
    return bit_n.count();
}

