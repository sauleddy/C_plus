/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Solution.h
 * Author: eddy
 *
 * Created on May 6, 2017, 11:12 AM
 */

#ifndef SOLUTION_H
#define SOLUTION_H

#include <string>

using namespace std;

class Solution {
public:
    Solution();
    Solution(const Solution& orig);
    virtual ~Solution();
    
    string removeKdigits(string num, int k);
    
private:

};

#endif /* SOLUTION_H */

