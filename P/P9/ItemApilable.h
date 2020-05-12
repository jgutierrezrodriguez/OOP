/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   ItemApilable.h
 * Author: jgr97
 *
 * Created on 30 de abril de 2019, 12:42
 */
#include "Item.h"

#include <string>
using namespace std;


#ifndef ITEMAPILABLE_H
#define ITEMAPILABLE_H

class ItemApilable : public Item{
private:
    int num_elementos=1;
    
public:
    ItemApilable() = default;
    ItemApilable(int _num_elementos);
    void incrementarNumElem(int cantidad);
    void decrementarNumElem(int cantidad);
    int getNumElem();
    
    virtual string getDescripcion() const override;
    


};

#endif /* ITEMAPILABLE_H */

