/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Solution.cpp
 * Author: eddy
 * 
 * Created on May 4, 2017, 10:53 AM
 */

#include "Solution.h"

Solution::Solution() {
}

Solution::Solution(const Solution& orig) {
}

Solution::~Solution() {
}

ListNode* Solution::reverseBetween(ListNode* head, int m, int n) {
    ListNode* cur = new ListNode(0);
    cur->next = head;
    int idx = 1;
    while(idx < m) {
        cur = cur->next;
        ++idx;
    }
    ListNode* previous = cur;
    ListNode* next = cur->next;
    ListNode* subHead = new ListNode(0);
    ListNode* subTail = next;
    while(idx <= n) {
        cur = next;
        next = next->next;
        cur->next = subHead->next;
        subHead->next = cur->next;
        ++idx;
    }
    previous->next = subHead->next;
    subTail->next = next;
    
    delete subHead;
    return head;
}

