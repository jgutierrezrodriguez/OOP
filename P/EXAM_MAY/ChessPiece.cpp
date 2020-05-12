/**
 * @file ChessPiece.cpp
 * @author algarcia
 *
 * @date 29 de marzo de 2017
 */

#include "ChessPiece.h"
#include <stdexcept>

ChessPiece::ChessPiece ( std::string nName, char nColour, int nValue, int nRow,
                         int nCol ):
                       _name(nName), _colour(nColour), _value(nValue),
                       _positionRow(nRow), _positionCol(nCol)
{ }

ChessPiece::ChessPiece ( const ChessPiece& orig ):
                       _name(orig._name), _colour(orig._colour),
                       _value(orig._value), _positionRow(orig._positionRow),
                       _positionCol(orig._positionCol)
{ }

ChessPiece::~ChessPiece ( )
{ }

void ChessPiece::setName ( std::string name )
{
   this->_name = name;
}

std::string ChessPiece::getName ( ) const
{
   return _name;
}

void ChessPiece::setPositionCol ( int positionCol )
{
   this->_positionCol = positionCol;
}

int ChessPiece::getPositionCol ( ) const
{
   return _positionCol;
}

void ChessPiece::setPositionRow ( int positionRow )
{
   this->_positionRow = positionRow;
}

int ChessPiece::getPositionRow ( ) const
{
   return _positionRow;
}

void ChessPiece::setValue ( int value )
{
   this->_value = value;
}

int ChessPiece::getValue ( ) const
{
   return _value;
}

void ChessPiece::setColour ( char colour )
{
   this->_colour = colour;
}

char ChessPiece::getColour ( ) const
{
   return _colour;
}

void ChessPiece::move(int incRow, int incCol){
    int sumRow=_positionRow+incRow;
    int sumCol=_positionCol+incCol;
    
    if(sumRow>8||sumRow<1)
        throw InvalidMovement("[ChessPiece : move] Row out of range");
    
    if(sumCol>8||sumCol<1)
        throw InvalidMovement("[ChessPiece : move] Colum out of range");
    
    _positionRow=sumRow;
    _positionCol=sumCol;
        
}

