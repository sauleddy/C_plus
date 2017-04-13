/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Solution.cpp
 * Author: eddy
 * 
 * Created on April 13, 2017, 10:10 AM
 */

#include "Solution.h"

Solution::Solution() {
}

Solution::Solution(const Solution& orig) {
}

Solution::~Solution() {
}

ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
    ListNode* cur_1 = l1;
    ListNode* cur_2 = l2;
    int len_1 = 0;
    int len_2 = 0;
    while(cur_1 != nullptr) {
        ++len_1;
        cur_1 = cur_1->next;
    }
    while(cur_2 != nullptr) {
        ++len_2;
        cur_2 = cur_2->next; 
    }
    ListNode* pre_1 = new ListNode(0);
    pre_1->next = l1;
    ListNode* pre_2 = new ListNode(0);
    pre_2->next = l2;
    ListNode* cur_long = nullptr;
    ListNode* cur_short = nullptr;
    if(len_1 >= len_2) {
        cur_long = pre_1;
        cur_short = pre_2;
    } else {
        cur_long = pre_2;
        cur_short = pre_1;
    }
    ListNode* head_long = cur_long;
    int carry = 0;
    while(cur_long->next != nullptr) {
        int short_val = 0;
        if(cur_short->next != nullptr) {
            short_val = cur_short->next->val;
            cur_short = cur_short->next;
        } else {
            if(carry == 0) {
                break;
            }
        }
        int sum = cur_long->next->val + short_val + carry;
        cur_long->next->val = sum % 10;
        carry = sum / 10;
        cur_long = cur_long->next;
    }
    if(carry == 1) {
        ListNode* node_new = new ListNode(carry);
        cur_long->next = node_new;
    }
    cur_long = head_long->next; 
    delete pre_1;
    delete pre_2;
    return cur_long;
}

