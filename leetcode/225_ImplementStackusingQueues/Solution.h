/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Solution.h
 * Author: eddy
 *
 * Created on April 20, 2017, 11:05 AM
 */

#ifndef SOLUTION_H
#define SOLUTION_H

#include <queue>

using namespace std;

class Solution {
public:
    Solution();
    Solution(const Solution& orig);
    virtual ~Solution();
    
    void push(int x);
    int pop();
    int top();
    bool empty();
    
private:

    queue<int> q_nums;
};

#endif /* SOLUTION_H */

