/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Solution.cpp
 * Author: eddy
 * 
 * Created on April 19, 2017, 10:18 AM
 */

#include "Solution.h"
#include <queue>

Solution::Solution() {
}

Solution::Solution(const Solution& orig) {
}

Solution::~Solution() {
}

vector<vector<int>> Solution::levelOrderBottom(TreeNode* root) {
    std::vector<std::vector<int>> result;
    if(root == nullptr) {
        return result;
    }
    std::queue<TreeNode*> nodes;
    nodes.push(root);
    int num_layer = 1;
    while(!nodes.empty()) {
        std::vector<int> nodes_this;
        while(num_layer > 0) {
            TreeNode* node_this = nodes.front();
            nodes_this.push_back(node_this->val);
            nodes.pop();
            if(node_this->left != nullptr) {
                nodes.push(node_this->left);
            }
            if(node_this->right != nullptr) {
                nodes.push(node_this->right);
            }
            --num_layer;
        }
        num_layer = nodes.size();
        result.insert(result.begin(), nodes_this);
    }
    return result;
}

