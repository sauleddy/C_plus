/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   MaxHeap.h
 * Author: eddy
 *
 * Created on March 6, 2017, 2:04 PM
 */

#ifndef MAXHEAP_H
#define MAXHEAP_H

#include <iostream>

#define DEFAULT_CAPACITY    10

using namespace std;

template<typename T>
class MaxHeap {
public:
    MaxHeap();
    MaxHeap(int cap);
    virtual ~MaxHeap();
    
    void insert(T value);
    void remove(T value);
    T getTop();
    void print();
    
private:
    int capacity;
    int size;
    T* data;
    
    void adjustUp(int index);
    void adjustDown(int index);
    
    bool isEmpty();
    bool isFull();
    
    int find(T value);
    
    void swap(int idx1, int idx2);
};

template<typename T>
MaxHeap<T>::MaxHeap(): capacity(DEFAULT_CAPACITY), size(0) {
    data = new T[capacity];
}

template<typename T>
MaxHeap<T>::MaxHeap(int cap): capacity(cap), size(0) {
    data = new T[capacity];
}

template<typename T>
MaxHeap<T>::~MaxHeap() {
    if(data != nullptr) {
        delete [] data;
        data = nullptr;
    }
}

template<typename T>
void MaxHeap<T>::insert(T value) {
    if(this->isFull() == true)
        return;
    data[this->size++] = value;
    this->adjustUp(this->size - 1);
}

template<typename T>
void MaxHeap<T>::remove(T value) {
    if(this->isEmpty() == true)
        return;
    int res = this->find(value);
    if(res == -1)
        return;
    data[res] = data[--this->size];
    this->adjustDown(res);
}

template<typename T>
T MaxHeap<T>::getTop() {
    if(this->isEmpty() == true)
        return 0;
    return data[0];
}

template<typename T>
void MaxHeap<T>::print() {
    for(int i=0; i<this->size; ++i) {
        cout<< data[i]<< ",";
    }
    cout<< endl;
}
    
template<typename T>
void MaxHeap<T>::adjustUp(int index) {
    if(index <= 0)
        return;
    while(index > 0) {
        int idxParent = (index - 1) / 2;
        if(data[idxParent] < data[index]) {
            swap(idxParent, index);
            index = idxParent;
        } else {
            break;
        }
    }
}

template<typename T>
void MaxHeap<T>::adjustDown(int index) {
    int idxL = index * 2 + 1;
    int idxR = index * 2 + 2;
    while(idxL < this->size) {
        int iThisIdx = index;
        T valueL = data[idxL];
        if(valueL > data[index]) {
            swap(idxL, index);
            index = idxL;
        } else {
            if(idxR < this->size) {
                T valueR = data[idxR];
                if(valueR > data[index]) {
                    swap(idxR, index);
                    index = idxR;
                }
            }
        }
        
        if(iThisIdx == index)
            break;
        idxL = index * 2 + 1;
        idxR = index * 2 + 2;
    }
}

template<typename T>
bool MaxHeap<T>::isEmpty() {
    if(this->size == 0)
        return true;
    else
        return false;
}

template<typename T>
bool MaxHeap<T>::isFull() {
    if(this->size >= this->capacity)
        return true;
    else
        return false;
}

template<typename T>
int MaxHeap<T>::find(T value) {
    for(int i=0; i<this->size; ++i) {
        if(data[i] == value)
            return i;
    }
    return -1;
}

template<typename T>
void MaxHeap<T>::swap(int idx1, int idx2) {
    T temp = data[idx1];
    data[idx1] = data[idx2];
    data[idx2] = temp;
}

#endif /* MAXHEAP_H */

