/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Solution.cpp
 * Author: eddy
 * 
 * Created on April 13, 2017, 9:00 AM
 */

#include "Solution.h"

Solution::Solution() {
}

Solution::Solution(const Solution& orig) {
}

Solution::~Solution() {
}

ListNode* Solution::partition(ListNode* head, int x) {
    ListNode* large = new ListNode(0);
    ListNode* large_cur = large;
    ListNode* small = new ListNode(0);
    small->next = head;
    ListNode* cur = small;
    while(cur->next != nullptr) {
        if(cur->next->val >= x) {
            large_cur->next = cur->next;
            cur->next = cur->next->next;
            large_cur->next->next = nullptr;
            large_cur = large_cur->next;
        } else {
            cur = cur->next;
        }
    }
    cur->next = large->next;
    head = small->next;
    delete large;
    delete small;
    
    return head;
}

