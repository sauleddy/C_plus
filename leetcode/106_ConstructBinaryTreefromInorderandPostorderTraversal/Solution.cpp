/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Solution.cpp
 * Author: eddy
 * 
 * Created on April 12, 2017, 6:04 PM
 */

#include "Solution.h"
#include <algorithm>

Solution::Solution() {
}

Solution::Solution(const Solution& orig) {
}

Solution::~Solution() {
}

TreeNode* Solution::buildTree(vector<int>& inorder, vector<int>& postorder) {
    if(postorder.size() == 0) {
        return nullptr;
    }
    /*std::deque<int> deque_postorder;
    for(auto num : postorder) {
        deque_postorder.push_back(num);
    }*/
    return this->help(postorder, inorder, 0, inorder.size()-1);  
}

TreeNode* Solution::help(vector<int>& postorder, vector<int>& inorder, int start, int end) {
    if(start > end) {
        return nullptr;
    }
    int node_this = postorder.back();
    //cout<< "node_this:"<< node_this<< endl;
    postorder.pop_back();
    TreeNode* tree_this = new TreeNode(node_this);
    if(start == end) {
        return tree_this;
    }
    auto iter = std::find(inorder.begin()+start, inorder.begin()+end+1, node_this);
    int index = iter - inorder.begin();
    //cout<< index<< endl;
    //cout<< start<< "," << index-1<< endl;
    //cout<< index+1<< "," << end<< endl;
    tree_this->right = this->help(postorder, inorder, index+1, end);
    tree_this->left = this->help(postorder, inorder, start, index-1);
    
    return tree_this;
}



