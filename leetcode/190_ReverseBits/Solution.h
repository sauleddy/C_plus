/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Solution.h
 * Author: eddy
 *
 * Created on May 20, 2017, 10:29 AM
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
    
    uint32_t reverseBits(uint32_t n);
    
private:

};

#endif /* SOLUTION_H */

