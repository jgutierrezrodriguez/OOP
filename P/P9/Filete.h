/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Filete.h
 * Author: jgr97
 *
 * Created on 30 de abril de 2019, 12:29
 */

#include "Item.h"
#include <string>
using namespace std;

#ifndef FILETE_H
#define FILETE_H

class Filete : public Item{
public:
    virtual string getDescripcion() const override;

};

#endif /* FILETE_H */

