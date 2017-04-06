/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Solution.cpp
 * Author: eddy
 * 
 * Created on March 22, 2017, 1:54 PM
 */

#include "Solution.h"

Solution::Solution() {
}

Solution::Solution(const Solution& orig) {
}

Solution::~Solution() {
}

vector<int> Solution::findFrequentTreeSum(TreeNode* root) {
    vector<int> vecSubSum;
    if(root == nullptr) {
        return vecSubSum;
    }
    std::map<int, int> mapSubSum;
    int max = 0;
    CalculateSubSum(root, mapSubSum, max);
    
    for(auto iter=mapSubSum.begin(); iter!=mapSubSum.end(); ++iter) {
        if(iter->second == max) {
            vecSubSum.push_back(iter->first);
        }
    }
    return vecSubSum;
}

int Solution::CalculateSubSum(TreeNode* root, std::map<int, int>& mapSubSum, int& max) {
    if(root == nullptr) {
        return 0;
    }
    int subSum = CalculateSubSum(root->left, mapSubSum, max) + CalculateSubSum(root->right, mapSubSum, max) + root->val;
    auto iter = mapSubSum.find(subSum);
    int times = 1;
    if(iter != mapSubSum.end()) {
        times = iter->second;
        ++iter->second;
        ++times;
    } else {
        mapSubSum.insert(std::pair<int, int>(subSum, times));
    }
    if(times > max) {
        max = times;
    }
    return subSum;
}

