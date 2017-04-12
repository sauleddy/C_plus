/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Solution.cpp
 * Author: eddy
 * 
 * Created on April 12, 2017, 4:23 PM
 */

#include "Solution.h"

Solution::Solution() {
}

Solution::Solution(const Solution& orig) {
}

Solution::~Solution() {
}

ListNode* Solution::deleteDuplicates(ListNode* head) {
    if(head == nullptr) {
        return nullptr;
    }
    ListNode* new_head = new ListNode(head->val - 1);
    new_head->next = head;
    ListNode* pre = new_head;
    ListNode* cur = new_head->next;
    while(cur->next != nullptr) {
        if(cur->val == cur->next->val) {
            int invalid = cur->val;
            while(cur != nullptr) {
                if(cur->val != invalid) {
                    break;
                }
                cur = cur->next;
            }
            pre->next = cur;
        } else {
            pre = cur;
            cur = cur->next;
        }
    }
    return 0;
}

