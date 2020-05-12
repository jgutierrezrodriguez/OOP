/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Inventario.h
 * Author: jgr97
 *
 * Created on 4 de mayo de 2019, 10:44
 */

#ifndef INVENTARIO_H
#define INVENTARIO_H

#include "ContenedorItem.h"
#include "Item.h"

class Inventario : public ContenedorItem<Item>{
public:
    Inventario();
    virtual ~Inventario();

};

#endif /* INVENTARIO_H */

