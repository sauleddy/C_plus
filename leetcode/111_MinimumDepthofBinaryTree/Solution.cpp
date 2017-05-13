/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Solution.cpp
 * Author: eddy
 * 
 * Created on May 13, 2017, 9:12 PM
 */

#include "Solution.h"
#include <limits.h>

Solution::Solution() {
}

Solution::Solution(const Solution& orig) {
}

Solution::~Solution() {
}

int Solution::minDepth(TreeNode* root) {
    if(root == nullptr) return 0;
    int minDepth = INT_MAX;
    this->help(root, 1, minDepth);
    return minDepth;
}


void Solution::help(TreeNode* root, int depth, int& minDepth) {
    if(depth >= minDepth) return;
    
    if(root->left == nullptr && root->right == nullptr) {
        if(depth < minDepth) {
            minDepth = depth;
        }
        return;
    }
    
    if(root->left != nullptr) this->help(root->left, depth + 1, minDepth);
    if(root->right != nullptr) this->help(root->right, depth + 1, minDepth);
}

