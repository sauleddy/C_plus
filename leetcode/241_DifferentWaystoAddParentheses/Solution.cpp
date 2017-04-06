/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Solution.cpp
 * Author: eddy
 * 
 * Created on April 1, 2017, 12:43 PM
 */

#include <string>

#include "Solution.h"

#include <string>

Solution::Solution() {
}

Solution::Solution(const Solution& orig) {
}

Solution::~Solution() {
}

vector<int> Solution::diffWaysToCompute(string input) {
    vector<int> vecResult;
    if(input.length() == 0) {
        return vecResult;
    }
    for(int i=0; i<input.length(); ++i) {
        if(input[i] == '+' || input[i] == '-' || input[i] == '*') {
            vector<int> vecLeftRes = this->diffWaysToCompute(input.substr(0, i));
            vector<int> vecRightRes = this->diffWaysToCompute(input.substr(i+1, string::npos));
            for(int iL=0; iL<vecLeftRes.size(); ++iL) {
                for(int iR=0; iR<vecRightRes.size(); ++iR) {
                    int result = 0;
                    if(input[i] == '+') {
                        result = vecLeftRes[iL] + vecRightRes[iR];
                    } else if(input[i] == '-') {
                        result = vecLeftRes[iL] - vecRightRes[iR];
                    } else if(input[i] == '*') {
                        result = vecLeftRes[iL] * vecRightRes[iR];
                    }
                    vecResult.push_back(result);
                }
            }
        }
    }
    if(vecResult.size() == 0) {
        vecResult.push_back(std::stoi(input));
    }
    return vecResult;
}



