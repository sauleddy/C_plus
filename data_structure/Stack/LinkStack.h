/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   LinkStack.h
 * Author: eddy
 *
 * Created on February 28, 2017, 4:47 PM
 */

#ifndef LINKSTACK_H
#define LINKSTACK_H

#include "../SingleLinkList/SingleLink.h"

template<typename T>
class LinkStack {
public:
    LinkStack();
    virtual ~LinkStack();
    
    bool isEmpty() const;
    int size() const;
    void push(T m_data);
    T pop();
    T top() const;
    void print() const;
    
private:
    SingleLink<T>* p_list;
};

template<typename T>
LinkStack<T>::LinkStack() {
    this->p_list = new SingleLink<T>();
}

template<typename T>
LinkStack<T>::~LinkStack() {
    if(this->p_list != nullptr)
    {
        delete this->p_list;
        this->p_list = nullptr;
    }
}

template<typename T>
bool LinkStack<T>::isEmpty() const {
    return this->p_list->IsEmpty();
}

template<typename T>
int LinkStack<T>::size() const {
    return this->p_list->size();
}

template<typename T>
void LinkStack<T>::push(T m_data) {
    this->p_list->insert_head(m_data);
}

template<typename T>
T LinkStack<T>::pop() {
    if(this->p_list->IsEmpty() == true)
        return 0;
    T m_data = this->p_list->get_head();
    this->p_list->del_head();
    return m_data;
}

template<typename T>
T LinkStack<T>::top() const {
    if(this->p_list->IsEmpty() == true)
        return 0;
    return this->p_list->get_head();
}

template<typename T>
void LinkStack<T>::print() const {
    this->p_list->print();
}

#endif /* LINKSTACK_H */

