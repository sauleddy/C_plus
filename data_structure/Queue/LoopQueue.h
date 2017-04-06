/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   LoopQueue.h
 * Author: eddy
 *
 * Created on February 28, 2017, 5:46 PM
 */

#ifndef LOOPQUEUE_H
#define LOOPQUEUE_H

template<typename T>
class LoopQueue {
public:
    LoopQueue();
    LoopQueue(int capacity);
    virtual ~LoopQueue();
    
    bool isEmpty() const;
    bool isFull() const;
    int size() const;
    void push(T m_data);
    T pop();
    T front() const;
    
private:
    const int capacity;
    int head;
    int tail;
    int count;
    T* arrData;
    int getNextIndex(int idx) const;
};

template<typename T>
LoopQueue<T>::LoopQueue(): count(0), capacity(0), head(0), tail(0) {
    this->arrData = nullptr;
}

template<typename T>
LoopQueue<T>::LoopQueue(int capacity): count(0), capacity(capacity), head(0), tail(0) {
    this->arrData = new T[this->capacity];
}
    
template<typename T>
LoopQueue<T>::~LoopQueue() {
    if(arrData != nullptr)
    {
        delete [] arrData;
        arrData = nullptr;
    }
}

template<typename T>
bool LoopQueue<T>::isEmpty() const {
    return (this->count <= 0) ? true : false;
}

template<typename T>
bool LoopQueue<T>::isFull() const {
    return (this->count >= this->capacity) ? true : false;
}

template<typename T>
int LoopQueue<T>::size() const {
    return this->count;
}

template<typename T>
void LoopQueue<T>::push(T m_data) {
    if(this->isFull() == true)
        return;
    arrData[this->tail] = m_data;
    this->tail = this->getNextIndex(this->tail);
    ++this->count;
}

template<typename T>
T LoopQueue<T>::pop() {
    if(this->isEmpty() == true)
        return 0;
    T m_data = arrData[this->head];
    this->head = this->getNextIndex(this->head);
    --this->count;
    return m_data;
}

template<typename T>
T LoopQueue<T>::front() const {
    if(this->isEmpty() == true)
        return 0;
    return arrData[this->head];
}

template<typename T>
int LoopQueue<T>::getNextIndex(int idx) const {
    if(idx == this->capacity - 1)
        return 0;
    else
        return idx + 1;
}

#endif /* LOOPQUEUE_H */

