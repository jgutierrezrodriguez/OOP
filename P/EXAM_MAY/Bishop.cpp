/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Bishop.cpp
 * Author: jgr97
 * 
 * Created on 9 de mayo de 2019, 11:26
 */

#include "Bishop.h"

Bishop::Bishop(char squareColor) : _squareColor(squareColor), ChessPiece(){
}

Bishop::Bishop(char squareColor, char nColour, int nValue, int nRow, int nCol) :
_squareColor(squareColor), ChessPiece("Bishop",nColour,nValue,nRow,nCol){    
}

Bishop::Bishop(const Bishop& orig) : _squareColor(orig._squareColor),
                                     ChessPiece(orig.getName(),orig.getColour(),orig.getValue(),orig.getPositionRow(),orig.getPositionCol())
{
}

Bishop::~Bishop() {
}

char Bishop::getSquareColor(){
    return _squareColor;
}

void Bishop::setSquareColor(char squareColor){
    _squareColor=squareColor;
}

void Bishop::move(int incRow, int incCol){
    if(incRow != incCol)
        throw InvalidMovement("[Bishop : move] The increments are not equal.");
    
    this->ChessPiece::move(incRow,incCol);
}


