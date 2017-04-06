/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Solution.cpp
 * Author: eddy
 * 
 * Created on March 20, 2017, 2:19 PM
 */

#include <algorithm>
#include <queue>
#include "Solution.h"

Solution::Solution() {
}

Solution::Solution(const Solution& orig) {
}

Solution::~Solution() {
}

int Solution::findBottomLeftValue(TreeNode* root) {
    std::queue<TreeNode*> queueTree;
    queueTree.push(root);
    int bottomLeft = root->val;
    while(!queueTree.empty()) {
        bottomLeft = queueTree.front()->val;
        int size = queueTree.size();
        for(int i=0; i<size; ++i) {
            TreeNode* p_ThisNode = queueTree.front();
            if(p_ThisNode->left != nullptr) {
                queueTree.push(p_ThisNode->left);
            }
            if(p_ThisNode->right != nullptr) {
                queueTree.push(p_ThisNode->right);
            }
            queueTree.pop();
        }
    }
    return bottomLeft;
}
