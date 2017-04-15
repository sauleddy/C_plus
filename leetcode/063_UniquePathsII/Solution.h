/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Solution.h
 * Author: eddy
 *
 * Created on April 14, 2017, 7:58 PM
 */

#ifndef SOLUTION_H
#define SOLUTION_H

#include <vector>
#include <unordered_map>

using namespace std;

class Solution {
public:
    Solution();
    Solution(const Solution& orig);
    virtual ~Solution();
    
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid);
    
private:
    
    int help(vector<vector<int>>& obstacleGrid, int x, int y, unordered_map<int, int>& umap_dp);
    

};

#endif /* SOLUTION_H */

