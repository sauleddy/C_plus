/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Solution.h
 * Author: eddy
 *
 * Created on March 22, 2017, 3:03 PM
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
    
    char findTheDifference(string s, string t);
    
private:

};

#endif /* SOLUTION_H */

