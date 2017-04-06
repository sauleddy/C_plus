/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Solution.cpp
 * Author: eddy
 * 
 * Created on March 19, 2017, 11:20 AM
 */

#include "Solution.h"
#include <algorithm>
#include <iostream>


Solution::Solution() {
}

Solution::Solution(const Solution& orig) {
}

Solution::~Solution() {
}

int Solution::islandPerimeter(vector<vector<int>>& grid) {
    if(grid.size() == 0)
        return 0;
    int margin = 0;
    for(int row=0; row<grid.size(); ++row) {
        for(int col=0; col<grid[row].size(); ++col) {
            //cout<< grid[row][col]<< endl;
            if(grid[row][col] == 1) {
                if(col == 0) {
                    ++margin;
                }
                
                if(col == grid[row].size()-1) {
                    ++margin;
                }
                
                if(row == 0) {
                    ++margin;
                } 
                
                if(row == grid.size()-1) {
                    ++margin;
                }
            }
            if(col > 0)
                margin += abs(grid[row][col] - grid[row][col-1]);
            
            if(row > 0)
                margin += abs(grid[row][col] - grid[row-1][col]);
        }
    }
    
    return margin;
}

