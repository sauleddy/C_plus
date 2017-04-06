/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Solution.h
 * Author: eddy
 *
 * Created on March 22, 2017, 11:23 AM
 */

#ifndef SOLUTION_H
#define SOLUTION_H

#include <iostream>
#include <vector>

using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

class Solution {
public:
    Solution();
    Solution(const Solution& orig);
    virtual ~Solution();
    
    TreeNode* convertBST(TreeNode* root);
    
private:

    void inOrder(TreeNode* root, std::vector<TreeNode*>& vecNodes);
};

#endif /* SOLUTION_H */

