/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Solution.cpp
 * Author: eddy
 * 
 * Created on March 22, 2017, 11:23 AM
 */

#include "Solution.h"

Solution::Solution() {
}

Solution::Solution(const Solution& orig) {
}

Solution::~Solution() {
}

TreeNode* Solution::convertBST(TreeNode* root) {
    if(root == nullptr) {
        return nullptr;
    }
    if(root->left == nullptr && root->right == nullptr) {
        return root;
    }
    vector<TreeNode*> vecNodes;
    inOrder(root, vecNodes);
    int vecSize = vecNodes.size();
    int origNext = vecNodes[vecSize-1]->val;
    for(int i=vecSize-2; i>=0; --i) {
        int tempThis = vecNodes[i]->val;
        if(vecNodes[i]->val == origNext) {
            vecNodes[i]->val == vecNodes[i+1]->val;
        } else {
            vecNodes[i]->val += vecNodes[i+1]->val;
        }
        origNext = tempThis;
    }
    return root;
}

void Solution::inOrder(TreeNode* root, std::vector<TreeNode*>& vecNodes) {
    if(root == nullptr) {
        return;
    }
    inOrder(root->left, vecNodes);
    vecNodes.push_back(root);
    inOrder(root->right, vecNodes);
}

