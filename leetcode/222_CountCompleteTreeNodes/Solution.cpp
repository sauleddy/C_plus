/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Solution.cpp
 * Author: eddy
 * 
 * Created on April 14, 2017, 10:11 AM
 */

#include "Solution.h"
#include <math.h>

Solution::Solution() {
}

Solution::Solution(const Solution& orig) {
}

Solution::~Solution() {
}

int Solution::countNodes(TreeNode* root) {
    int hLeft = 0, hRight = 0;
    TreeNode *pLeft = root, *pRight = root;
    while (pLeft) {
        ++hLeft;
        pLeft = pLeft->left;
    }
    while (pRight) {
        ++hRight;
        pRight = pRight->right;
    }
    if (hLeft == hRight) return pow(2, hLeft) - 1;
    return countNodes(root->left) + countNodes(root->right) + 1;
}