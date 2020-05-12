/**
 * @file ChessPiece.h
 * @author algarcia
 *
 * @date 29 de marzo de 2017, 20:03
 */

#ifndef CHESSPIECE_H
#define CHESSPIECE_H

#include <string>
#include "InvalidMovement.h"
/**
 * @brief
 */
class ChessPiece
{
   private:
      std::string _name;
      char _colour;
      int _value;
      int _positionRow;
      int _positionCol;

   public:
      ChessPiece ( std::string nName="", char nColour='w', int nValue=0,
                   int nRow=0, int nCol=0 );
      ChessPiece ( const ChessPiece& orig );
      virtual ~ChessPiece ( );
      void setName ( std::string name );
      std::string getName ( ) const;
      void setPositionCol ( int positionCol );
      int getPositionCol ( ) const;
      void setPositionRow ( int positionRow );
      int getPositionRow ( ) const;
      void setValue ( int value );
      int getValue ( ) const;
      void setColour ( char colour );
      char getColour ( ) const;
      
      virtual void move(int incRow, int incCol);
};

#endif /* CHESSPIECE_H */
