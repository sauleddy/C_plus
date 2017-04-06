/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   box.cpp
 * Author: eddy
 * 
 * Created on March 11, 2017, 3:57 PM
 */

#include <iostream>
#include "box.h"

using namespace std;

box::box() {
    cout<< "::box()"<< endl;
}

box::box(const box& orig) {
    cout<< "::box(const box& orig)"<< endl;
}

box::~box() {
    cout<< "::~box()"<< endl;
}

