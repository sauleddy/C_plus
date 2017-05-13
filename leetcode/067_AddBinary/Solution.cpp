/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Solution.cpp
 * Author: eddy
 * 
 * Created on May 12, 2017, 9:09 AM
 */

#include "Solution.h"

Solution::Solution() {
}

Solution::Solution(const Solution& orig) {
}

Solution::~Solution() {
}

string Solution::addBinary(string a, string b) {
    int carry = 0;
    string result = "";
    int idxA = a.length() - 1, idxB = b.length() - 1;
    while(idxA >= 0 && idxB >= 0) {
        int digitA = (idxA >= 0 ? a[idxA] - '0' : 0);
        int digitB = (idxB >= 0 ? b[idxB] - '0' : 0);
        
        int sumThis = digitA + digitB + carry;
        if(sumThis % 2 != 0) result = "1" + result;
        else result = "0" + result;
        carry = (sumThis + 1) / 2;
        --idxA;
        --idxB;
        if((idxA < 0 || idxB < 0) && carry == 0) {
            break;
        }
    }
    return result;
}

