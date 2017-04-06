/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   SingleLink.h
 * Author: eddy
 *
 * Created on February 25, 2017, 12:30 PM
 */

#ifndef SINGLELINK_H
#define SINGLELINK_H

#include <iostream>
#include "Node.h"

using namespace std;

template<typename T>
class SingleLink {
public:
    SingleLink();
    virtual ~SingleLink();
    
    int size() const;
    bool IsEmpty() const;
    Node<T>* insert(int index, T value);
    Node<T>* insert_head(T value);
    Node<T>* insert_last(T value);
    
    Node<T>* del(int index);
    Node<T>* del_head();
    Node<T>* del_last();
    
    T get(int index) const;
    T get_head() const;
    T get_last() const;
    
    Node<T>* gethead() const;
    void print() const;
    
private:
    Node<T>* phead;
    int count;
    
private:
    Node<T>* getNode(int index) const;
    
};

template<typename T>
SingleLink<T>::SingleLink() {
    this->count = 0;
    this->phead = new Node<T>();
    this->phead->_next = nullptr;
}

template<typename T>
SingleLink<T>::~SingleLink() {
    Node<T>* p_CurNode = this->phead;
    Node<T>* p_NextNode = nullptr;
    while(p_CurNode != nullptr)
    {
        p_NextNode = p_CurNode->_next;
        delete p_CurNode;
        p_CurNode = p_NextNode;
    }
}

template<typename T>
int SingleLink<T>::size() const{
    return this->count;
}

template<typename T>
bool SingleLink<T>::IsEmpty() const {
    return (this->count <= 0) ? true : false;
}

template<typename T>
Node<T>* SingleLink<T>::insert(int index, T value)
{
    if(index < 0 || index > this->count)
        return nullptr;
    Node<T>* p_NodeToBeInsert = nullptr;
    if(index == 0)
        p_NodeToBeInsert = this->gethead();
    else
        p_NodeToBeInsert = this->getNode(index - 1);
    
    Node<T>* p_NewNode = new Node<T>(value, p_NodeToBeInsert->_next);
    p_NodeToBeInsert->_next = p_NewNode;
    ++count;
    return p_NewNode;
}

template<typename T>
Node<T>* SingleLink<T>::insert_head(T value) {
    return this->insert(0, value);
}

template<typename T>
Node<T>* SingleLink<T>::insert_last(T value) {
    return this->insert(this->count, value);
}

template<typename T>
Node<T>* SingleLink<T>::del(int index)
{
    if(this->IsEmpty() == true)
        return nullptr;
    Node<T>* p_NodePre = nullptr;
    if(index == 0)
        p_NodePre = this->gethead();
    else
        p_NodePre = this->getNode(index - 1);
    Node<T>* p_NodeToBeDel = p_NodePre->_next;
    p_NodePre->_next = p_NodeToBeDel->_next;
    delete p_NodeToBeDel;
    p_NodeToBeDel = nullptr;
    --count;
    return p_NodePre;
}
    
template<typename T>
Node<T>* SingleLink<T>::del_head()
{
    return this->del(0);
}

template<typename T>
Node<T>* SingleLink<T>::del_last()
{
    return this->del(this->count - 1);
}

template<typename T>
T SingleLink<T>::get(int index) const {
    Node<T>* p_Node = this->getNode(index);
    return p_Node->_value;
}

template<typename T>
T SingleLink<T>::get_head() const {
    return this->get(0);
}

template<typename T>
T SingleLink<T>::get_last() const {
    return this->get(this->count - 1);
}

template<typename T>
Node<T>* SingleLink<T>::gethead() const {
    return this->phead;
}

template<typename T>
void SingleLink<T>::print() const
{
    Node<T>* p_CurNode = this->phead->_next;
    while(p_CurNode != nullptr)
    {
        cout<< p_CurNode->_value<< endl;
        p_CurNode = p_CurNode->_next;
    }
}

template<typename T>
Node<T>* SingleLink<T>::getNode(int index) const {
    if(index < 0 || index >= this->count)
        return nullptr;
    Node<T>* p_CurNode = this->gethead();
    for(int i=0; i<index; ++i)
    {
        p_CurNode = p_CurNode->_next; 
    }
    Node<T>* p_RetNode = p_CurNode->_next;
    return p_RetNode;
}

#endif /* SINGLELINK_H */

