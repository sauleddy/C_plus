/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Solution.cpp
 * Author: eddy
 * 
 * Created on April 20, 2017, 10:01 AM
 */

#include "Solution.h"
#include <algorithm>

Solution::Solution() {
}

Solution::Solution(const Solution& orig) {
}

Solution::~Solution() {
}

bool Solution::isBalanced(TreeNode* root) {
    int height = 0;
    return this->help(root, height);
}

bool Solution::help(TreeNode* root, int& height) {
    if(root == nullptr) {
        height = 0;
        return true;
    }
    int height_left = 0;
    int height_right = 0;
    if(this->help(root->left, height_left) && this->help(root->right, height_right)) {
        return false;
    }
    height = 1 + std::max(height_left, height_right);
    return true;
}

