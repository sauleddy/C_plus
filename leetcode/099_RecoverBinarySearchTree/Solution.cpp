/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Solution.cpp
 * Author: eddy
 * 
 * Created on May 13, 2017, 6:14 PM
 */

#include "Solution.h"
#include <algorithm>

Solution::Solution() {
}

Solution::Solution(const Solution& orig) {
}

Solution::~Solution() {
}

TreeNode* preInorderNode = nullptr;
TreeNode* wrongNode1 = nullptr;
TreeNode* wrongNode2 = nullptr;
bool findWrong = false;
        
void Solution::recoverTree(TreeNode* root) {
    TreeNode* cur = root;
    while(cur != nullptr) {
        // cout<< cur->val<< endl;
        if(cur->left == nullptr) {
            if(findWrong == false) addInorderNode(cur);
            cur = cur->right;
        } else {
            TreeNode* pre = findTheLeftRightest(cur);
            if(pre->right == nullptr) {
                pre->right = cur;
                cur = cur->left;
            } else {
                pre->right = nullptr;
                if(findWrong == false) addInorderNode(cur);
                cur = cur->right;
            }
        }
    }
    // cout<< "wrongNode1:"<< wrongNode1->val<< endl;
    // cout<< "wrongNode2:"<< wrongNode2->val<< endl;
    std::swap(wrongNode1->val, wrongNode2->val);    
}

TreeNode* Solution::findTheLeftRightest(TreeNode* root) {
    if(root->left == nullptr) return nullptr;

    TreeNode* rightest = root->left;
    while(rightest->right != nullptr && rightest->right != root) {
        rightest = rightest->right;
    }
    return rightest;
}

void Solution::addInorderNode(TreeNode* node) {
    if(preInorderNode == nullptr) {
        preInorderNode = node;
        return;
    }
    if(node->val < preInorderNode->val) {
        if(wrongNode1 == nullptr) {
            wrongNode1 = preInorderNode;
            wrongNode2 = node;
        } else {
            wrongNode2 = node;
            findWrong = true;
        }
    }
    preInorderNode = node;
}