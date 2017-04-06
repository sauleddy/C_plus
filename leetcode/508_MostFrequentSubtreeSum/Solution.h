/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Solution.h
 * Author: eddy
 *
 * Created on March 22, 2017, 1:54 PM
 */

#ifndef SOLUTION_H
#define SOLUTION_H

#include <iostream>
#include <vector>
#include <map>

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
    
    vector<int> findFrequentTreeSum(TreeNode* root);
    
private:

    int CalculateSubSum(TreeNode* root, std::map<int, int>& mapSubSum, int& max);
};

#endif /* SOLUTION_H */

