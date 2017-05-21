/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Solution.cpp
 * Author: eddy
 * 
 * Created on May 16, 2017, 10:33 AM
 */

#include "Solution.h"

enum Mode {
    right = 0, down, left, up
};

Solution::Solution() {
}

Solution::Solution(const Solution& orig) {
}

Solution::~Solution() {
}

vector<int> Solution::spiralOrder(vector<vector<int>>& matrix) {
    vector<int> result;
    if(matrix.size() == 0 || matrix[0].size() == 0) return result;
    int rowSize = matrix.size();
    int colSize = matrix[0].size();
    int totalSize = rowSize * colSize;
    int modeThis = right;
    int posX = 0, posY = -1;
    int lastMoveY = colSize + 1;
    int lastMoveX = rowSize;
    
    while(result.size() < totalSize) {
        int end = 0;
        switch(modeThis) {
            case right:
                ++posY;
                --lastMoveY;
                end = posY+lastMoveY;
                for(posY; posY<end; ++posY) result.push_back(matrix[posX][posY]);
                --posY;
                modeThis = down;
                break;
            case down:
                ++posX;
                --lastMoveX;
                end = posX+lastMoveX;
                for(posX; posX<end; ++posX) result.push_back(matrix[posX][posY]);
                --posX;
                modeThis = left;
                break;
            case left:
                --posY;
                --lastMoveY;
                end = posY-lastMoveY;
                for(posY; posY>end; --posY) result.push_back(matrix[posX][posY]);
                ++posY;
                modeThis = up;
                break;
            case up:
                --posX;
                --lastMoveX;
                end = posX-lastMoveX;
                for(posX; posX>end; --posX) result.push_back(matrix[posX][posY]);
                ++posX;
                modeThis = right;
                break;
            default:
                break;
        }
    }
    return result;
}

