/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Solution.cpp
 * Author: eddy
 * 
 * Created on May 4, 2017, 9:06 AM
 */

#include "Solution.h"
#include <queue>

Solution::Solution() {
}

Solution::Solution(const Solution& orig) {
}

Solution::~Solution() {
}

vector<vector<int>> Solution::updateMatrix(vector<vector<int>>& matrix) {
    vector<vector<int>> resMatrix(matrix.size(), vector<int>(matrix[0].size(), 0));
    for(int i=0; i<matrix.size(); ++i) {
        for(int j=0; j<matrix[0].size(); ++j) {
            if(matrix[i][j] == 0) {
                queue<pair<int, int>> myQueue;
                int dist = 1;
                if(isValid(matrix, resMatrix, i-1, j, dist)) myQueue.push(pair<int, int>(i-1, j));
                if(isValid(matrix, resMatrix, i, j+1, dist)) myQueue.push(pair<int, int>(i, j+1));
                if(isValid(matrix, resMatrix, i+1, j, dist)) myQueue.push(pair<int, int>(i+1, j));
                if(isValid(matrix, resMatrix, i, j-1, dist)) myQueue.push(pair<int, int>(i, j-1));
                int num_this = myQueue.size();
                // cout<< num_this<< endl;
                while(!myQueue.empty()) {
                    pair<int, int> idx_this = myQueue.front();
                    // cout<< idx_this.first << ","<< idx_this.second<< endl;
                    resMatrix[idx_this.first][idx_this.second] = dist;

                    if(isValid(matrix, resMatrix, idx_this.first-1, idx_this.second, dist+1)) myQueue.push(pair<int, int>(idx_this.first-1, idx_this.second));
                    if(isValid(matrix, resMatrix, idx_this.first, idx_this.second+1, dist+1)) myQueue.push(pair<int, int>(idx_this.first, idx_this.second+1));
                    if(isValid(matrix, resMatrix, idx_this.first+1, idx_this.second, dist+1)) myQueue.push(pair<int, int>(idx_this.first+1, idx_this.second));
                    if(isValid(matrix, resMatrix, idx_this.first, idx_this.second-1, dist+1)) myQueue.push(pair<int, int>(idx_this.first, idx_this.second-1));

                    myQueue.pop();
                    --num_this;
                    if(num_this == 0) {
                        ++dist;
                        num_this = myQueue.size();
                    }
                }    
            }
        }
    }
    return resMatrix;
}

bool Solution::isValid(vector<vector<int>>& matrix, vector<vector<int>>& resMatrix, int x, int y, int dist) {
    if(x < 0 || x >= matrix.size() || y < 0 || y >= matrix[0].size()) return false;
    if(matrix[x][y] == 0) return false;
    if(resMatrix[x][y] != 0 && resMatrix[x][y] < dist) return false;
    return true;
}

