/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Exercise5_Dice.cpp
 * Author: jgr97
 * 
 * Created on 25 de febrero de 2019, 9:10
 */

#include "Exercise5_Dice.h"

Exercise5_Dice::Exercise5_Dice() {
}

Exercise5_Dice::Exercise5_Dice(const Exercise5_Dice& orig) : 
                                throwCounter(orig.throwCounter)                              
{
    for(int i=0; i<orig.throwCounter+1;i++){
        throwDice[i]=orig.throwDice[i];
    }
}

Exercise5_Dice::~Exercise5_Dice() {
    delete [] throwDice;
}

int Exercise5_Dice::getLastThrow(){
    return (throwDice[throwCounter-1]);
}

int Exercise5_Dice::getNumberOfThrows(){
    return throwCounter;
}

void Exercise5_Dice::newThrow(){
    std::random_device rd; // obtain a random number from hardware
    std::mt19937 eng(rd()); // seed the generator
    std::uniform_int_distribution<> distr(1, 6); // define the range
    
    throwDice[throwCounter]=distr(eng);
    
    throwCounter++;   
}

int Exercise5_Dice::sumOfThrows(){
    int sumOfThrows=0;
    
    for(int i =0; i<=throwCounter-1;i++)
        sumOfThrows=sumOfThrows+throwDice[i];
    
    return sumOfThrows;
}

void Exercise5_Dice::resetCounter(){
    delete [] throwDice;
    throwDice = new int [MAX_N_THROWS];
    throwCounter=0;
}