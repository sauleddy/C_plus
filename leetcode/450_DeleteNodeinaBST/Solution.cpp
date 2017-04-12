/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Solution.cpp
 * Author: eddy
 * 
 * Created on April 12, 2017, 12:57 PM
 */

#include "Solution.h"

Solution::Solution() {
}

Solution::Solution(const Solution& orig) {
}

Solution::~Solution() {
}

int left = 0;
int right = 1;

TreeNode* Solution::deleteNode(TreeNode* root, int key) {
    TreeNode* found = root;
    TreeNode* pre = nullptr;
    int l_or_r = left;
    while(found != nullptr && found->val != key) {
        pre = found;
        if(key > found->val) {
            l_or_r = right;
            found = found->right;
        } else {
            l_or_r = left;
            found = found->left;
        }
    }
    if(found == nullptr) {
        return root;
    }
    this->help_delete(found, pre, l_or_r);
    return root;
}


void Solution::help_delete(TreeNode* node, TreeNode* pre, int l_or_r) {
    
    TreeNode* found = nullptr;
    TreeNode* found_pre = nullptr;
    int l_or_r_new = left;
    if(node->right != nullptr) {
        found_pre = node;
        l_or_r_new = right;
        found = node->right;
        while(found->left != nullptr) {
            found_pre = found;
            l_or_r_new = left;
            found = found->left;
        }
    } else if(node->left != nullptr) {
        found_pre = node;
        l_or_r_new = left;
        found = node->left;
        while(found->right != nullptr) {
            found_pre = found;
            l_or_r_new = right;
            found = found->right;
        }
    }
    
    if(found == nullptr && pre != nullptr) {
        if(l_or_r == left) {
            pre->left = nullptr;    
        } else {
            pre->right = nullptr;   
        }
    } else {
        node->val = found->val;
        this->help_delete(found, found_pre, l_or_r_new);
    }
}

