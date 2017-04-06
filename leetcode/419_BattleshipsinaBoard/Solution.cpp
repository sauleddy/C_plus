/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Solution.cpp
 * Author: eddy
 * 
 * Created on March 20, 2017, 1:27 PM
 */

#include "Solution.h"

Solution::Solution() {
}

Solution::Solution(const Solution& orig) {
}

Solution::~Solution() {
}

int Solution::countBattleships(vector<vector<char>>& board) {   
    int num = 0;
    for(int i=0; i<board.size(); ++i) {
        for(int j=0; j<board[i].size(); ++j) {
            if(board[i][j] == 'X') {
                if(i == 0 && j == 0) {
                    ++num;
                } else if(i == 0 && board[i][j-1] != 'X') {
                    ++num;
                } else if(j == 0 && board[i-1][j] != 'X') {
                    ++num;
                } else if(board[i][j-1] != 'X' && board[i-1][j] != 'X') {
                    ++num;
                }
            }
        }
    }
    return num;
}

