/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   LinkQueue.h
 * Author: eddy
 *
 * Created on February 28, 2017, 6:40 PM
 */

#ifndef LINKQUEUE_H
#define LINKQUEUE_H

#include "../SingleLinkList/SingleLink.h"

template<typename T>
class LinkQueue {
public:
    LinkQueue();
    virtual ~LinkQueue();
    
    bool isEmpty() const;
    int size() const;
    void push(T m_data);
    T pop();
    T front() const;
    void print() const;
    
private:
    SingleLink<T>* p_list;

};

template<typename T>
LinkQueue<T>::LinkQueue() {
    this->p_list = new SingleLink<T>();
}

template<typename T>
LinkQueue<T>::~LinkQueue() {
    if(this->p_list != nullptr)
    {
        delete this->p_list;
        this->p_list = nullptr;
    }
}

template<typename T>
bool LinkQueue<T>::isEmpty() const {
    return this->p_list->IsEmpty();
}

template<typename T>
int LinkQueue<T>::size() const {
    return this->p_list->size();
}

template<typename T>
void LinkQueue<T>::push(T m_data) {
    this->p_list->insert_last(m_data);
}

template<typename T>
T LinkQueue<T>::pop() {
    if(this->p_list->IsEmpty() == true)
        return 0;
    T m_data = this->p_list->get_head();
    this->p_list->del_head();
    return m_data;
}

template<typename T>
T LinkQueue<T>::front() const {
    if(this->p_list->IsEmpty() == true)
        return 0;
    return this->p_list->get_head();
}

template<typename T>
void LinkQueue<T>::print() const {
    this->p_list->print();
}

#endif /* LINKQUEUE_H */

