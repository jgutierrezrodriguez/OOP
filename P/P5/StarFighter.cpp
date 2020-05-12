/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   StarFighter.cpp
 * Author: jgr97
 * 
 * Created on 11 de marzo de 2019, 20:15
 */

#include "StarFighter.h"

int StarFighter::numStarFighters=0;

StarFighter::StarFighter() {
}

StarFighter::StarFighter(string _brand, string _model, int nSt) : brand(_brand), model(_model), numSeats(nSt){
    numStarFighters++;
    idSF=numStarFighters;
}

StarFighter::StarFighter(const StarFighter& orig) : brand(orig.brand), model(orig.model), numSeats(orig.numSeats) {
     numStarFighters++;
    idSF=numStarFighters;
}

StarFighter::~StarFighter() {
}

int StarFighter::getIdSF(){
    return idSF;
}

int StarFighter::getNumSeats(){
    return numSeats;
}

int StarFighter::getNumStarFighters(){
    return numStarFighters;
}

string StarFighter::getBrand(){
    return brand;
}

string StarFighter::getModel(){
    return model;
}

StarFighter & StarFighter::setNumSeats(int new_){
    numSeats=new_;
    
    return *this;
}

StarFighter & StarFighter::setBrand(string new_){
    brand=new_;
    
    return *this;
}

StarFighter & StarFighter::setModel(string new_){
    model=new_;
    
    return *this;
}

string StarFighter::toCSV(){
    string ret;
    
    ret = to_string(idSF)+(string)";"+brand+(string)";"+
            model+(string)";"+to_string(numSeats);
    return ret;
}

StarFighter& StarFighter::operator = (const StarFighter& another)
{
   if ( this != &another )
   {
      brand = another.brand;
      model = another.model;
      numSeats = another.numSeats;
   }
   
   return ( *this );
}

void StarFighter::fromCSV(string inputStr){
    stringstream ss;
    ss.str(inputStr);
    
    getline(ss,brand,';');
    getline(ss,model,';');
    ss >> numSeats;
}