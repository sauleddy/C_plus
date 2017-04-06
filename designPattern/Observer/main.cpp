/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: eddy
 *
 * Created on March 26, 2017, 8:45 AM
 */

#include <cstdlib>

#include "ConcreteObserver.h"
#include "ConcreteSubject.h"

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    ConcreteSubject* p_Subject = new ConcreteSubject();
    
    Observer* p_Observer1 = new ConcreteObserver();
    Observer* p_Observer2 = new ConcreteObserver();
    
    p_Subject->Attach(p_Observer1);
    p_Subject->Attach(p_Observer2);
    p_Subject->SetState(10);
    
    delete p_Observer2;
    delete p_Observer1;
    
    delete p_Subject;
    
    return 0;
}

