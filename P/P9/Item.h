/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Item.h
 * Author: jgr97
 *
 * Created on 30 de abril de 2019, 9:51
 */



#ifndef ITEM_H
#define ITEM_H

#include <string>
using namespace std;

class Item {
public:
    virtual string getDescripcion() const = 0;
};

#endif /* ITEM_H */

