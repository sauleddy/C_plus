/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Solution.h
 * Author: eddy
 *
 * Created on May 9, 2017, 8:12 AM
 */

#ifndef SOLUTION_H
#define SOLUTION_H

#include <string>

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
    
    bool isSubtree(TreeNode* s, TreeNode* t);
    
private:

    bool help(TreeNode* root, TreeNode* t, string& rawT);
    string serialize(TreeNode* root);
    /*void preOrder(TreeNode* root, string& res);
    void inOrder(TreeNode* root, string& res);*/
    
};

#endif /* SOLUTION_H */

