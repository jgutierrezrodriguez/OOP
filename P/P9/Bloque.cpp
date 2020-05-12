/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Bloque.cpp
 * Author: jgr97
 * 
 * Created on 30 de abril de 2019, 13:10
 */

#include "Bloque.h"

string Bloque::getDescripcion() const{
    
    string block = "Building block";
    
    int num=this->ItemApilable::getNumElem();
    
    std::stringstream aux;
    
    aux << block << " (" <<
            << num << ")";

    return aux.str();
}
