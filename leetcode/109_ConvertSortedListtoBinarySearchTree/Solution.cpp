/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Solution.cpp
 * Author: eddy
 * 
 * Created on April 20, 2017, 8:29 AM
 */

#include "Solution.h"

Solution::Solution() {
}

Solution::Solution(const Solution& orig) {
}

Solution::~Solution() {
}

TreeNode* Solution::sortedListToBST(ListNode* head) {
    if(head == nullptr) {
        return nullptr;
    }
    TreeNode* tree_node_mid = new TreeNode(0);
    if(head->next == nullptr) {
        tree_node_mid->val = head->val;
        return tree_node_mid;
    }
    ListNode* node_mid = this->find_mid(head);
    tree_node_mid->val = node_mid->next->val;
    ListNode* node_right_head = node_mid->next->next;
    node_mid->next = nullptr;
    tree_node_mid->left = this->sortedListToBST(head);
    if(node_right_head != nullptr) {
        tree_node_mid->right = this->sortedListToBST(node_right_head);
    } 
    return tree_node_mid;
}
 
ListNode* Solution::find_mid(ListNode* head) {
    ListNode* quick = head;
    ListNode* slow = head;
    ListNode* pre_slow = head;
    while(quick->next != nullptr) {
        quick = quick->next->next;
        pre_slow = slow;
        slow = slow->next;
        if(quick == nullptr) {
            break;
        }
    }
    return pre_slow;
}  
