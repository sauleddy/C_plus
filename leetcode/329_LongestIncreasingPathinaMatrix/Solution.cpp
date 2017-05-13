/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Solution.cpp
 * Author: eddy
 * 
 * Created on May 10, 2017, 9:07 AM
 */

#include "Solution.h"

Solution::Solution() {
}

Solution::Solution(const Solution& orig) {
}

Solution::~Solution() {
}

int Solution::longestIncreasingPath(vector<vector<int>>& matrix) {
    if(matrix.size() == 0 || matrix[0].size() == 0) return 0;
    
    int maxLength = 0;
    vector<vector<int>> history(matrix.size(), vector<int>(matrix[0].size(), 0));
    for(int i=0; i<matrix.size(); ++i) {
        for(int j=0; j<matrix[0].size(); ++j) {
            this->help(matrix, history, i, j, maxLength);
        }
    }
    return maxLength;
}

int Solution::help(vector<vector<int>>& matrix, vector<vector<int>>& history
    , int x, int y, int& maxLength) {
    // if(x < 0 || x >= matrix.size() || y < 0 || y >= matrix[0].size()) return 0;
    if(history[x][y] != 0) return history[x][y];
    
    int maxThisLength = 1;
    if(x-1 >= 0 && matrix[x][y] < matrix[x-1][y]) {
        int resUp = this->help(matrix, history, x-1, y, maxLength);
        maxThisLength = (resUp + 1) > maxThisLength ? resUp + 1 : maxThisLength;
    }
    if(y+1 < matrix[0].size() && matrix[x][y] < matrix[x][y+1]) {
        int resRight = this->help(matrix, history, x, y+1, maxLength);
        maxThisLength = (resRight + 1) > maxThisLength ? resRight + 1 : maxThisLength;
    }
    if(x+1 < matrix.size() && matrix[x][y] < matrix[x+1][y]) {
        int resDown = this->help(matrix, history, x+1, y, maxLength);
        maxThisLength = (resDown + 1) > maxThisLength ? resDown + 1 : maxThisLength;
    }
    if(y-1 >= 0 && matrix[x][y] < matrix[x][y-1]) {
        int resLeft = this->help(matrix, history, x, y-1, maxLength);
        maxThisLength = (resLeft + 1) > maxThisLength ? resLeft + 1 : maxThisLength;
    }
    if(maxThisLength > maxLength) maxLength = maxThisLength;
    history[x][y] = maxThisLength;
    return maxThisLength;
}

