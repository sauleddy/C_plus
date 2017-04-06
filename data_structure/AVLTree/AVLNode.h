/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   AVLNode.h
 * Author: eddy
 *
 * Created on March 5, 2017, 5:57 PM
 */

#ifndef AVLNODE_H
#define AVLNODE_H

#include "../TreeBase/NodeBase.h"

template<typename T>
class AVLNode: public NodeBase<T> {
public:
    AVLNode() = default;
    AVLNode(T value);
    virtual ~AVLNode() = default;

    int height;
    
};

template<typename T>
AVLNode<T>::AVLNode(T value): NodeBase<T>(value), height(0) {
    
}

#endif /* AVLNODE_H */

