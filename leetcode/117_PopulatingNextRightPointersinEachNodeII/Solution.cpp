/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Solution.cpp
 * Author: eddy
 * 
 * Created on April 11, 2017, 2:16 PM
 */

#include "Solution.h"
#include <list>

using namespace std;

Solution::Solution() {
}

Solution::Solution(const Solution& orig) {
}

Solution::~Solution() {
}

void Solution::connect(TreeLinkNode *root) {
    if(root == nullptr) {
        return;
    }
    std::list<TreeLinkNode*> qNodes;
    qNodes.push_back(root);
    int num_layer = 1;
    while(!qNodes.empty()) {
        TreeLinkNode* node_this = qNodes.front();
        qNodes.pop_front();
        if(node_this->left != nullptr) {
            qNodes.push_back(node_this->left);
        }
        if(node_this->right != nullptr) {
            qNodes.push_back(node_this->right);
        }
        --num_layer;
        if(num_layer == 0) {
            num_layer = qNodes.size();
            TreeLinkNode* node_pre = nullptr;
            for(auto iter=qNodes.rbegin(); iter!=qNodes.rend(); ++iter) {
                (*iter)->next = node_pre;
                node_pre = *iter;
            }
        }
    }
    
}

