/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Club.h
 * Author: jgr97
 *
 * Created on 18 de febrero de 2019, 23:48
 */

#ifndef CLUB_H
#define CLUB_H

#include <string>
#include <sstream> 
#include "NotValidParameter.h"
using namespace std;

class Club {
    private:
        string name;
        string address;
    public:
        Club();
        Club(string name, string address);
        Club(const Club& orig);
        virtual ~Club();
        
        string getName();
        string getAddress();
        
        void setName(string new_name);
        void setAddress(string new_address);
        
        string toCSV();

};

#endif /* CLUB_H */

