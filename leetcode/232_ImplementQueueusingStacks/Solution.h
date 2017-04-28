/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Solution.h
 * Author: eddy
 *
 * Created on April 20, 2017, 10:40 AM
 */

#ifndef SOLUTION_H
#define SOLUTION_H

#include <stack>

using namespace std;

class Solution {
public:
    Solution();
    Solution(const Solution& orig);
    virtual ~Solution();
    
    void push(int x);
    int pop();
    int peek();
    bool empty();
    
private:

    void move_one_to_two();
    
    stack<int> stack1;
    stack<int> stack2;
};

#endif /* SOLUTION_H */

