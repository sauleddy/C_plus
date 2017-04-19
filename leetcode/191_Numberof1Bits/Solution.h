/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Solution.h
 * Author: eddy
 *
 * Created on April 19, 2017, 10:51 AM
 */

#ifndef SOLUTION_H
#define SOLUTION_H

#include <stdint.h>

class Solution {
public:
    Solution();
    Solution(const Solution& orig);
    virtual ~Solution();
    
    int hammingWeight(uint32_t n);
    
private:

};

#endif /* SOLUTION_H */

