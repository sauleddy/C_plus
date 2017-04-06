/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Solution.h
 * Author: eddy
 *
 * Created on March 29, 2017, 2:59 PM
 */

#ifndef SOLUTION_H
#define SOLUTION_H

#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    Solution();
    Solution(const Solution& orig);
    virtual ~Solution();

    vector<string> readBinaryWatch(int num);
    
private:

};

#endif /* SOLUTION_H */

