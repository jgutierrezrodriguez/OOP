/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Droid.cpp
 * Author: jgr97
 * 
 * Created on 19 de marzo de 2019, 12:27
 */

#include "Droid.h"

int Droid::numDroids=0;

Droid::Droid() {
}

Droid::Droid(string _brand, string _model): brand(_brand), model(_model){
    numDroids++;
    idD=numDroids;
}

Droid::Droid(const Droid& orig):brand(orig.brand), model(orig.model){
    numDroids++;
    idD=numDroids;
}

Droid::~Droid() {
}

int Droid::getIdD(){
    return idD;
}

int Droid::getNumDroids(){
    return numDroids;
}

string Droid::getBrand(){
    return brand;
}

string Droid::getModel(){
    return model;
}

Droid &  Droid::setBrand(string new_){
    brand=new_;
    
    return *this;
}

Droid &  Droid::setModel(string new_){
    model=new_;
    
    return *this;
}

string Droid::toCSV(){
    string ret;
    
    ret = to_string(idD)+(string)";"+brand+(string)";"+model+(string)";";
    return ret;
}

Droid& Droid::operator = ( const Droid& another )
{
   if ( this != &another ){
      brand = another.brand;
      model = another.model;
   }
   
   return ( *this );
}

void Droid::fromCSV(string &inputStr){
    stringstream ss;
    ss << inputStr;
    
    getline(ss,brand,';');
    getline(ss,model,';');   
}

