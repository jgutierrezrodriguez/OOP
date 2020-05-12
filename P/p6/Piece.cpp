/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Piece.cpp
 * Author: jgr97
 * 
 * Created on 19 de marzo de 2019, 14:01
 */

#include "Piece.h"

Piece::Piece() {
}

Piece::Piece(string name, float weight, string description){
    this->name=name;
    this->weight=weight;
    this->description=description;
}

Piece::Piece(const Piece& orig) : name(orig.name), weight(orig.weight), description(orig.description){
}

Piece::~Piece() {
}

string Piece::getName(){
    return name;
}

float Piece::getWeight(){
    return weight;
}

string Piece::getDescription(){
    return description;
}

Piece & Piece::setName(string _new){
    this->name=_new;
    
    return *this;
}

Piece & Piece::setWeight(float _new){
    this->weight=_new;
    
    return *this;
}

Piece & Piece::setDescription(string _new){
    this->description=_new;
    
    return *this;
}

