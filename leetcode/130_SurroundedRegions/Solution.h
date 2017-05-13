/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Solution.h
 * Author: eddy
 *
 * Created on May 12, 2017, 10:21 AM
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
    
    void solve(vector<vector<char>>& board);
    
private:
    
    void help(vector<vector<char>>& board, int x, int y);
    

};

#endif /* SOLUTION_H */

