/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Cofre.h
 * Author: jgr97
 *
 * Created on 30 de abril de 2019, 9:51
 */

#include "Item.h"
#include <string>

#ifndef COFRE_H
#define COFRE_H

class Cofre {
public:
    Cofre();
    Cofre(int cuantosCaben);
    Cofre(const Cofre& orig);
    virtual ~Cofre();
    int cuantosCaben();
    int cuantosHay() const;
    void mete(Item *item);
    Item& consulta(int cual);
    Item* saca(int cual);
private:
    int _maxItems = 27; ///< Tamaño del vector de punteros
    Item* *_items = nullptr; ///< Vector de punteros creado dinámicamente
    int _numItems = 0; ///< Primeras posiciones del vector ocupadas (máximo maxItems)
};

#endif /* COFRE_H */

