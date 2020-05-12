/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Piece.h
 * Author: jgr97
 *
 * Created on 19 de marzo de 2019, 14:01
 */

#ifndef PIECE_H
#define PIECE_H

#include <string>
using namespace std;

class Piece {
private:
    string name="";
    float weight=0;
    string description="";
    
public:
    Piece();
    Piece(string name, float weight, string description);
    Piece(const Piece& orig);
    virtual ~Piece();

    string getName();
    float getWeight();
    string getDescription();
    
    Piece & setName(string _new);
    Piece & setWeight(float _new);
    Piece & setDescription(string _new);
};

#endif /* PIECE_H */

