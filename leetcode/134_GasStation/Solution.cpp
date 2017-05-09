/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Solution.cpp
 * Author: eddy
 * 
 * Created on May 6, 2017, 9:22 AM
 */

#include "Solution.h"
#include <vector>

using namespace std;

Solution::Solution() {
}

Solution::Solution(const Solution& orig) {
}

Solution::~Solution() {
}

int Solution::canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
    int begin = 0;
    int curGas = 0;
    int lastConsume = 0;
    for(int i=0; i<gas.size(); ++i) {
        curGas += gas[i] - cost[i];
        if(curGas < 0) {
            begin = i + 1;
            lastConsume += curGas;
            curGas = 0;
            if(begin > gas.size() - 1) return -1;
        }
    }
    if(curGas + lastConsume < 0) return -1;
    return begin;
}

