/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Solution.cpp
 * Author: eddy
 * 
 * Created on April 12, 2017, 4:47 PM
 */

#include "Solution.h"

Solution::Solution() {
}

Solution::Solution(const Solution& orig) {
}

Solution::~Solution() {
}

void Solution::flatten(TreeNode* root) {
    if(root == nullptr) {
        return;
    }
    this->flatten(root->left);
    this->flatten(root->right);
    if(root->left != nullptr) {
        TreeNode* temp = root->left;
        while(temp->right != nullptr) {
            temp = temp->right;
        }
        temp->right = root->right;
        root->right = root->left;
        root->left = nullptr;
    }
}

