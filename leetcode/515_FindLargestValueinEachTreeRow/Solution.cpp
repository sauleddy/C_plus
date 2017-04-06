/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Solution.cpp
 * Author: eddy
 * 
 * Created on March 21, 2017, 2:32 PM
 */

#include <queue>

#include "Solution.h"

Solution::Solution() {
}

Solution::Solution(const Solution& orig) {
}

Solution::~Solution() {
}

vector<int> Solution::largestValues(TreeNode* root) {
    std::vector<int> vecValues;
    if(root == nullptr)
        return vecValues;
    
    std::queue<TreeNode*> queueLayer;
    queueLayer.push(root);
    while(queueLayer.size() > 0) {
        int len = queueLayer.size();
        int max = 0;
        for(int i=0; i<len; ++i) {
            TreeNode* nodeThis = queueLayer.front();
            if(i == 0) {
                max = nodeThis->val;
            } else {
                if(nodeThis->val > max) {
                    max = nodeThis->val;
                }
            }
            if(nodeThis->left != nullptr)
                queueLayer.push(nodeThis->left);
            if(nodeThis->right != nullptr)
                queueLayer.push(nodeThis->right);
            queueLayer.pop();
        }
        vecValues.push_back(max);
    }
    return vecValues;
}

