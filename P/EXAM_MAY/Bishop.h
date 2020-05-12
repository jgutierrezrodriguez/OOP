/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Bishop.h
 * Author: jgr97
 *
 * Created on 9 de mayo de 2019, 11:26
 */

#ifndef BISHOP_H
#define BISHOP_H
#include "ChessPiece.h"
#include "InvalidMovement.h"

class Bishop : public ChessPiece{
private:
    char _squareColor;
public:
    Bishop(char squareColor);
    Bishop(char squareColor, char nColour, int nValue, int nRow, int nCol );
    Bishop(const Bishop& orig);
    virtual ~Bishop();

    char getSquareColor();
    void setSquareColor(char squareColor);
    virtual void move(int incRow, int incCol) override;

};

#endif /* BISHOP_H */

