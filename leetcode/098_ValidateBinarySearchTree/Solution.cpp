/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Solution.cpp
 * Author: eddy
 * 
 * Created on May 5, 2017, 9:16 AM
 */

#include "Solution.h"
#include <climits>

Solution::Solution() {
}

Solution::Solution(const Solution& orig) {
}

Solution::~Solution() {
}

bool Solution::isValidBST(TreeNode* root) {
    bool status = true;
    this->help(root, status, LONG_MIN, LONG_MAX);
    return status;
}

void Solution::help(TreeNode* root, bool& status, long min, long max) {
    if(status == false) return;
    if(root == nullptr) return;
    if(root->val <= min || root->val >= max) {
        status = false;
        return;
    }
    if(root->left == nullptr && root->right == nullptr) return;
    
    this->help(root->left, status, min, root->val);
    if(status == false) return;
    this->help(root->right, status, root->val, max);
    if(status == false) return;
    
    if((root->left != nullptr && root->val <= root->left->val) 
            || (root->right != nullptr && root->val >= root->right->val)) status = false;
}

