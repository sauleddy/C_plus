/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   NodeBase.h
 * Author: eddy
 *
 * Created on March 5, 2017, 4:00 PM
 */

#ifndef NODEBASE_H
#define NODEBASE_H

template<typename T>
class NodeBase {
public:
    NodeBase() = default;
    NodeBase(T v);
    virtual ~NodeBase() = default;
    
    T value;
    NodeBase<T>* lchild;
    NodeBase<T>* rchild;
    NodeBase<T>* parent;
};

template<typename T>
NodeBase<T>::NodeBase(T v): value(v), lchild(nullptr), rchild(nullptr), parent(nullptr) {
    
}

#endif /* NODEBASE_H */

