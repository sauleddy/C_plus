/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   SmartPtr.h
 * Author: eddy
 *
 * Created on March 25, 2017, 4:16 PM
 */

#ifndef SMARTPTR_H
#define SMARTPTR_H

#include "KRefCount.h"

#define SAFE_DELETE(p) if (p) { delete p; p = nullptr; }

template<typename T>
class SmartPtr {
public:
    SmartPtr();
    SmartPtr(T* p_Data);
    SmartPtr(const SmartPtr<T>& sp);
    virtual ~SmartPtr();
    
    inline T& operator*();
    inline T* operator->();
    
    SmartPtr<T>& operator=(const SmartPtr<T>& sp);
    SmartPtr<T>& operator=(const T* p_Data);
    
    T* Get(void);
    
    void Attach(T* object);
    T* Detach();
    
private:

    KRefCount* p_KRefCount;
    T* m_pData;
};

template<typename T>
SmartPtr<T>::SmartPtr(): m_pData(nullptr) {
    p_KRefCount = new KRefCount();
    p_KRefCount->AddRef();
}

template<typename T>
SmartPtr<T>::SmartPtr(T* p_Data): m_pData(p_Data) {
    p_KRefCount = new KRefCount();
    p_KRefCount->AddRef();
}

template<typename T>
SmartPtr<T>::SmartPtr(const SmartPtr<T>& sp): m_pData(sp.m_pData), p_KRefCount(sp.p_KRefCount) {
    p_KRefCount->AddRef();
}

template<typename T>
SmartPtr<T>::~SmartPtr() {
    if(p_KRefCount != nullptr && p_KRefCount->Release() == 0) {
        SAFE_DELETE(m_pData);
        SAFE_DELETE(p_KRefCount);
    }
}

template<typename T>
inline T& SmartPtr<T>::operator*() {
    return *m_pData;
}

template<typename T>
inline T* SmartPtr<T>::operator->() {
    return m_pData;
}

template<typename T>
SmartPtr<T>& SmartPtr<T>::operator=(const SmartPtr<T>& sp) {
    if(this != &sp) {
        if(p_KRefCount != nullptr && p_KRefCount->Release() == 0) {
            SAFE_DELETE(m_pData);
            SAFE_DELETE(p_KRefCount);
        }
        m_pData = sp.m_pData;
        p_KRefCount = sp.p_KRefCount;
        p_KRefCount->AddRef();
    }
    return *this;
}

template<typename T>
SmartPtr<T>& SmartPtr<T>::operator=(const T* p_Data) {
    if(p_KRefCount != nullptr && p_KRefCount->Release() == 0) {
        SAFE_DELETE(m_pData);
        SAFE_DELETE(p_KRefCount);
    }
    m_pData = p_Data;
    p_KRefCount = new KRefCount();
    p_KRefCount->AddRef();
    return *this;
}

template<typename T>
T* SmartPtr<T>::Get(void) {
    T* ptr = m_pData;
    return ptr;
}

template<typename T>
void SmartPtr<T>::Attach(T* object) {
    if(p_KRefCount != nullptr && p_KRefCount->Release() == 0) {
        SAFE_DELETE(m_pData);
        SAFE_DELETE(p_KRefCount);
    }
    m_pData = object;
    p_KRefCount = new KRefCount();
    p_KRefCount->AddRef();
}

template<typename T>
T* SmartPtr<T>::Detach() {
    T* ptr = nullptr;

    if (m_pData)
    {           
        ptr = m_pData;
        m_pData = nullptr;
        p_KRefCount->Reset();
    }
    return ptr;
}

#endif /* SMARTPTR_H */

