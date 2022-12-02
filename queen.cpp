#include<iostream>
#include"queen.h"

using namespace std;

/*Function definition in Class Queen */
Queen::Queen(string c) : Piece(c){
  piece_type = "Queen"; 
}

bool Queen::valid_move(int src_row, int src_col, int des_row, int des_col,ChessBoard* cb){
  bool flag = false;
  bool chess_colour = cb->get_board(src_row,src_col) ->get_colour();
  
  if (!cb->get_board(src_row,src_col)) return false;
  if (cb -> get_board(des_row,des_col) !=NULL && !cb ->is_opponent(src_row, src_col, des_row, des_col)) return false;
  
  //move toward rank
  if( cb -> is_same_row(src_row,des_row) && cb -> is_row_clear(src_row, src_col, des_row, des_col))  flag = true;
  
  //move towards file
  if( cb -> is_same_col(src_col,des_col) && cb -> is_col_clear(src_row, src_col, des_row, des_col))  flag = true;
  
  //move towards diagonal
  if (cb -> is_same_diagonal (src_row, src_col, des_row, des_col) && cb-> is_diag_clear (src_row, src_col, des_row, des_col)) flag =  true;
  
  if (flag == true){
    if (!cb -> confirm_move(src_row, src_col, des_row, des_col,chess_colour))
      flag = false;
  }
  
  return flag;
}
/*
void Queen::get_type(){
  cout << "Queen";
}
 
type Queen::piece_type(){
  return queen;
}
*/