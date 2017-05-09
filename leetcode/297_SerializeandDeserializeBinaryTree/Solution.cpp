/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Solution.cpp
 * Author: eddy
 * 
 * Created on May 9, 2017, 8:49 AM
 */

#include "Solution.h"
#include <queue>
#include <vector>

Solution::Solution() {
}

Solution::Solution(const Solution& orig) {
}

Solution::~Solution() {
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
    return result;
}
   
TreeNode* Solution::deserialize(string data) {
    vector<string> nodes;
    int posCur = 0;
    while(1) {
        int pos = data.find_first_of(",", posCur);
        if(pos == string::npos) break;
        nodes.push_back(data.substr(posCur, pos-posCur));
        posCur = pos + 1;
    }
    if(nodes[0] == "#") return nullptr;
    TreeNode* nodeHead = new TreeNode(stoi(nodes[0]));
    queue<TreeNode*> qNodes;
    qNodes.push(nodeHead);
    int numValidNode = 0;
    while(!qNodes.empty()) {
        TreeNode* nodeThis = qNodes.front();
        qNodes.pop();
        int idxLeft = numValidNode * 2 + 1;
        if(nodes[idxLeft] != "#") {
            TreeNode* nodeLeft = new TreeNode(stoi(nodes[idxLeft]));
            nodeThis->left = nodeLeft;
            qNodes.push(nodeLeft);
        }
        int idxRight = numValidNode * 2 + 2;
        if(nodes[idxRight] != "#") {
            TreeNode* nodeRight = new TreeNode(stoi(nodes[idxRight]));
            nodeThis->right = nodeRight;
            qNodes.push(nodeRight);
        }
        ++numValidNode;
    }
    return nodeHead;
}    
    
