/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Solution.cpp
 * Author: eddy
 * 
 * Created on March 23, 2017, 11:26 AM
 */

#include "Solution.h"

Solution::Solution() {
}

Solution::Solution(const Solution& orig) {
}

Solution::~Solution() {
}

TreeNode* Solution::invertTree(TreeNode* root) {
    if(root == nullptr) {
        return root;
    }
    
    invertTree(root->left);
    invertTree(root->right);
    
    TreeNode* nodeTemp = root->left;
    root->left = root->right;
    root->right = nodeTemp;
    return root;
}

