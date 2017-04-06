/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   AVLTree.h
 * Author: eddy
 *
 * Created on March 5, 2017, 5:58 PM
 */

#ifndef AVLTREE_H
#define AVLTREE_H

#include "../BinarySearchTree/BSTree.h"
#include "AVLNode.h"

template<typename T>
class AVLTree: public BSTree<T> {
public:
    AVLTree() = default;
    virtual ~AVLTree() = default;
    
    NodeBase<T>* insert(T value);
    NodeBase<T>* remove(T value);
    int height();
    
private:
    NodeBase<T>* createNode(T value);
    void adjustTree(AVLNode<T>* p_Node);
    void rotateLeft(AVLNode<T>* p_Node);
    void rotateRight(AVLNode<T>* p_Node);
    void caculateHeightToRoot(AVLNode<T>* p_Node);
    void caculateHeight(AVLNode<T>* p_Node);
    AVLNode<T>* findUnballanceTree(AVLNode<T>* p_Node);
    int LeftHeight(AVLNode<T>* p_Node);
    int RightHeight(AVLNode<T>* p_Node);
};

template<typename T>
NodeBase<T>* AVLTree<T>::insert(T value) {
    AVLNode<T>* p_NodeInsert = (AVLNode<T>*)BSTree<T>::insert(value);
    if(p_NodeInsert == nullptr)
        return nullptr;
    
    // calculate height
    this->caculateHeightToRoot(p_NodeInsert);
    
    // adjust tree
    this->adjustTree(p_NodeInsert);
    
    return p_NodeInsert;
}

template<typename T>
NodeBase<T>* AVLTree<T>::remove(T value) {
    AVLNode<T>* p_NodeParent = (AVLNode<T>*)BSTree<T>::remove(value);
    if(p_NodeParent == nullptr)
        return nullptr;
    
    // calculate height
    this->caculateHeightToRoot(p_NodeParent);
    
    // adjust tree
    adjustTree(p_NodeParent);
    
    return p_NodeParent;
}

template<typename T>
int AVLTree<T>::height() {
    AVLNode<T>* p_Root = (AVLNode<T>*)this->root;
    if(p_Root == nullptr)
        return 0;
    else 
        return p_Root->height;
}

template<typename T>
NodeBase<T>* AVLTree<T>::createNode(T value) {
    return new AVLNode<T>(value);
}

template<typename T>
void AVLTree<T>::adjustTree(AVLNode<T>* p_Node) {
    if(p_Node == nullptr)
        return;
    
    AVLNode<T>* p_RootUB = this->findUnballanceTree(p_Node);
    if(p_RootUB == nullptr)
        return;
    
    int iHeightL = this->LeftHeight(p_RootUB);
    int iHeightR = this->RightHeight(p_RootUB);
    if(iHeightL > iHeightR)
    {
        int iHeightLL = this->LeftHeight((AVLNode<T>*)p_RootUB->lchild);
        int iHeightLR = this->RightHeight((AVLNode<T>*)p_RootUB->lchild);
        if(iHeightLL >= iHeightLR)
            this->rotateRight(p_RootUB);
        else
        {
            this->rotateLeft((AVLNode<T>*)p_RootUB->lchild);
            this->rotateRight(p_RootUB);
        }
    }
    else
    {
        int iHeightRL = this->LeftHeight((AVLNode<T>*)p_RootUB->rchild);
        int iHeightRR = this->RightHeight((AVLNode<T>*)p_RootUB->rchild);
        if(iHeightRR >= iHeightRL)
            this->rotateLeft(p_RootUB);
        else
        {
            this->rotateRight((AVLNode<T>*)p_RootUB->rchild);
            this->rotateLeft(p_RootUB);
        }
    }
}

template<typename T>
void AVLTree<T>::rotateLeft(AVLNode<T>* p_Node) {
    if(p_Node == nullptr || p_Node->rchild == nullptr)
        return;
    AVLNode<T>* p_NodeBase = (AVLNode<T>*)p_Node;
    AVLNode<T>* p_NodeParent = (AVLNode<T>*)p_Node->parent;
    AVLNode<T>* p_NodeChildR = (AVLNode<T>*)p_Node->rchild;
    AVLNode<T>* p_NodeChildRL = (AVLNode<T>*)p_Node->rchild->lchild;
    p_NodeChildR->parent = p_NodeParent;
    p_NodeChildR->lchild = p_NodeBase;
    p_NodeBase->parent = p_NodeChildR;
    if(p_NodeChildRL != nullptr)
    {
        p_NodeBase->rchild = p_NodeChildRL;
        p_NodeChildRL->parent = p_NodeBase;
    }
    else
        p_NodeBase->rchild = nullptr;
    if(p_NodeParent != nullptr)
    {
        if(p_NodeParent->value <= p_NodeBase->value)
            p_NodeParent->rchild = p_NodeChildR;
        else
            p_NodeParent->lchild = p_NodeChildR;
    }
    if(this->root == p_NodeBase)
        this->root = p_NodeChildR;
    this->caculateHeightToRoot(p_NodeBase);
}

template<typename T>
void AVLTree<T>::rotateRight(AVLNode<T>* p_Node) {
    if(p_Node == nullptr || p_Node->rchild == nullptr)
        return;
    AVLNode<T>* p_NodeBase = (AVLNode<T>*)p_Node;
    AVLNode<T>* p_NodeParent = (AVLNode<T>*)p_Node->parent;
    AVLNode<T>* p_NodeChildL = (AVLNode<T>*)p_Node->lchild;
    AVLNode<T>* p_NodeChildLR = (AVLNode<T>*)p_Node->lchild->rchild;
    p_NodeChildL->parent = p_NodeParent;
    p_NodeChildL->lchild = p_NodeBase;
    p_NodeBase->parent = p_NodeChildL;
    if(p_NodeChildLR != nullptr)
    {
        p_NodeBase->lchild = p_NodeChildLR;
        p_NodeChildLR->parent = p_NodeBase;
    }
    else
        p_NodeBase->lchild = nullptr;
    if(p_NodeParent != nullptr)
    {
        if(p_NodeParent->value <= p_NodeBase->value)
            p_NodeParent->rchild = p_NodeChildL;
        else
            p_NodeParent->lchild = p_NodeChildL;
    }
    if(this->root == p_NodeBase)
        this->root = p_NodeChildL;
    this->caculateHeightToRoot(p_NodeBase);
}

template<typename T>
void AVLTree<T>::caculateHeightToRoot(AVLNode<T>* p_Node) {
    if(p_Node == nullptr)
        return;
    AVLNode<T>* p_NodeCur = (AVLNode<T>*)p_Node;
    while(p_NodeCur != nullptr)
    {
        this->caculateHeight(p_NodeCur);
        p_NodeCur = (AVLNode<T>*)p_NodeCur->parent;
    }
}

template<typename T>
void AVLTree<T>::caculateHeight(AVLNode<T>* p_Node){
    if(p_Node == nullptr)
        return;
    int iHeightL = this->LeftHeight(p_Node);
    int iHeightR = this->RightHeight(p_Node);
    p_Node->height = max(iHeightL, iHeightR) + 1;
}

template<typename T>
AVLNode<T>* AVLTree<T>::findUnballanceTree(AVLNode<T>* p_Node)
{
    AVLNode<T>* p_NodeRootUB = nullptr;
    AVLNode<T>* p_NodeCur = p_Node;
    while(p_NodeCur != nullptr)
    {
        int iHeightL = this->LeftHeight(p_NodeCur);
        int iHeightR = this->RightHeight(p_NodeCur);
        int iBF = abs(iHeightL - iHeightR);
        if(iBF > 1)
        {
            p_NodeRootUB = p_NodeCur;
            break;
        }
        p_NodeCur = (AVLNode<T>*)p_NodeCur->parent;
    }
    return p_NodeRootUB;
}

template<typename T>
int AVLTree<T>::LeftHeight(AVLNode<T>* p_Node) {
    if(p_Node == nullptr)
        return 0;
    AVLNode<T>* p_NodeL = (AVLNode<T>*)p_Node->lchild;
    if(p_NodeL == nullptr)
        return 0;
    else
        return p_NodeL->height;
}

template<typename T>
int AVLTree<T>::RightHeight(AVLNode<T>* p_Node) {
    if(p_Node == nullptr)
        return 0;
    AVLNode<T>* p_NodeR = (AVLNode<T>*)p_Node->rchild;
    if(p_NodeR == nullptr)
        return 0;
    else
        return p_NodeR->height;
}

#endif /* AVLTREE_H */

