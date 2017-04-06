/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   TreeBase.h
 * Author: eddy
 *
 * Created on March 5, 2017, 4:00 PM
 */

#ifndef TREEBASE_H
#define TREEBASE_H

#include <iostream>
#include "NodeBase.h"

using namespace std;

template<typename T>
class TreeBase {
public:
    TreeBase();
    virtual ~TreeBase();
    
    virtual NodeBase<T>* insert(T value){return nullptr;}
    virtual NodeBase<T>* remove(T value){return nullptr;}
    virtual void destroy();
    
    virtual void preOrder();
    virtual void inOrder();
    virtual void postOrder();
    virtual void layerOrder();
    
protected:
    NodeBase<T>* root;
  
protected:
    virtual NodeBase<T>* remove(NodeBase<T>* p, T key){return nullptr;}
    virtual void preOrder(NodeBase<T>* p);
    virtual void inOrder(NodeBase<T>* p);
    virtual void postOrder(NodeBase<T>* p);
    virtual void destroy(NodeBase<T>** p);
    virtual NodeBase<T>* createNode(T value);
};

template<typename T>
TreeBase<T>::TreeBase(): root(nullptr) {
    
}

template<typename T>
TreeBase<T>::~TreeBase() {
    this->destroy();
}

template<typename T>
void TreeBase<T>::destroy() {
    if(this->root != nullptr)
        this->destroy(&(this->root));
}

template<typename T>
void TreeBase<T>::preOrder() {
    this->preOrder(this->root);
}
   
template<typename T>
void TreeBase<T>::inOrder() {
    this->inOrder(this->root);
}
    
template<typename T>
void TreeBase<T>::postOrder() {
    this->postOrder(this->root);
}
    
template<typename T>
void TreeBase<T>::layerOrder() {
    
}

template<typename T>
void TreeBase<T>::preOrder(NodeBase<T>* p) {
    if(p == nullptr)
        return;
    cout<< p->value<< ":";
    preOrder(p->lchild);
    preOrder(p->rchild);
}
   
template<typename T>
void TreeBase<T>::inOrder(NodeBase<T>* p) {
    if(p == nullptr)
        return;
    inOrder(p->lchild);
    cout<< p->value<< ":";
    inOrder(p->rchild);
}

template<typename T>
void TreeBase<T>::postOrder(NodeBase<T>* p) {
    if(p == nullptr)
        return;
    postOrder(p->lchild);
    postOrder(p->rchild);
    cout<< p->value<< ":";
}
    
template<typename T>
void TreeBase<T>::destroy(NodeBase<T>** p) {
    if(p == nullptr || *p == nullptr)
        return;
    destroy(&((*p)->lchild));
    destroy(&((*p)->rchild));
    delete (*p);
    (*p) = nullptr;
}

template<typename T>
NodeBase<T>* TreeBase<T>::createNode(T value) {
    return new NodeBase<T>(value);
}

#endif /* TREEBASE_H */

