/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Solution.cpp
 * Author: eddy
 * 
 * Created on May 18, 2017, 8:51 AM
 */

#include "Solution.h"

Solution::Solution() {
}

Solution::Solution(const Solution& orig) {
}

Solution::~Solution() {
}

bool Solution::isPalindrome(ListNode* head) {
    if(head == nullptr || head->next == nullptr) return true;
    // find mid
    ListNode* fast = head;
    ListNode* slow = head;
    while(fast->next != nullptr && fast->next->next != nullptr) {
        fast = fast->next->next;
        slow = slow->next;
    }
    ListNode* mid = slow;
    ListNode* cur = mid->next;
    ListNode* pre = nullptr;
    while(cur != nullptr) {
        ListNode* next = cur->next;
        cur->next = pre;
        pre = cur;
        cur = next;
    }
    cur = pre;
    slow = head;
    while(cur != nullptr) {
        if(cur->val != slow->val) return false;
        slow = slow->next;
        cur = cur->next;
    }
    return true;
}

