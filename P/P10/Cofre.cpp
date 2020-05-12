/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Cofre.cpp
 * Author: jgr97
 * 
 * Created on 4 de mayo de 2019, 10:43
 */

#include "Cofre.h"
#include <sstream>
#include <stdexcept>

Cofre::Cofre() : ContenedorItem()
{
}

Cofre::Cofre(int cuantoscaben) : ContenedorItem(cuantoscaben){
}

Cofre::~Cofre() {
}

std::string Cofre::getDescripcion() const{
    std::stringstream ss;
    
    ss << "Cofre (" 
       << cuantosHay() << ") ";
       
    
    return ss.str();
}

void Cofre::mete(Item* item){
    
    if (dynamic_cast<Cofre*>(item) != nullptr)
        throw std::invalid_argument("[Cofre::mete] No se puede introducir un cofre en otro cofre");
    
    this->ContenedorItem::mete(item);
    
}
