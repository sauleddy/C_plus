/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Solution.cpp
 * Author: eddy
 * 
 * Created on March 30, 2017, 4:26 PM
 */

#include "Solution.h"
#include <stack>

Solution::Solution() {
}

Solution::Solution(const Solution& orig) {
}

Solution::~Solution() {
}

vector<int> Solution::preorderTraversal(TreeNode* root) {
    std::vector<int> vecRet;
    std::stack<TreeNode*> stackNodes;
    if(root == nullptr) {
        return vecRet;
    }
    TreeNode* node_cur = root;
    while(node_cur != nullptr) {
        vecRet.push_back(node_cur->val);
        if(node_cur->left != nullptr) {
            if(node_cur->right != nullptr) {
                stackNodes.push(node_cur);
            }
            node_cur = node_cur->left;
        } else if(node_cur->right != nullptr) {
            node_cur = node_cur->right;
        } else {
            node_cur = nullptr;
            while(!stackNodes.empty()) {
                TreeNode* node_parent = stackNodes.top();
                stackNodes.pop();
                if(node_parent->right != nullptr) {
                    node_cur = node_parent->right;
                    break;
                }
            }
        }
    }
    return vecRet;
}


