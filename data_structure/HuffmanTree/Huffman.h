/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Huffman.h
 * Author: eddy
 *
 * Created on March 6, 2017, 3:32 PM
 */

#ifndef HUFFMAN_H
#define HUFFMAN_H

#include <vector>
#include <iostream>
#include <algorithm>
#include "../TreeBase/TreeBase.h"

using namespace std;

/*template<typename T>
bool compare(const T* lhs, const T* rhs)
{
   return *lhs < *rhs;
}*/

template<typename T>
class Huffman: public TreeBase<T> {
public:
    Huffman() = default;
    virtual ~Huffman() = default;
    
    void create(T data[], int length);
    
private:
    void combineTree(NodeBase<T>* rootOther);
    
};

template<typename T>
void Huffman<T>::create(T data[], int length) {
    if(data == nullptr || length <= 0)
        return;
    std::vector<T> vecData;
    for(int i=0; i<length; ++i)
        vecData.push_back(data[i]);
    std::sort(vecData.begin(), vecData.end());
    typename std::vector<T>::iterator iter = vecData.begin();
    for(iter; iter!=vecData.end(); ++iter) {
        cout<< *iter<< endl;
        if(iter == vecData.begin())
            this->root = this->createNode((*iter));
        else {
            NodeBase<T>* rootOther = this->createNode((*iter));
            this->combineTree(rootOther);
        }
    }
}

template<typename T>
void Huffman<T>::combineTree(NodeBase<T>* rootOther) {
    if(rootOther == nullptr)
        return;
    if(this->root == nullptr) {
        this->root = rootOther;
        return;
    }
    NodeBase<T>* rootOrigin = this->root;
    NodeBase<T>* rootNew = this->createNode(rootOrigin->value + rootOther->value);
    rootOrigin->parent = rootNew;
    rootOther->parent = rootNew;
    if(rootOrigin->value <= rootOther->value) {
        rootNew->lchild = rootOrigin;
        rootNew->rchild = rootOther;
    } else {
        rootNew->lchild = rootOther;
        rootNew->rchild = rootOrigin;
    }
    this->root = rootNew;
}

#endif /* HUFFMAN_H */

