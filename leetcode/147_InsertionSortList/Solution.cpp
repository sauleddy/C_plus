/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Solution.cpp
 * Author: eddy
 * 
 * Created on April 13, 2017, 9:21 AM
 */

#include "Solution.h"

Solution::Solution() {
}

Solution::Solution(const Solution& orig) {
}

Solution::~Solution() {
}

ListNode* Solution::insertionSortList(ListNode* head) {
    
    ListNode* cur = head;
    ListNode* sorted = new ListNode(0);
    while(cur != nullptr) {
        ListNode* node_this = cur;
        cur = cur->next;
        ListNode* cur_sorted = sorted;
        while(cur_sorted->next != nullptr && cur_sorted->next->val < node_this->val) {}
        node_this = nullptr;
        cur_sorted->next = node_this;
        cur_sorted = cur_sorted->next;
    }
    ListNode* new_head = sorted->next;
    delete sorted;
    return new_head;    
}
