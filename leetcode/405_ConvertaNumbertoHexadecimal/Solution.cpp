/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Solution.cpp
 * Author: eddy
 * 
 * Created on April 4, 2017, 6:20 PM
 */

#include "Solution.h"
#include <unordered_map>

Solution::Solution() {
}

Solution::Solution(const Solution& orig) {
}

Solution::~Solution() {
}

string Solution::toHex(int num) {
    
    std::unordered_map<int, char> umapTable;
    umapTable[0] = '0';
    umapTable[1] = '1';
    umapTable[2] = '2';
    umapTable[3] = '3';
    umapTable[4] = '4';
    umapTable[5] = '5';
    umapTable[6] = '6';
    umapTable[7] = '7';
    umapTable[8] = '8';
    umapTable[9] = '9';
    umapTable[10] = 'a';
    umapTable[11] = 'b';
    umapTable[12] = 'c';
    umapTable[13] = 'd';
    umapTable[14] = 'e';
    umapTable[15] = 'f';
    
    string result = "";
    if(num == 0) {
        return "0";
    }
    unsigned int quotient = num;
    if(num < 0) {
        quotient = (~abs(num)) + 1;
    }
    int remainder = 0;
    while(quotient != 0) {
        remainder = quotient % 16;
        result = umapTable[remainder] + result;
        quotient = quotient / 16;
    }
    return result;
}

