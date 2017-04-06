/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Solution.cpp
 * Author: eddy
 * 
 * Created on April 4, 2017, 7:07 PM
 */

#include "Solution.h"

Solution::Solution() {
}

Solution::Solution(const Solution& orig) {
}

Solution::~Solution() {
}

vector<int> Solution::lexicalOrder(int n) {
    vector<int> vecRes;
    for(int i=1; i<10; ++i) {
        if(i > n) {
            break;
        }
        vecRes.push_back(i);
        this->help(n, i, vecRes);
    }
    return vecRes;
}

void Solution::help(int& n, int cur, vector<int>& vecRes) {
    
    int num_10t = cur * 10;
    for(int i=num_10t; i<num_10t+10; ++i) {
        if(i > n) {
            break;
        }
        vecRes.push_back(i);
        this->help(n, i, vecRes);
    }
}

