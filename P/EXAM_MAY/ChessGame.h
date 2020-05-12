/**
 * @file ChessGame.h
 * @author algarcia
 *
 * @date 29 de marzo de 2017, 20:18
 */

#ifndef CHESSGAME_H
#define CHESSGAME_H

#include "ChessPiece.h"
#include "Person.h"
#include "Bishop.h"

/**
 * @brief
 */
class ChessGame
{
   public:
      static const int _MAX_PIECES_ = 32;

   private:
      Person* _players[2];
      ChessPiece* _pieces[_MAX_PIECES_];
      int _nPieces;
      int _day;
      int _month;
      int _year;

   public:
      ChessGame ( int nDay=0, int nMonth=0, int nYear=0 );
      ChessGame ( const ChessGame& orig );
      virtual ~ChessGame ( );
      void setYear ( int year );
      int getYear ( ) const;
      void setMonth ( int month );
      int getMonth ( ) const;
      void setDay ( int day );
      int getDay ( ) const;
      int getNPieces ( ) const;
      Person* setPlayer ( int plNumber, Person* newPlayer );
      void newPiece ( std::string pName, char pColor, int pValue, int pRow, int pCol );
      void newPiece(Bishop& bishop);
      ChessPiece* getPiece ( int pos );
      int numPieces ( char c );
      
      void move(int piece, int incRow, int incCOl);
      
};

#endif /* CHESSGAME_H */
