/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Solution.cpp
 * Author: eddy
 * 
 * Created on May 20, 2017, 10:29 AM
 */

#include "Solution.h"
#include <bitset>
#include <algorithm>

Solution::Solution() {
}

Solution::Solution(const Solution& orig) {
}

Solution::~Solution() {
}

uint32_t Solution::reverseBits(uint32_t n) {
    bitset<32> bits(n);
    int begin = 0, end = 31;
    while(begin < end) {
        if(bits[begin] != bits[end]) {
            int temp = bits[begin];
            bits[begin] = bits[end];
            bits[end] = temp;
        }
        ++begin;
        --end;
    }
    return bits.to_ulong();
}

