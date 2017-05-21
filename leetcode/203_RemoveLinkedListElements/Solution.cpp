/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Solution.cpp
 * Author: eddy
 * 
 * Created on May 19, 2017, 10:58 AM
 */

#include "Solution.h"

Solution::Solution() {
}

Solution::Solution(const Solution& orig) {
}

Solution::~Solution() {
}

ListNode* Solution::removeElements(ListNode* head, int val) {
    ListNode* beforeHead = new ListNode(0);
    beforeHead->next = head;
    
    ListNode* cur = beforeHead;
    while(cur->next != nullptr) {
        if(cur->next->val == val) {
            cur->next = cur->next->next;
        } else cur = cur->next;
    }
    head = beforeHead->next;
    delete beforeHead;
    return head;
}

