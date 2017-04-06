/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Solution.cpp
 * Author: eddy
 * 
 * Created on March 22, 2017, 4:04 PM
 */

#include "Solution.h"

Solution::Solution() {
}

Solution::Solution(const Solution& orig) {
}

Solution::~Solution() {
}

int Solution::findPoisonedDuration(vector<int>& timeSeries, int duration) {
    int vecSize = timeSeries.size();
    if(vecSize == 0) {
        return 0;
    }
        
    int totalPos = timeSeries[vecSize-1] + duration - timeSeries[0];
    
    for(int i=1; i<timeSeries.size(); ++i) {
        int endExepect = timeSeries[i-1] + duration;
        if(timeSeries[i] > endExepect) {
            totalPos -= timeSeries[i] - endExepect;
        }
    }
    
    return totalPos;
}

