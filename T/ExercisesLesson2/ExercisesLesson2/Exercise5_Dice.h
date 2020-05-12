/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Exercise5_Dice.h
 * Author: jgr97
 *
 * Created on 25 de febrero de 2019, 9:10
 */

#ifndef EXERCISE5_DICE_H
#define EXERCISE5_DICE_H

#include <stdlib.h>
#include <time.h>
#include <iostream>
#include <random>
using namespace std;

class Exercise5_Dice {
    private:
        int throwCounter = 0;
        const int MAX_N_THROWS=1000;
        int *throwDice = new int [MAX_N_THROWS];
    public:
        Exercise5_Dice();
        Exercise5_Dice(const Exercise5_Dice& orig);
        virtual ~Exercise5_Dice();
        
        
        
        int getLastThrow();
        int getNumberOfThrows();
        void newThrow();
        int sumOfThrows();
        void resetCounter();

};

#endif /* EXERCISE5_DICE_H */

