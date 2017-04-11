/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Solution.cpp
 * Author: eddy
 * 
 * Created on April 11, 2017, 10:32 AM
 */

#include "Solution.h"
#include <algorithm>
#include <math.h>

Solution::Solution() {
}

Solution::Solution(const Solution& orig) {
}

Solution::~Solution() {
}

int Solution::sumNumbers(TreeNode* root) {
    if(root == nullptr) {
        return 0;
    }
    int sum = 0;
    std::vector<string> vecRet = this->help(root);
    for(int i=0; i<vecRet.size(); ++i) {
        int cnt = 0;
        for(int j=vecRet[i].length()-1; j>=0; --j) {
            sum += (vecRet[i][j] - '0') * pow(10, cnt);
            ++cnt;
        }
    }
    return sum;
}

std::vector<string> Solution::help(TreeNode* root) {
    std::vector<string> vecRet;
    if(root->left == nullptr && root->right == nullptr) {
        vecRet.push_back(std::to_string(root->val));
        return vecRet;
    }
    std::vector<string> vecLeft;
    if(root->left != nullptr) {
        vecLeft = this->help(root->left);
    }
    std::vector<string> vecRight;
    if(root->right != nullptr) {
        vecRight = this->help(root->right);
    }
    vecLeft.insert(vecLeft.end(), vecRight.begin(), vecRight.end());
    for(int i=0; i<vecLeft.size(); ++i) {
        vecLeft[i] = std::to_string(root->val) + vecLeft[i];
    }
    return vecLeft;
}

