/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Solution.cpp
 * Author: eddy
 * 
 * Created on April 29, 2017, 11:09 AM
 */

#include "Solution.h"

Solution::Solution() {
}

Solution::Solution(const Solution& orig) {
}

Solution::~Solution() {
}

int Solution::findCircleNum(vector<vector<int>>& M) {
    int num_people = M.size();
    int num_circles = 0;
    vector<int> determined(num_people, 0);
    for(int i=0; i<num_people; ++i) {
        if(determined[i] == 0) {
            determined[i] = 1;
            this->help(M, determined, i);
            ++num_circles;
        }
    }
    return num_circles;
}

void Solution::help(vector<vector<int>>& M, vector<int>& determined, int begin) {
    int num_people = M.size();
    for(int i=0; i<num_people; ++i) {
        if(determined[i] == 0 && M[begin][i] == 1) {
            determined[i] = 1;
            this->help(M, determined, i);
        }
    }
}

