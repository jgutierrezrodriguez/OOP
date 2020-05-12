/**
 * @file main.cpp
 * @author algarcia
 *
 * @date 29 de marzo de 2017
 */

#include <cstdlib>
#include <stdexcept>
#include <typeinfo>
#include <iostream>
#include "Person.h"
#include "ChessGame.h"
#include "ChessPiece.h"
#include "Bishop.h"
#include "InvalidMovement.h"

using namespace std;


void showPieces(ChessGame &game){
    cout<<"\n***************GAME***************"<<endl;
    int l=game.getNPieces();
    for (int i =0; i<l; i++){
        ChessPiece* piece = game.getPiece(i);
        cout<<"\n"<<i<<".- "<<piece->getName()<<
                "\n\t-Color: "<<piece->getColour()<<
                "\n\t-Value: "<<piece->getValue()<<
                "\n\t-Position Row: "<<piece->getPositionRow()<<
                "\n\t-Position Col: "<<piece->getPositionCol();
        
        if(dynamic_cast<Bishop*>(game.getPiece(i))){
            Bishop* bisha = dynamic_cast<Bishop*>(game.getPiece(i));
            
            cout<<"\n\t-Square Color: "<<bisha->getSquareColor(); 
        }
    }
}






/**
 *
 */
int main ( int argc, char** argv )
{
   // Declare a vector with 4 Persons and give values to the first 2 ones
   Person people[4];

   people[0].setName ( "Peter" );
   people[0].setGender ( 'm' );
   people[1].setName ( "Mary" );
   people[1].setGender ( 'f' );

   // Declare a ChessGame object named "firstGame", with the date that you want.
   // Assign to it 2 players from the vector above
   ChessGame firstGame ( 23, 10, 2017 );
   firstGame.setPlayer ( 1, &people[0] );
   firstGame.setPlayer ( 2, &people[1] );

   // Use the addPiece method to add 3 pieces to the game with different names,
   // colours, values and positions
   
   Bishop bish ('b','w',5, 2, 2 );
   
   firstGame.newPiece ( "Pawn", 'w', 1, 2, 1 );
   
   firstGame.newPiece ( "Rook", 'w', 4, 1, 1 );
   firstGame.newPiece ( bish);
   
   try{
       firstGame.move(2,2,2);
   }
   catch (std::exception &e) {
        //Capturamos cualquier excepción que se haya podido escapar
        //En tiempo de desarrollo
        std::cerr << "Finalización del programa por excepción sin capturar: "
                << e.what() << std::endl;
    }

   // Try to retrieve the 7th piece from the chess game, catch the exception
   // and show on screen an error message
   

   // Create a copy of firstGame
   ChessGame secondGame ( firstGame );

   // Show on screen how many pieces of each colour are included in the game.
   std::cout << "In firstGame there are " << firstGame.numPieces ( 'w' )
             << " white pieces and " << firstGame.numPieces ( 'b' )
             << " black pieces" << std::endl;

   
   showPieces(firstGame);
   // Free the resources, if necessary, before the end of the program

   return 0;
}
