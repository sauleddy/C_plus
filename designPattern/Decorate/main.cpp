/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: eddy
 *
 * Created on March 23, 2017, 9:12 AM
 */

#include <cstdlib>
#include "ConcreteComponent.h"
#include "ConcreteDecorate.h"

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    ConcreteComponent* component = new ConcreteComponent();
    component->operation();
    
    ConcreteDecorate* decorate = new ConcreteDecorate(component);
    decorate->operation();
    
    delete decorate;
    
    delete component;
    
    return 0;
}

