/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Bloque.h
 * Author: jgr97
 *
 * Created on 30 de abril de 2019, 13:10
 */


#include"ItemApilable.h"
#include <string>
#include <stdexcept>
#include <sstream>
using namespace std;

#ifndef BLOQUE_H
#define BLOQUE_H

class Bloque: public ItemApilable {
public:
    virtual string getDescripcion() const override;
};

#endif /* BLOQUE_H */

