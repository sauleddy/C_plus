/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Solution.cpp
 * Author: eddy
 * 
 * Created on May 14, 2017, 12:34 PM
 */

#include "Solution.h"
#include <algorithm>

Solution::Solution() {
}

Solution::Solution(const Solution& orig) {
}

Solution::~Solution() {
}

int Solution::maximalSquare(vector<vector<char>>& matrix) {
    if(matrix.size() == 0 || matrix[0].size() == 0) return 0;
    vector<vector<int>> dp(matrix.size(), vector<int>(matrix[0].size(), 0));
    int maxSquare = 0;
    for(int i=0; i<matrix.size(); ++i) {
        for(int j=0; j<matrix[0].size(); ++j) {
            if(matrix[i][j] == '1') {
                if(i == 0 || j == 0) dp[i][j] = matrix[i][j] - '0';
                else {
                    int adjacent[] = {dp[i-1][j-1], dp[i-1][j], dp[i][j-1]};
                    dp[i][j] = *std::min_element(adjacent, adjacent + 3) + 1;
                }
                //cout<< "i="<< i<< ",j="<< j<< "=>"<< dp[i][j]<< endl;
                if(dp[i][j] > maxSquare) maxSquare = dp[i][j];
            }
        }
    }
    return pow(maxSquare, 2);
}

