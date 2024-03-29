#include<iostream>
#include<cmath>
#include"knight.h"
#include"ChessBoard.h"
using namespace std;

/*Function definition in Class Knight */

//constructor
Knight::Knight(string c) : Piece(c){
  piece_type = "Knight";
}


/**
 * Function to get King_flag
 * @param return false;
 **/
bool Knight::get_flag_king(){
  return false;
}


/**
 *Function to see whether it is a valid move for piece knight from source to destination
 *@param src_row: integer of row numbers of the source Chess Piece
 *@param des_row: integer of row numbers of the destiantion Chess Piece.
 *@param src_col: integer of column numbers of the source CHess Piece
 *@param des_col: integer of column numbers of the destiantion Chess Piece
 *@param return: return true it is a valid move
**/

bool Knight:: valid_move(int src_row, int src_col, int des_row, int des_col,ChessBoard* cb) {
  bool valid = false;
  bool chess_colour = cb->get_board(src_row,src_col) -> is_white();

  //check destination is the closest
  //L-shape
  if(abs(src_row-des_row) == 1 && abs(src_col-des_col) == 2) valid = true;
  if(abs(src_row-des_row) == 2 && abs(src_col-des_col) == 1) valid = true;

  if (valid){
      return cb->is_valid_move(src_row, src_col, des_row, des_col, chess_colour);
  }
  return false;
}

Knight::~Knight(){

}


