/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Composite.cpp
 * Author: eddy
 * 
 * Created on March 22, 2017, 8:56 AM
 */

#include "Composite.h"

Composite::Composite(string name): Component(name) {
}

Composite::~Composite() {
    for(auto component : vecChildren) {
        if(component != nullptr) {
            delete component;
            component = nullptr;
        }
    }
}

void Composite::operation(void) {
    cout<< "Composite::operation"<< endl;
}

void Composite::add(Component* component) {
    vecChildren.push_back(component);
}
   
void Composite::remove(Component* component) {
    for(auto iter=vecChildren.begin(); iter!=vecChildren.end(); ++iter) {
        if((*iter)->getName() == component->getName()) {
            if(*iter != nullptr) {
                delete *iter;
                *iter = nullptr;
            }
            vecChildren.erase(iter);
            break;
        }
    }
}
    
Component* Composite::getChild(int index) {
    if(index >= vecChildren.size())
        return nullptr;
    return vecChildren[index];
}
   
void Composite::print(void) {
    Component::print();
    for(auto component : vecChildren) {
        if(component != nullptr) {
            component->print();
        }
    }
}
    

