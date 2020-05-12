/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Espada.h
 * Author: jgr97
 *
 * Created on 30 de abril de 2019, 11:04
 */

#include <string>
#include"Item.h"
using namespace std;


#ifndef ESPADA_H
#define ESPADA_H

class Espada : public Item{
public:
    virtual string getDescripcion() const override;

};;

#endif /* ESPADA_H */

