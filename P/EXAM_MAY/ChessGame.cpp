/**
 * @file ChessGame.cpp
 * @author algarcia
 *
 * @date 29 de marzo de 2017
 */

#include <stdexcept>
#include "ChessGame.h"
#include <iostream>

ChessGame::ChessGame ( int nDay, int nMonth, int nYear ):
                     _day(nDay), _month(nMonth), _year(nYear), _nPieces(0)
{
   int i;

   _players[0] = _players[1] = 0;

   for ( i = 0; i < _MAX_PIECES_; i++ )
   {  _pieces[i] = 0;
   }
}

ChessGame::ChessGame ( const ChessGame& orig ):
                     _day(orig._day), _month(orig._month), _year(orig._year)
{
   int i;

   _players[0] = orig._players[0];
   _players[1] = orig._players[1];

   for ( i = 0; i < orig._nPieces; i++ )
   {  _pieces[i] = new ChessPiece ( *orig._pieces[i] );
   }

   _nPieces = orig._nPieces;
}

ChessGame::~ChessGame ( )
{
   int i;

   _players[0] = _players[1] = 0;

   for ( i = 0; i < _nPieces; i++ )
   {
      delete _pieces[i];
      _pieces[i] = 0;
   }
}

void ChessGame::setYear ( int year )
{
   this->_year = year;
}

int ChessGame::getYear ( ) const
{
   return _year;
}

void ChessGame::setMonth ( int month )
{
   if ( ( month < 1 ) || ( month > 12 ) )
   {  throw std::invalid_argument ( "ChessGame::setMonth: the value is not correct" );
   }

   this->_month = month;
}

int ChessGame::getMonth ( ) const
{
   return _month;
}

void ChessGame::setDay ( int day )
{
   this->_day = day;
}

int ChessGame::getDay ( ) const
{
   return _day;
}

int ChessGame::getNPieces ( ) const
{
   return _nPieces;
}

/**
 * Method to change one of the players of the chess game
 * @param plNumber id of the player to be changed. Its value has to be 1 or 2
 * @param newPlayer pointer to the new player
 * @return A pointer to the previous player, or 0 if there were no previous player
 * @throws std::invalid_argument if the value of plNumber is not 1 or 2
 * @post The pointer of the corresponding player now keeps the object address
 *       that has been passed as parameter
 */
Person* ChessGame::setPlayer ( int plNumber, Person* newPlayer )
{
   if ( ( plNumber != 1 ) && ( plNumber != 2 ) )
   {  throw std::invalid_argument ( "ChessGame::setPlayer: the player id is not correct" );
   }

   Person* aux = _players[plNumber-1];

   _players[plNumber-1] = newPlayer;
   return ( aux );
}

void ChessGame::newPiece ( std::string pName, char pColor, int pValue, int pRow,
                           int pCol )
{
   if ( _nPieces < _MAX_PIECES_ )
   {
      _pieces[_nPieces] = new ChessPiece ( pName, pColor, pValue, pRow, pCol );
      _nPieces++;
   }
}

void ChessGame::newPiece(Bishop& bishop){
    if ( _nPieces < _MAX_PIECES_ )
   {
      _pieces[_nPieces] = new Bishop ( bishop );
      _nPieces++;
   }
}

ChessPiece* ChessGame::getPiece ( int pos )
{
   if ( ( pos < 0 ) || ( pos >= _nPieces ) )
   {  throw std::range_error ( "ChessGame::getPiece: invalid position" );
   }

   return ( _pieces[pos] );
}

int ChessGame::numPieces ( char c )
{
   int i;
   int counter = 0;

   for ( i = 0; i < _nPieces; i++ )
   {
      if ( _pieces[i]->getColour () == c )
      {  counter++;
      }
   }

   return ( counter );
}

void ChessGame::move(int piece, int incRow, int incCOl){
    try{
            _pieces[piece]->move(incRow,incCOl); 
          }
    catch(std::exception &e){
            std::cout<<"\nFinalizacion inesperada del programa. Error: "<<e.what();
    }
}