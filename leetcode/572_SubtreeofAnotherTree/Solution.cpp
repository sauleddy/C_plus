/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Solution.cpp
 * Author: eddy
 * 
 * Created on May 9, 2017, 8:12 AM
 */

#include "Solution.h"
#include <queue>

Solution::Solution() {
}

Solution::Solution(const Solution& orig) {
}

Solution::~Solution() {
}

bool Solution::isSubtree(TreeNode* s, TreeNode* t) {
    if(s == nullptr && t == nullptr) return true;
    
    string rawT = this->serialize(t);
    return this->help(s, t, rawT);
}

bool Solution::help(TreeNode* root, TreeNode* t, string& rawT) {
    if(root == nullptr) return false;
    
    if(root->val == t->val) {
        string rawThis = this->serialize(root);
        if(rawThis == rawT) return true;
    }
    return (this->help(root->left, t, rawT) || this->help(root->right, t, rawT));
}

string Solution::serialize(TreeNode* root) {
    string result = "";
    queue<TreeNode*> qNodes;
    qNodes.push(root);
    while(!qNodes.empty()) {
        TreeNode* nodeThis = qNodes.front();
        qNodes.pop();
        if(nodeThis == nullptr) {
            result += "#,";
        } else {
            result += std::to_string(nodeThis->val) + ",";
            qNodes.push(nodeThis->left);
            qNodes.push(nodeThis->right);
        }
    }
    // cout<< result<< endl;
    return result;    
}

/*void Solution::preOrder(TreeNode* root, string& res) {
    if(root == nullptr) return;
    
    string strAppend = std::to_string(root->val) + ":";
    res += strAppend;
    this->preOrder(root->left, res);
    this->preOrder(root->right, res);
}

void Solution::inOrder(TreeNode* root, string& res) {
    if(root == nullptr) return;
    
    this->inOrder(root->left, res);
    string strAppend = std::to_string(root->val) + ":";
    res += strAppend;
    this->inOrder(root->right, res);
}*/  

