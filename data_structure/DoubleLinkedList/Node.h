/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Node.h
 * Author: eddy
 *
 * Created on February 25, 2017, 12:21 PM
 */

#ifndef NODE_H
#define NODE_H

template<typename T>
class Node {
public:
    Node();
    Node(T value, Node<T>* pre, Node<T>* next);
    virtual ~Node() = default;
public:
    T _value;
    Node<T>* _pre;
    Node<T>* _next;
};

template<typename T>
Node<T>::Node():_pre(nullptr), _next(nullptr) {
}

template<typename T>
Node<T>::Node(T value, Node<T>* pre, Node<T>* next):_value(value), _pre(pre), _next(next) { 
}

#endif /* NODE_H */

