/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Solution.cpp
 * Author: eddy
 * 
 * Created on April 20, 2017, 9:14 AM
 */

#include "Solution.h"

Solution::Solution() {
}

Solution::Solution(const Solution& orig) {
}

Solution::~Solution() {
}

int Solution::numIslands(vector<vector<char>>& grid) {
    int len_row = grid.size();
    if(len_row == 0 || grid[0].size() == 0) {
        return 0;
    }
    int len_col = grid[0].size();
    int result = 0;
    vector<vector<int>> traversed(len_row, vector<int>(len_col, 0));
    for(int i=0; i<len_row; ++i) {
        for(int j=0; j<len_col; ++j) {
            if(grid[i][j] == '1' && traversed[i][j] == 0) {
                ++result;
                this->help(grid, traversed, i, j);
            }
        }
    }
    return result;
}

void Solution::help(vector<vector<char>>& grid, vector<vector<int>>& traversed, int row, int col) {
    int len_row = grid.size();
    int len_col = grid[0].size();
    if(row < 0 || len_row >= len_row || col < 0 || col >= len_col) {
        return;
    }
    if(traversed[row][col] == 1 || grid[row][col] == '0') {
        return;
    }
    traversed[row][col] = 1;
    this->help(grid, traversed, row, col + 1);
    this->help(grid, traversed, row + 1, col);
    this->help(grid, traversed, row, col - 1);
    this->help(grid, traversed, row - 1, col);
}

