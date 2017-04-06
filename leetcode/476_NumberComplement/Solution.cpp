/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Solution.cpp
 * Author: eddy
 * 
 * Created on March 16, 2017, 3:21 PM
 */

#include "Solution.h"
#include <bitset>

Solution::Solution() {
}

Solution::Solution(const Solution& orig) {
}

Solution::~Solution() {
}

int Solution::findComplement(int num) {
    
    if(num <= 0)
        return 0;
    
    std::bitset<32> bitnum1(num);
    int numTemp = num;
    int index = 0;
    do {
        bitnum1.flip(index++);
        numTemp >>= 1;
    } while(numTemp != 0);
    
    return bitnum1.to_ulong();
}

