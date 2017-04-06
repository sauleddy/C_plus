/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Solution.cpp
 * Author: eddy
 * 
 * Created on March 29, 2017, 3:53 PM
 */

#include "Solution.h"

Solution::Solution() {
}

Solution::Solution(const Solution& orig) {
}

Solution::~Solution() {
}

ListNode* Solution::reverseList(ListNode* head) {
    if(head == nullptr)
        return head;
    if(head->next == nullptr)
        return head;
    ListNode* node_last = nullptr;
    while(head != nullptr) {
        ListNode* node_next = head->next;
        head->next = node_last;
        node_last = head;
        head = node_next;
    }
    return node_last;
}

