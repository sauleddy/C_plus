/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   DoubleLink.h
 * Author: eddy
 *
 * Created on February 25, 2017, 8:44 PM
 */

#ifndef DOUBLELINK_H
#define DOUBLELINK_H

#include <iostream>
#include "Node.h"

using namespace std;

template<typename T>
class DoubleLink {
public:
    DoubleLink();
    virtual ~DoubleLink();
    
    int size() const;
    bool isEmpty() const;
    
    Node<T>* insert(int index, T value);
    Node<T>* insert_head(T value);
    Node<T>* insert_tail(T value);
    
    Node<T>* del(int index);
    Node<T>* del_head();
    Node<T>* del_tail();
    
    T get(int index) const;
    T get_head() const;
    T get_tail() const;
    
    void print() const;
    
private:
    Node<T>* head;
    int count;
private:
    Node<T>* getNode(int index) const;
};

template<typename T>
DoubleLink<T>::DoubleLink() {
    this->head = new Node<T>();
    this->head->_next = nullptr;
    this->head->_pre = nullptr;
    
    this->count = 0;
}

template<typename T>
DoubleLink<T>::~DoubleLink() {
    Node<T>* p_CurNode = this->head;
    for(int i=0; i<=this->count; ++i) {
        Node<T>* p_NextNode = p_CurNode->_next;
        delete p_CurNode;
        p_CurNode = p_NextNode;
    }
}

template<typename T>
int DoubleLink<T>::size() const {
    return this->count;
}

template<typename T>
bool DoubleLink<T>::isEmpty() const {
    return (this->count <= 0) ? true : false;
}

template<typename T>
Node<T>* DoubleLink<T>::insert(int index, T value) {
    if(index < 0 || index > this->count)
        return nullptr;
    Node<T>* p_NodePre = nullptr;
    if(index == 0)
        p_NodePre = this->head;
    else
        p_NodePre = this->getNode(index - 1);
    
    Node<T>* p_NodeNext = nullptr;
    if(this->count == index)
        p_NodeNext = this->head;
    else
        p_NodeNext = p_NodePre->_next;
    
    Node<T>* p_NewNode = new Node<T>(value, p_NodePre, p_NodeNext);
    p_NodePre->_next = p_NewNode;
    p_NodeNext->_pre = p_NewNode;
    
    ++this->count;
    return p_NewNode;
}

template<typename T>
Node<T>* DoubleLink<T>::insert_head(T value) {
    return this->insert(0, value);
}

template<typename T>
Node<T>* DoubleLink<T>::insert_tail(T value) {
    return this->insert(this->count, value);
}

template<typename T>
Node<T>* DoubleLink<T>::del(int index) {
    if(index < 0 || index >= this->count)
        return nullptr;
    
    Node<T>* p_NodeToBeDel = this->getNode(index);
    Node<T>* p_NodePre = p_NodeToBeDel->_pre;
    
    Node<T>* p_NodeNext = nullptr;
    if(index == this->count - 1)
        p_NodeNext = this->head;
    else
        p_NodeNext = p_NodeToBeDel->_next;
    p_NodePre->_next = p_NodeNext;
    p_NodeNext->_pre = p_NodePre;
    delete p_NodeToBeDel;
    --this->count;
    if(this->count == 0)
    {
        p_NodePre->_next = nullptr;
        p_NodePre->_pre = nullptr;
    }
    return p_NodePre;
}

template<typename T>
Node<T>* DoubleLink<T>::del_head() {
    this->del(0);
}

template<typename T>
Node<T>* DoubleLink<T>::del_tail() {
    this->del(this->count - 1);
}

template<typename T>
T DoubleLink<T>::get(int index) const {
    if(index < 0 || index >= this->count)
        return nullptr;
    Node<T>* p_Node = this->get(index);
    return p_Node->_value;
}

template<typename T>
T DoubleLink<T>::get_head() const {
    return this->get(0);
}

template<typename T>
T DoubleLink<T>::get_tail() const {
    return this->get(this->count - 1);
}

template<typename T>
void DoubleLink<T>::print() const {
    if(this->count <= 0)
        return;
    Node<T>* p_CurNode = this->head->_next;
    for(int i=0; i<this->count; ++i) {
        cout<< p_CurNode->_value<<endl;
        p_CurNode = p_CurNode->_next;
    }
}

template<typename T>
Node<T>* DoubleLink<T>::getNode(int index) const {
    if(index < 0 || index >= this->count)
        return nullptr;
    Node<T>* p_CurNode = this->head->_next;
    for(int i=0; i<index; ++i) {
        p_CurNode = p_CurNode->_next;
    }
    return p_CurNode;
}

#endif /* DOUBLELINK_H */

