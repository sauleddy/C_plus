/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Solution.cpp
 * Author: eddy
 * 
 * Created on April 20, 2017, 11:05 AM
 */

#include "Solution.h"

Solution::Solution() {
}

Solution::Solution(const Solution& orig) {
}

Solution::~Solution() {
}

void Solution::push(int x) {
    queue<int> q_tmp;
    while(!q_nums.empty()) {
        q_tmp.push(q_nums.front());
        q_nums.pop();
    }
    q_nums.push(x);
    while(!q_tmp.empty()) {
        q_nums.push(q_tmp.front());
        q_tmp.pop();
    }
}

int Solution::pop() {
    int num_pop = this->top();
    q_nums.pop();
    return num_pop;
}

int Solution::top() {
    return q_nums.front();
}

bool Solution::empty() {
    return q_nums.empty();
}

