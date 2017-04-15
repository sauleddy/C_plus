/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Solution.cpp
 * Author: eddy
 * 
 * Created on April 14, 2017, 7:58 PM
 */

#include "Solution.h"

Solution::Solution() {
}

Solution::Solution(const Solution& orig) {
}

Solution::~Solution() {
}

int Solution::uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
    int len_row = obstacleGrid.size();
    int len_col = obstacleGrid[0].size();
    if(len_row * len_col == 0) {
        return 0;
    }
    unordered_map<int, int> umap_dp;
    return this->help(obstacleGrid, 0, 0, umap_dp);
}

int Solution::help(vector<vector<int>>& obstacleGrid, int x, int y, unordered_map<int, int>& umap_dp) {
    int len_row = obstacleGrid.size();
    int len_col = obstacleGrid[0].size();
    if(x >= len_row || y > len_col) {
        return 0;
    }
    if(obstacleGrid[x][y] == 0) {
        return 0;
    }
    if(x == len_row-1 && y == len_col-1) {
        return 1;
    }
    int key = x << 4 + y;
    if(umap_dp[key] != 0) {
        return umap_dp[key];
    }
    int right_res = this->help(obstacleGrid, x+1, y, umap_dp);
    int down_res = this->help(obstacleGrid, x, y+1, umap_dp);
    int sum = right_res + down_res;
    umap_dp[key] = sum;
    return sum;
}

