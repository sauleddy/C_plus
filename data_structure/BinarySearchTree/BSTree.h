/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   BSTree.h
 * Author: eddy
 *
 * Created on March 1, 2017, 2:41 PM
 */

#ifndef BSTREE_H
#define BSTREE_H

#include <iostream>
#include "../TreeBase/TreeBase.h"

using namespace std;

template<typename T>
class BSTree: public TreeBase<T> {
public:
    BSTree();
    virtual ~BSTree();
    
    NodeBase<T>* insert(T value);
    NodeBase<T>* remove(T value);
    
    T searchMin();
    T searchMax();
    
    NodeBase<T>* successor(NodeBase<T>* x);
    NodeBase<T>* predecessor(NodeBase<T>* x);
    
    NodeBase<T>* search_recursion(T key);
    NodeBase<T>* search_iterator(T key);
    
    NodeBase<T>* search(NodeBase<T>* p, T key);
    
private:
    
    NodeBase<T>* remove(NodeBase<T>* p, T key);
    T searchMin(NodeBase<T>* p);
    T searchMax(NodeBase<T>* p);
};

template<typename T>
BSTree<T>::BSTree(): TreeBase<T>() {
    
}

template<typename T>
BSTree<T>::~BSTree() {
}

template<typename T>
NodeBase<T>* BSTree<T>::insert(T value) {
    if(this->root == nullptr)
    {
        this->root = this->createNode(value);
        return this->root;
    }
    
    NodeBase<T>* parent = nullptr;
    NodeBase<T>* next = this->root;
    do
    {   
        parent = next;
        if(value <= parent->value)
            next = parent->lchild;
        else
            next = parent->rchild;
    } while(next != nullptr);
    
    next = this->createNode(value);
    next->parent = parent;
    if(parent->value > value)
        parent->lchild = next;
    else
        parent->rchild = next;
    return next;
}

template<typename T>
NodeBase<T>* BSTree<T>::remove(T value) {
    return this->remove(this->root, value);
}
 
template<typename T>
T BSTree<T>::searchMin() {
    return this->searchMin(this->root);
}

template<typename T>
T BSTree<T>::searchMax() {
    return this->searchMax(this->root);
}
    
template<typename T>
NodeBase<T>* BSTree<T>::successor(NodeBase<T>* x) {
    if(x == nullptr)
        return nullptr;
    
    if(x->rchild != nullptr)
    {
        NodeBase<T>* nodeChild = x->rchild;
        while(nodeChild != nullptr)
        {
            if(nodeChild->lchild == nullptr)
                return nodeChild;
            nodeChild = nodeChild->lchild;
        }
        return nodeChild;
    }
    
    NodeBase<T>* nodeParent = x->parent;
    while(nodeParent != nullptr)
    {
        if(nodeParent->value > x->value)
            break;
        nodeParent = nodeParent->parent;
    }
    return nodeParent;
}
    
template<typename T>
NodeBase<T>* BSTree<T>::predecessor(NodeBase<T>* x) {
    if(x == nullptr)
        return nullptr;
    
    if(x->lchild != nullptr)
    {
        NodeBase<T>* nodeChild = x->lchild;
        while(nodeChild != nullptr)
        {
            if(nodeChild->rchild == nullptr)
                return nodeChild;
            nodeChild = nodeChild->rchild;
        }
        return nodeChild;
    }
    
    NodeBase<T>* nodeParent = x->parent;
    while(nodeParent != nullptr)
    {
        if(nodeParent->value < x->value)
            break;
        nodeParent = nodeParent->parent;
    }
    return nodeParent;
}
    
template<typename T>
NodeBase<T>* BSTree<T>::search_recursion(T key) {
    return this->search(this->root, key);
}

template<typename T>
NodeBase<T>* BSTree<T>::search_iterator(T key) {
    NodeBase<T>* nodeCur = this->root;
    while(nodeCur != nullptr)
    {
        if(nodeCur->value == key)
            break;
        if(nodeCur->value < key)
            nodeCur = nodeCur->rchild;
        else
            nodeCur = nodeCur->lchild;
    }
    return nodeCur;
}

template<typename T>
NodeBase<T>* BSTree<T>::search(NodeBase<T>* p, T key) {
    if(p == nullptr)
        return nullptr;
    
    if(p->value == key)
        return p;
    
    if(p->value < key)
        return search(p->rchild, key);
    else
        return search(p->lchild, key);
}
    
template<typename T>
NodeBase<T>* BSTree<T>::remove(NodeBase<T>* p, T key) {
    NodeBase<T>* p_Node = this->search(p, key);
    if(p_Node == nullptr)
        return nullptr;
    
    NodeBase<T>* nodeParent = p_Node->parent;
    NodeBase<T>* nodeReplace = nullptr;
    if(p_Node->lchild != nullptr && p_Node->rchild != nullptr)
    {
        nodeReplace = p_Node->lchild;
        if(nodeReplace == p_Node->lchild) {
            if(p_Node->lchild->rchild != nullptr)
                p_Node->rchild->lchild = p_Node->lchild->rchild;
            nodeReplace->rchild = p_Node->rchild;
        } else {
            if(p_Node->rchild->lchild != nullptr)
                p_Node->lchild->rchild = p_Node->rchild->lchild;
            nodeReplace->lchild = p_Node->lchild;
        }
    }
    else if(p_Node->lchild != nullptr || p_Node->rchild != nullptr)
    {
        nodeReplace = (p_Node->lchild != nullptr) ? p_Node->lchild : p_Node->rchild;
    }
    
    delete p_Node;
    p_Node = nullptr;
    
    if(nodeReplace != nullptr)
        nodeReplace->parent = nodeParent;
    
    if(nodeParent != nullptr)
    {
        if(nodeParent->value > key)
            nodeParent->lchild = nodeReplace;
        else
            nodeParent->rchild = nodeReplace;
    }
    return nodeParent;
}
    
template<typename T>
T BSTree<T>::searchMin(NodeBase<T>* p) {
    if(p == nullptr)
        return 0;
    if(p->lchild == nullptr)
        return p->value;
    return searchMin(p->lchild);
}

template<typename T>
T BSTree<T>::searchMax(NodeBase<T>* p) {
    if(p == nullptr)
        return 0;
    if(p->rchild == nullptr)
        return p->value;
    return searchMax(p->rchild);
}

#endif /* BSTREE_H */

