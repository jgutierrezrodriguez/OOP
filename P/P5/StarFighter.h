/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   StarFighter.h
 * Author: jgr97
 *
 * Created on 11 de marzo de 2019, 20:15
 */

#ifndef STARFIGHTER_H
#define STARFIGHTER_H
#include <string>
#include <sstream>
using namespace std;

class StarFighter {
private:
    static int numStarFighters;
    int idSF;
    string brand;
    string model;
    int numSeats;
    
public:
    StarFighter();
    StarFighter(string _brand, string _model, int nSt);
    StarFighter(const StarFighter& orig);
    virtual ~StarFighter();
    
    int getIdSF();
    string getBrand();
    string getModel();
    int getNumSeats();
    int getNumStarFighters();
    
    StarFighter & setBrand(string new_);
    StarFighter & setModel(string new_);
    StarFighter & setNumSeats(int new_);
    
    string toCSV();
    StarFighter& operator = (const StarFighter& another);
    void fromCSV(string inputStr);

};

#endif /* STARFIGHTER_H */

