/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Solution.h
 * Author: eddy
 *
 * Created on April 4, 2017, 7:28 PM
 */

#ifndef SOLUTION_H
#define SOLUTION_H

#include <unordered_map>
#include <iostream>

using namespace std;

class Solution {
public:
    Solution();
    Solution(const Solution& orig);
    virtual ~Solution();
    
    int numTrees(int n);
    
private:

    int help(int left, int right, std::unordered_map<int, int>& umapDp);
    
};

#endif /* SOLUTION_H */

