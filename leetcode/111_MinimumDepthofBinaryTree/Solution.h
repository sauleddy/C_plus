/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Solution.h
 * Author: eddy
 *
 * Created on May 13, 2017, 9:12 PM
 */

#ifndef SOLUTION_H
#define SOLUTION_H

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
    
    int minDepth(TreeNode* root);
    
private:
    
    void help(TreeNode* root, int depth, int& minDepth);
    
    
};

#endif /* SOLUTION_H */

