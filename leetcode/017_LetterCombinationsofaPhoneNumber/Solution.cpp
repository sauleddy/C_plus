/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Solution.cpp
 * Author: eddy
 * 
 * Created on April 11, 2017, 2:38 PM
 */

#include <string>

#include "Solution.h"

Solution::Solution() {
}

Solution::Solution(const Solution& orig) {
}

Solution::~Solution() {
}

vector<string> Solution::letterCombinations(string digits) {
    std::vector<string> vecTotal = {"abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
    std::vector<string> vecValid;
    std::vector<string> vecResult;
    if(digits.length() == 0) {
        return vecResult;
    }
    for(int i=0; i<digits.length(); ++i) {
        int index = digits[i]- '0' - 2;
        vecValid.push_back(vecTotal[index]);
    }
    this->help(vecValid, 0, vecResult);
    return vecResult;
}

void Solution::help(vector<string>& vecValid, int index, vector<string>& vecResult) {
    string strThis = vecValid[index];
    if(index == vecValid.size() - 1) {
        for(int i=0; i<strThis.length(); ++i) {
            string strPush = "";
            strPush.push_back(strThis[i]);
            vecResult.push_back(strPush);
        }
        return;
    }
    this->help(vecValid, index+1, vecResult);
    int size_this = vecResult.size();
    for(int i=0; i<strThis.length(); ++i) {
        for(int j=0; j<size_this; ++j) {
            if(i == strThis.length() - 1) {
                vecResult[j].insert(vecResult[j].begin(), strThis[i]);
            } else {
                string strNew = vecResult[j];
                strNew.insert(strNew.begin(), strThis[i]);
                vecResult.push_back(strNew);
            }
        }
    }
}

