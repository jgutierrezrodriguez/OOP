/* 
 * File:   Droid.h
 * Author: jgr97
 *
 * Created on 11 de marzo de 2019, 20:07
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
    void fromCSV(string inputStr);
};

#endif /* DROID_H */

