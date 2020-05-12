/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Droid.h
 * Author: jgr97
 *
 * Created on 19 de marzo de 2019, 12:27
 */

#ifndef DROID_H
#define DROID_H
#include <string>
#include <sstream>
using namespace std;

class Droid { 
private:
    int idD=0;
    string brand;
    string model;
    static int numDroids;
    
public:
    Droid();
    Droid(string _brand,string _model);
    Droid(const Droid& orig);
    virtual ~Droid();
    
    int getIdD();
    string getBrand();
    string getModel();
    int getNumDroids();
    
    Droid & setBrand(string new_);
    Droid &  setModel(string new_);
    
    string toCSV();
    
    Droid& operator = ( const Droid& another );
    void fromCSV(string &inputStr);
};

#endif /* DROID_H */

