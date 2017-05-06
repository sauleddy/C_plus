/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Solution.cpp
 * Author: eddy
 * 
 * Created on May 5, 2017, 8:56 AM
 */

#include "Solution.h"

Solution::Solution() {
}

Solution::Solution(const Solution& orig) {
}

Solution::~Solution() {
}

TreeNode* Solution::lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
    int status = 0;
    return this->help(root, p, q, status);
}

TreeNode* help(TreeNode* root, TreeNode* p, TreeNode* q, int& status) {
    if(root == nullptr) return nullptr;
    
    bool isRootValid = false;
    if(root == p) {
        status |= 0x02;
        isRootValid = true;
    }
    if(root == q) {
        status |= 0x01;
        isRootValid = true;
    }
    
    TreeNode* left = nullptr;
    TreeNode* right = nullptr;
    if(status != 0x03) left = help(root->left, p, q, status);
    if(status != 0x03) right = help(root->right, p, q, status);
    if(isRootValid || (left != nullptr && right != nullptr)) return root;
    else if(left != nullptr || right != nullptr) {
        return (left != nullptr ? left : right);
    }
    return nullptr;
}
