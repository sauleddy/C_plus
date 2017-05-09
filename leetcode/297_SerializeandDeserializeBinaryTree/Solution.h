/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Solution.h
 * Author: eddy
 *
 * Created on May 9, 2017, 8:49 AM
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
    
    string serialize(TreeNode* root);
    TreeNode* deserialize(string data);
    
    
private:

};

#endif /* SOLUTION_H */

