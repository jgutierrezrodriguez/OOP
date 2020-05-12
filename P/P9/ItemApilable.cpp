/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   ItemApilable.cpp
 * Author: jgr97
 * 
 * Created on 30 de abril de 2019, 12:42
 */

#include "ItemApilable.h"

ItemApilable::ItemApilable(int _num_elementos) : num_elementos (_num_elementos)
{
}

void ItemApilable::incrementarNumElem(int cantidad){
    num_elementos=num_elementos+cantidad;
}

void ItemApilable::decrementarNumElem(int cantidad){
    num_elementos=num_elementos-cantidad;
}

int ItemApilable::getNumElem(){
    return num_elementos;
}


