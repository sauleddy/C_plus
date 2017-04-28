/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Solution.h
 * Author: eddy
 *
 * Created on April 20, 2017, 9:14 AM
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
    
    int numIslands(vector<vector<char>>& grid);
    
private:

    void help(vector<vector<char>>& grid, vector<vector<int>>& traversed, int row, int col);
    
};

#endif /* SOLUTION_H */

