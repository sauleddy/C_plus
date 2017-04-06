/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Solution.h
 * Author: eddy
 *
 * Created on April 4, 2017, 6:20 PM
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
    
    string toHex(int num);
    
private:

};

#endif /* SOLUTION_H */

