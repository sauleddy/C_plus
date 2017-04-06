/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Solution.cpp
 * Author: eddy
 * 
 * Created on March 22, 2017, 4:26 PM
 */

#include "Solution.h"

Solution::Solution() {
}

Solution::Solution(const Solution& orig) {
}

Solution::~Solution() {
}

vector<vector<char>> Solution::updateBoard(vector<vector<char>>& board, vector<int>& click) {
    if(board.size() == 0 || click.size() == 0) {
        return board;
    }
    int row = click[0];
    int col = click[1];
    if(board[row][col] == 'M') {
        board[row][col] = 'X';
        return board;
    }

    int regLeft = col - 1;
    int regRight = col + 1;
    int regUp = row - 1;
    int regBottom = row + 1;
    if(regLeft < 0)
        regLeft = 0;
    if(regUp < 0)
        regUp = 0;
    if(regRight >= board[0].size())
        regRight = board[0].size() - 1;
    if(regBottom >= board.size())
        regBottom = board.size() - 1;

    if(board[row][col] == 'E') {
        int numMine = 0;
        for(int i=regLeft; i<=regRight; ++i) {
            for(int j=regUp; j<=regBottom; ++j) {
                if(board[j][i] == 'M') {
                    ++numMine;
                }
            }
        }
        if(numMine > 0) {
            board[row][col] = (char)(numMine + '0');
        } else {
            board[row][col] = 'B';
            for(int i=regLeft; i<=regRight; ++i) {
                for(int j=regUp; j<=regBottom; ++j) {
                    if(board[j][i] == 'E') {
                        std::vector<int> vecNextClick = {j, i};
                        updateBoard(board, vecNextClick);
                    }
                }
            }
        }
    }
    return board;
}

