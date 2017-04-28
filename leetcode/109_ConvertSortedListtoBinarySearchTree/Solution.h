/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Solution.h
 * Author: eddy
 *
 * Created on April 20, 2017, 8:29 AM
 */

#ifndef SOLUTION_H
#define SOLUTION_H

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(nullptr) {}
};

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
    
    TreeNode* sortedListToBST(ListNode* head);
    
private:
    
    ListNode* find_mid(ListNode* head);
    
};

#endif /* SOLUTION_H */

