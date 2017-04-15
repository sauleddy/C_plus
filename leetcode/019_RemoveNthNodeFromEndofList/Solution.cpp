/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Solution.cpp
 * Author: eddy
 * 
 * Created on April 15, 2017, 9:19 AM
 */

#include "Solution.h"

Solution::Solution() {
}

Solution::Solution(const Solution& orig) {
}

Solution::~Solution() {
}

ListNode* Solution::removeNthFromEnd(ListNode* head, int n) {
    if(head->next == nullptr) {
        return nullptr;
    }
    ListNode* node_first = new ListNode(0);
    node_first->next = head;
    ListNode* node_second = node_first;
    ListNode* node_new_head = node_first;
    int idx = 0;
    while(node_first->next != nullptr) {
        node_first = node_first->next;
        if(idx >= n) {
            node_second = node_second->next;
        }
        ++idx;
    }
    node_second->next = node_second->next->next;
    return node_new_head->next;
}

