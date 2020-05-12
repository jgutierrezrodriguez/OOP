/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: jgr97
 *
 * Created on 25 de febrero de 2019, 9:08
 */

#include <cstdlib>
#include <iostream>
#include "Exercise5_Dice.h"
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    
    cout<<"<----------------Exercise 5---------------->\n";
    
    
    Exercise5_Dice dice;
    
    //Throw 1
    dice.newThrow();
    
    cout<<"\nThrow 1: "<< dice.getLastThrow();
  
    //Throw 2
    dice.newThrow();
    
    cout<<"\nThrow 2: "<< dice.getLastThrow();
    
    //Throw 3
    dice.newThrow();
    
    cout<<"\nThrow 3: "<< dice.getLastThrow();
    
    cout<<"\n\nNumber of throws: "<< dice.getNumberOfThrows();
    
    cout<<"\nSum of throws: "<< dice.sumOfThrows();
    
    cout<<"\n\nReset the throw counter.";
    
    dice.resetCounter();
    
    cout<<"\nNumber of throws: "<< dice.getNumberOfThrows();
    
    //Throw 4
    dice.newThrow();
    
    cout<<"\n\nThrow 1: "<< dice.getLastThrow();
  
    //Throw 5
    dice.newThrow();
    
    cout<<"\nThrow 2: "<< dice.getLastThrow();
    
    //Throw 6
    dice.newThrow();
    
    cout<<"\nThrow 3: "<< dice.getLastThrow();
    
    //Throw 7
    dice.newThrow();
    
    cout<<"\nThrow 4: "<< dice.getLastThrow();
    
    cout<<"\n\nNumber of throws: "<< dice.getNumberOfThrows();
    
    cout<<"\nSum of throws: "<< dice.sumOfThrows();
   
}

