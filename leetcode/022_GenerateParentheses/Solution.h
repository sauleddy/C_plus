/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Solution.h
 * Author: eddy
 *
 * Created on May 10, 2017, 5:40 PM
 */

#ifndef SOLUTION_H
#define SOLUTION_H

#include <vector>
#include <string>

using namespace std;

class Solution {
public:
    Solution();
    Solution(const Solution& orig);
    virtual ~Solution();
    
    vector<string> generateParenthesis(int n);
    
private:

    void help(string cur, int remainL, int remainR, vector<string>& result);
    
};

#endif /* SOLUTION_H */

