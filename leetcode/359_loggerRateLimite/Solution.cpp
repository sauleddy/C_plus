/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Solution.cpp
 * Author: eddy
 * 
 * Created on March 16, 2017, 4:19 PM
 */

#include "Solution.h"

Solution::Solution() {
}

Solution::Solution(const Solution& orig) {
}

Solution::~Solution() {
}

bool Solution::shouldPrintMessage(int timestamp, string message) {
    
    bool bRet = true;
    if(umapMsgTime.count(message) == 0) {
        bRet = true;
    } else {
        if((umapMsgTime[message] - timestamp) <= 10) {
            bRet = false;
        } else {
            bRet = true;
        }
    }
    umapMsgTime[message] = timestamp;
    return bRet;
}

