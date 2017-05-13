/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Solution.cpp
 * Author: eddy
 * 
 * Created on May 12, 2017, 10:21 AM
 */

#include "Solution.h"

Solution::Solution() {
}

Solution::Solution(const Solution& orig) {
}

Solution::~Solution() {
}

void Solution::solve(vector<vector<char>>& board) {
    if(board.size() <= 1 || board[0].size() <= 1) return;
    int rowFinal = board.size() - 1;
    int colFinal = board[0].size() - 1;
    for(int j=1; j < board[0].size()-1; ++j) {
        if(board[0][j] == 'O') this->help(board, 0, j);
        if(board[rowFinal][j] == 'O') this->help(board, rowFinal, j);
    }
    for(int i=1; i < board.size()-1; ++i) {
        if(board[i][0] == 'O') this->help(board, i, 0);
        if(board[i][colFinal] == 'O') this->help(board, i, colFinal);
    }

    for(int i=0; i < board.size(); ++i) {
        for(int j=0; j < board[0].size(); ++j) {
            if(board[i][j] == 'O') board[i][j] = 'X';
            if(board[i][j] == 'N') board[i][j] = 'O';
        }
    }    
}
    
void Solution::help(vector<vector<char>>& board, int x, int y) {
    if (board[x][y] == 'O') {
        board[x][y] = 'N';
        if (x > 0 && board[x - 1][y] == 'O') 
            help(board, x - 1, y);
        if (y < board[x].size() - 1 && board[x][y + 1] == 'O') 
            help(board, x, y + 1);
        if (x < board.size() - 1 && board[x + 1][y] == 'O') 
            help(board, x + 1, y);
        if (y > 1 && board[x][y - 1] == 'O') 
            help(board, x, y - 1);
    }
}

