/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   ArrayStack.h
 * Author: eddy
 *
 * Created on February 28, 2017, 3:54 PM
 */

#ifndef ARRAYSTACK_H
#define ARRAYSTACK_H

#include <iostream>

using namespace std;

template<typename T>
class ArrayStack {
public:
    ArrayStack();
    ArrayStack(int capacity);
    virtual ~ArrayStack();
    
    bool isEmpty() const;
    int size() const;
    void push(T m_data);
    T pop();
    T top() const;
    
private:
    const int capacity;
    int count;
    T* arrData;
};

template<typename T>
ArrayStack<T>::ArrayStack(): count(0), capacity(0) {
    this->arrData = nullptr;
}

template<typename T>
ArrayStack<T>::ArrayStack(int capacity): count(0), capacity(capacity) {
    this->arrData = new T[this->capacity];
}
    

template<typename T>
ArrayStack<T>::~ArrayStack() {
    if(arrData != nullptr)
    {
        delete [] arrData;
        arrData = nullptr;
    }
}

template<typename T>
bool ArrayStack<T>::isEmpty() const {
    return (this->count <= 0) ? true : false;
}

template<typename T>
int ArrayStack<T>::size() const {
    return this->count;
}

template<typename T>
void ArrayStack<T>::push(T m_data) {
    if(this->count == this->capacity)
        return;
    arrData[this->count] = m_data;
    ++this->count;
}

template<typename T>
T ArrayStack<T>::pop() {
    if(this->count <= 0)
        return 0;
    T m_ret = arrData[this->count - 1];
    --this->count;
    return m_ret;
}

template<typename T>
T ArrayStack<T>::top() const {
    if(this->count <= 0)
        return 0;
    return arrData[this->count - 1];
}

#endif /* ARRAYSTACK_H */

