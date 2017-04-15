/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Solution.cpp
 * Author: eddy
 * 
 * Created on April 14, 2017, 4:24 PM
 */

#include "Solution.h"

Solution::Solution() {
}

Solution::Solution(const Solution& orig) {
}

Solution::~Solution() {
}

RandomListNode Solution::*copyRandomList(RandomListNode *head) {
    if(head == nullptr) {
        return nullptr;
    }
    std::unordered_map<unsigned long, int> umap_addr_idx;
    std::vector<unsigned long> vec_random;
    std::vector<RandomListNode *> vec_nodes;
    RandomListNode *cur = head;
    int idx = 0;
    while(cur->next != nullptr) {
        RandomListNode *node_this = new RandomListNode(cur->label);
        vec_nodes.push_back(node_this);
        umap_addr_idx[reinterpret_cast<unsigned long>(cur)] = idx;
        vec_random.push_back(reinterpret_cast<unsigned long>(node_this->random));
        cur = cur->next;
        ++idx;
    }
    RandomListNode *new_head = vec_nodes[0];
    RandomListNode *new_cur = new_head;
    for(int i=0; i<vec_nodes.size(); ++i) {
        int idx = umap_addr_idx[vec_random[i]];
        if(idx != 0) {
            vec_nodes[i]->random = vec_nodes[idx];
        }
        if(i > 0) {
            new_cur->next = vec_nodes[i];
            new_cur = new_cur->next;
        }
    }
    new_cur->next = nullptr;
    return new_head;
}

