/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: eddy
 *
 * Created on March 7, 2017, 12:31 PM
 */

#include <iostream>
#include <cstdlib>

using namespace std;

class X {};
class Y: public virtual X {};
class Z: public virtual X {};
class A: public Y, public Z {};

class Base
{
public:
    Base(int i): baseI(i) {}
    virtual void print(void) { cout<< "call Base::print()"<<endl; }
    virtual void setI(void) { cout<< "call Base::setI()"<<endl; }
    virtual ~Base() {}
private:
    int baseI;
};

typedef void (*func)(void);
    
/*
 * 
 */
int main(int argc, char** argv) {

    cout<< sizeof(X)<< ","<< sizeof(Y)<< ","<< sizeof(Z)<< ","<< sizeof(A)<< endl;
    
    Base b(1000);
    int* vptrAddress = (int*)(&b);
    cout<< "the address of vptr is:"<< vptrAddress<< endl;
    
    int* vtableAddress = (int*)*((int*)(&b));
    cout<< "the address of vtable is:"<< vtableAddress<< endl;
    
    func firstVfunc = (func)*vtableAddress;
    firstVfunc();
    vtableAddress += 2;
    func secondVfunc = (func)*(vtableAddress);
    secondVfunc();
    
    char *p1="hello";
char *p2="world";
char *p3="a piece of cake";
char *str[]={p1,p2,p3};
cout<< *(str[0]+1)<< endl;;
    
    return 0;
}

