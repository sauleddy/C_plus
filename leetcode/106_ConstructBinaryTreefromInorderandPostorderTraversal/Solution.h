/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Solution.h
 * Author: eddy
 *
 * Created on April 12, 2017, 6:04 PM
 */

#ifndef SOLUTION_H
#define SOLUTION_H

#include <vector>
#include <deque>

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
    
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder);
    
private:
    TreeNode* help(vector<int>& postorder, vector<int>& inorder, int start, int end);
};

#endif /* SOLUTION_H */

