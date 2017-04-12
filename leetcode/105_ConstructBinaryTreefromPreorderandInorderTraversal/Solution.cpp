/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Solution.cpp
 * Author: eddy
 * 
 * Created on April 12, 2017, 4:59 PM
 */

#include "Solution.h"
#include <algorithm>

Solution::Solution() {
}

Solution::Solution(const Solution& orig) {
}

Solution::~Solution() {
}

TreeNode* Solution::buildTree(vector<int>& preorder, vector<int>& inorder) {
    if(preorder.size() == 0) {
        return nullptr;
    }
    std::deque<int> deque_preorder;
    //cout<< preorder.size()<< endl;
    for(auto num : preorder) {
        deque_preorder.push_back(num);
    }
    //cout<< deque_preorder[0]<< endl;
    //cout<< deque_preorder[1]<< endl;
    return this->help(deque_preorder, inorder, 0, inorder.size()-1);  
}

TreeNode* Solution::help(deque<int>& preorder, vector<int>& inorder, int start, int end) {
    if(start > end) {
        return nullptr;
    }
    int node_this = preorder.front();
    //cout<< "node_this:"<< node_this<< endl;
    preorder.pop_front();
    TreeNode* tree_this = new TreeNode(node_this);
    if(start == end) {
        return tree_this;
    }
    auto iter = std::find(inorder.begin()+start, inorder.begin()+end+1, node_this);
    int index = iter - inorder.begin();
    //cout<< index<< endl;
    //cout<< start<< "," << index-1<< endl;
    tree_this->left = this->help(preorder, inorder, start, index-1);
    //cout<< index+1<< "," << end<< endl;
    tree_this->right = this->help(preorder, inorder, index+1, end);

    return tree_this;
}

