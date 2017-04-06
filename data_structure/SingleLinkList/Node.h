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
    Node() = default;
    Node(T value, Node* next);
    virtual ~Node() = default;
public:
    T _value;
    Node* _next;
};

template<typename T>
Node<T>::Node(T value, Node* next):_value(value), _next(next) { 
}

#endif /* NODE_H */

