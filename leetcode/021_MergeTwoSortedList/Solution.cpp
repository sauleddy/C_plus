/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Solution.cpp
 * Author: eddy
 * 
 * Created on March 9, 2017, 5:02 PM
 */

#include "Solution.h"

Solution::Solution() {
}

Solution::Solution(const Solution& orig) {
}

Solution::~Solution() {
}

ListNode* Solution::mergeTwoLists(ListNode* l1, ListNode* l2) {
    if(l1 == nullptr && l2 == nullptr)
        return nullptr;
    if(l1 == nullptr)
        return l2;
    if(l2 == nullptr)
        return l1;
    
    ListNode* p_ListNew = nullptr;
    ListNode* p_NodeCurA = nullptr;
    ListNode* p_NodeCurB = nullptr;
    if(l1->val <= l2->val) {
        p_ListNew = l1;
        p_NodeCurA = l1;
        p_NodeCurB = l2;
    } else {
        p_ListNew = l2;
        p_NodeCurA = l2;
        p_NodeCurB = l1;
    }
    
    while(p_NodeCurA->next != nullptr && p_NodeCurB != nullptr) {
        
        ListNode* p_NodeBeginIns = nullptr;
        ListNode* p_NodeEndIns = nullptr;
        while(p_NodeCurB != nullptr) {
            if(p_NodeCurB->val > p_NodeCurA->next->val)
                break;
            if(p_NodeBeginIns == nullptr)
                p_NodeBeginIns = p_NodeCurB;
            p_NodeEndIns = p_NodeCurB;
            p_NodeCurB = p_NodeCurB->next;
        }
        
        if(p_NodeBeginIns != nullptr) {
            p_NodeEndIns->next = p_NodeCurA->next;
            p_NodeCurA->next = p_NodeBeginIns;
            p_NodeCurA = p_NodeEndIns->next;
        } else {
            p_NodeCurA = p_NodeCurA->next;
        }
    }
    
    if(p_NodeCurA->next == nullptr && p_NodeCurB != nullptr) {
        p_NodeCurA->next = p_NodeCurB;
    }
    return p_ListNew;
}

