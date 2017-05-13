/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Solution.cpp
 * Author: eddy
 * 
 * Created on May 10, 2017, 10:35 AM
 */

#include "Solution.h"
#include <algorithm>

Solution::Solution() {
}

Solution::Solution(const Solution& orig) {
}

Solution::~Solution() {
}

int findMinMoves(vector<int>& machines) {
    int sum = std::accumulate(machines.begin(), machines.end(), 0);
    if(sum % machines.size() != 0) return -1;
    int average = sum / machines.size();
    int step = 0;
    vector<int> status(machines.size(), 0);
    int lastStep = 0;
    for(int i=0; i<machines.size()-1; ++i) {
        status[i] += machines[i] - average; 
        int thisStep = 0;
        if(i > 0 && status[i-1] < 0 && status[i] > 0) {
            thisStep = lastStep + status[i];
        } else {
            thisStep = 0 - status[i];    
        }
        if(thisStep > step) step = thisStep;
        lastStep = thisStep;
        status[i+1] += status[i];
    }
    return step;
}

