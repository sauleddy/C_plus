/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Solution.h
 * Author: eddy
 *
 * Created on May 10, 2017, 9:07 AM
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
    
    int longestIncreasingPath(vector<vector<int>>& matrix);
    
private:

    int help(vector<vector<int>>& matrix, vector<vector<int>>& history
        , int x, int y, int& maxLength);
    
};

#endif /* SOLUTION_H */

