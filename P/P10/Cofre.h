/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Cofre.h
 * Author: jgr97
 *
 * Created on 4 de mayo de 2019, 10:43
 */

#include <string>

#ifndef COFRE_H
#define COFRE_H


#include "Item.h"
#include "ContenedorItem.h"

class Cofre : public ContenedorItem<Item>, public Item{
public:
    Cofre();
    Cofre(int cuantoscaben);
    Cofre(const Cofre& orig);
    virtual ~Cofre();
    virtual std::string getDescripcion() const;
    virtual void mete(Item* item);
private:

};

#endif /* COFRE_H */

