/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Solution.cpp
 * Author: eddy
 * 
 * Created on April 19, 2017, 8:48 AM
 */

#include "Solution.h"

#include <deque>

enum TraverseMode {
    from_left = 0, 
    from_right
};

Solution::Solution() {
}

Solution::Solution(const Solution& orig) {
}

Solution::~Solution() {
}

vector<vector<int>> Solution::zigzagLevelOrder(TreeNode* root) {
    std::vector<std::vector<int>> result;
    if(root == nullptr) {
        return result;
    }
    std::deque<TreeNode*> dq_nodes;
    dq_nodes.push_back(root);
    TraverseMode mode = from_left;
    while(dq_nodes.size() > 0) {
        int num_layer = dq_nodes.size();
        std::vector<int> nodes_layer;
        while(num_layer > 0) {
            TreeNode* node_this = nullptr;
            if(mode == from_left) {
                node_this = dq_nodes.front();
                dq_nodes.pop_front();
                if(node_this->left != nullptr) {
                    dq_nodes.push_back(node_this->left);
                }
                if(node_this->right != nullptr) {
                    dq_nodes.push_back(node_this->right);
                }
            } else {
                node_this = dq_nodes.back();
                dq_nodes.pop_back();
                if(node_this->right != nullptr) {
                    dq_nodes.push_front(node_this->right);
                }
                if(node_this->left != nullptr) {
                    dq_nodes.push_front(node_this->left);
                }
            }
            nodes_layer.push_back(node_this->val);
            --num_layer;
        }
        result.push_back(nodes_layer);
        mode = (mode == from_left ? from_right : from_left);
    }
    return result;
    
}

