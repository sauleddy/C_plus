/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Solution.h
 * Author: eddy
 *
 * Created on April 14, 2017, 10:11 AM
 */

#ifndef SOLUTION_H
#define SOLUTION_H

#include <queue>

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
    
    int countNodes(TreeNode* root);
    
private:
    
    int help(TreeNode* root, int num);

};

#endif /* SOLUTION_H */

