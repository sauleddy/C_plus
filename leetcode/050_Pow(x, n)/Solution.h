/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Solution.h
 * Author: eddy
 *
 * Created on April 14, 2017, 10:52 AM
 */

#ifndef SOLUTION_H
#define SOLUTION_H

#include <unordered_map>

using namespace std;

class Solution {
public:
    Solution();
    Solution(const Solution& orig);
    virtual ~Solution();
    
    double myPow(double x, int n);
    
private:
    
    double help(double x, int n);
    
};

#endif /* SOLUTION_H */

