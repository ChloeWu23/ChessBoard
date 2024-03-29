//this is abstract class
#ifndef PIECE_H
#define PIECE_H
#include<iostream>
using namespace std;

class ChessBoard;

class Piece{
  //friend class ChessBoard;

protected:
  string piece_colour;
  string piece_type;
  bool king_flag;
  //Piece_type p;
  // int piece_count;
public:
  Piece(string c); //constructor
  virtual bool valid_move(int src_row, int src_col, int des_row, int des_col,ChessBoard* cb) = 0;
  virtual ~Piece();
  virtual bool get_flag_king();
  //virtual void get_type() = 0;
  string print_colour(); //print the name of enum colour variable
  //virtual type piece_type() = 0;
 friend std::ostream& operator<< (std::ostream& out,Piece* p);
  bool is_white(); //White returns true;
  
};
#endif
