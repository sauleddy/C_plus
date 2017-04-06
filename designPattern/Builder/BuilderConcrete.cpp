/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   BuilderConcrete.cpp
 * Author: eddy
 * 
 * Created on March 18, 2017, 9:50 PM
 */

#include "BuilderConcrete.h"

BuilderConcrete::BuilderConcrete() {
}

BuilderConcrete::BuilderConcrete(const BuilderConcrete& orig) {
}

BuilderConcrete::~BuilderConcrete() {
}

void BuilderConcrete::buildPartA(void) {
    p_Product->addPart("This is BuilderConcrete::PartA");
}

void BuilderConcrete::buildPartB(void) {
    p_Product->addPart("This is BuilderConcrete::PartB");
}    

