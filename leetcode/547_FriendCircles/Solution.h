/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Solution.h
 * Author: eddy
 *
 * Created on April 29, 2017, 11:08 AM
 */

#ifndef SOLUTION_H
#define SOLUTION_H

#include <vector>

using namespace std;

class Solution {
public:
    Solution();
    Solution(const Solution& orig);
    virtual ~Solution();
    
    int findCircleNum(vector<vector<int>>& M);
    
private:

    void help(vector<vector<int>>& M, vector<int>& determined, int begin);
    
};

#endif /* SOLUTION_H */

