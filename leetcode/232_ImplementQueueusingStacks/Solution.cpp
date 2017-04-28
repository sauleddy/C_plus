/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Solution.cpp
 * Author: eddy
 * 
 * Created on April 20, 2017, 10:40 AM
 */

#include "Solution.h"

Solution::Solution() {
}

Solution::Solution(const Solution& orig) {
}

Solution::~Solution() {
}

void Solution::push(int x) {
    stack1.push(x);
}

int Solution::pop() {
    int num_pop = this->peek();
    stack2.pop();
    return num_pop;
}

int Solution::peek() {
    if(stack2.empty()) {
        this->move_one_to_two();
    }
    return stack2.top();
}

bool Solution::empty() {
    return stack1.size() + stack2.size() == 0;
}

void Solution::move_one_to_two() {
    while(!stack1.empty()) {
        stack2.push(stack1.top());
        stack1.pop();
    }
}

