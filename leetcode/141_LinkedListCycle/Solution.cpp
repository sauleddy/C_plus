/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Solution.cpp
 * Author: eddy
 * 
 * Created on April 20, 2017, 11:15 AM
 */

#include "Solution.h"

Solution::Solution() {
}

Solution::Solution(const Solution& orig) {
}

Solution::~Solution() {
}

bool hasCycle(ListNode *head) {
    ListNode *fast = head;
    ListNode *slow = head;
    while(fast != nullptr && fast->next != nullptr) {
        fast = fast->next->next;
        slow = slow->next;
        if(slow == fast) {
            return true;
        }
    }
    return false;
}

