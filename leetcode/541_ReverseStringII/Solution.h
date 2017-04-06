/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Solution.h
 * Author: eddy
 *
 * Created on March 30, 2017, 2:13 PM
 */

#ifndef SOLUTION_H
#define SOLUTION_H

#include <iostream>

using namespace std;

class Solution {
public:
    Solution();
    Solution(const Solution& orig);
    virtual ~Solution();
    
    string reverseStr(string s, int k);
    
private:

};

#endif /* SOLUTION_H */

