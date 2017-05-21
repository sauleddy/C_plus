/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Solution.cpp
 * Author: eddy
 * 
 * Created on May 20, 2017, 10:18 AM
 */

#include "Solution.h"
#include <stdlib.h>

Solution::Solution() {
}

Solution::Solution(const Solution& orig) {
}

Solution::~Solution() {
}

ListNode *Solution::getIntersectionNode(ListNode *headA, ListNode *headB) {
    int lengthA = getLength(headA);
    int lengthB = getLength(headB);
    int beginPos = abs(lengthA - lengthB);
    ListNode *curLong = nullptr;
    ListNode *curShort = nullptr;
    if(lengthA >= lengthB) {
        curLong = headA;
        curShort = headB;
    } else {
        curLong = headB;
        curShort = headA;
    }
    int i = 0;
    while(i < beginPos) {
        curLong = curLong->next;
        ++i;
    }
    while(curLong != nullptr) {
        if(curLong == curShort) return curLong;
        curLong = curLong->next;
        curShort = curShort->next;
    }
    return nullptr;
}

int Solution::getLength(ListNode *head) {
    int length = 0;
    while(head != nullptr) {
        ++length;
        head = head->next;
    }
    return length;
}

