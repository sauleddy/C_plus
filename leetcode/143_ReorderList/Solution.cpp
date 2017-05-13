/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Solution.cpp
 * Author: eddy
 * 
 * Created on May 12, 2017, 9:46 AM
 */

#include "Solution.h"

Solution::Solution() {
}

Solution::Solution(const Solution& orig) {
}

Solution::~Solution() {
}

void reorderList(ListNode* head) {
    if(head == nullptr || head->next == nullptr || head->next->next == nullptr) return;
    ListNode* fast = head;
    ListNode* slow = head;
    while(fast != nullptr) {
        if(fast->next == nullptr) break;
        fast = fast->next->next;
        slow = slow->next;
    }
    ListNode* mid = slow;
    slow = slow->next;
    mid->next = nullptr;
    
    ListNode* pre = nullptr;
    while(slow->next != nullptr) {
        ListNode* next = slow->next;
        slow->next = pre;
        pre = slow;
        slow = next;
    }
    
    ListNode* cur = head;
    while(slow != nullptr) {
        ListNode* insert = slow;
        slow = slow->next;
        insert->next = cur->next;
        cur->next = insert;
        cur = cur->next->next;
    } 
}

