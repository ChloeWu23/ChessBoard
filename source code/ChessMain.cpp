#include"ChessBoard.h"

#include<iostream>
//using namespace std;
using std::cout;

int main() {
  
	cout << "========================\n";
	cout << "Testing the Chess Engine\n";
	cout << "========================\n\n";

	ChessBoard cb;
	cout << '\n';
		
	cb.submitMove("D7", "D6");
	cout << '\n';
	
	cb.submitMove("D4", "H6");
	cout << '\n';

    cb.submitMove("D2", "D4");
	cout << '\n';
	
	
	cb.submitMove("F8", "B4");
	cout << '\n';
	
	cout << "=========================\n";
	cout << "Alekhine vs. Vasic (1931)\n";
	cout << "=========================\n\n";
	
	cb.resetBoard();
	cout << '\n';
	
	cb.submitMove("E2", "E4");
	cb.submitMove("E7", "E6");
	cout << '\n';
	
	cb.submitMove("D2", "D4");
	cb.submitMove("D7", "D5");
	cout << '\n';
      
	cb.submitMove("B1", "C3");
	cb.submitMove("F8", "B4");
	cout << '\n';

      
	cb.submitMove("F1", "D3");
	cb.submitMove("B4", "C3");
	cout << '\n';
	
	cb.submitMove("B2", "C3");
	cb.submitMove("H7", "H6");
	cout << '\n';
	
	cb.submitMove("C1", "A3");
	cb.submitMove("B8", "D7");
	cout << '\n';

	cb.submitMove("D1", "E2");
	cb.submitMove("D5", "E4");
	cout << '\n';

	cb.submitMove("D3", "E4");
	cb.submitMove("G8", "F6");
	cout << '\n';

	cb.submitMove("E4", "D3");
	cb.submitMove("B7", "B6");
	cout << '\n';

	cb.submitMove("E2", "E6");
	cb.submitMove("F7", "E6");
	cout << '\n';

	cb.submitMove("D3", "G6");
	cout << '\n';


			
	cout << "=========================\n";
	cout << "Caro-Kann vs. Petroff \n";
	cout << "=========================\n\n";
	
	cb.resetBoard();
	cout << '\n';
	
	cb.submitMove("E2", "E4");
	cb.submitMove("C7", "C6");
	cout << '\n';
	
	cb.submitMove("D2", "D4");
	cb.submitMove("D7", "D5");
	cout << '\n';
      
	cb.submitMove("B1", "C3");
	cb.submitMove("D5", "E4");
	cout << '\n';

      
	cb.submitMove("C3", "E4");
	cb.submitMove("B8", "D7");
	cout << '\n';
        
	
	cb.submitMove("D1", "E2");
	cb.submitMove("G8", "F6");
	cout << '\n';
        
	
	cb.submitMove("E4", "D6");
	cout << '\n';

	
		
	cout << "=========================\n";
	cout << "Legall's Mate \n";
	cout << "=========================\n\n";
	
	cb.resetBoard();
	cout << '\n';
	cb.submitMove("E2", "E4");
	cb.submitMove("E7", "E5");
	cout << '\n';
	
	cb.submitMove("G1", "F3");
	cb.submitMove("D7", "D6");
	cout << '\n';
      
	cb.submitMove("F1", "C4");
	cb.submitMove("B8", "C6");
	cout << '\n';

	cb.submitMove("B1", "C3");
	cb.submitMove("B8", "D7");
	cout << '\n';

	cb.submitMove("C8", "G4");
	cb.submitMove("F3", "E5");
	cout << '\n';

	cb.submitMove("G4", "D1");
	cb.submitMove("C4", "F7");
	cout << '\n';

	cb.submitMove("E8", "E7");
	cb.submitMove("C3", "D5");
	cout << '\n';

	// cb.print_board();
	
	cout << "=========================\n";
	cout << "Test StaleMate \n";
	cout << "=========================\n\n";
	
	cb.resetBoard();
	cout << '\n';
	cb.submitMove("E2", "E3");
	cb.submitMove("A7", "A5");
	cout << '\n';
	
	cb.submitMove("D1", "H5");
	cb.submitMove("A8", "A6");
	cout << '\n';
      
	cb.submitMove("H5", "A5");
	cb.submitMove("H7", "H5");
	cout << '\n';

	cb.submitMove("H2", "H4");
	cb.submitMove("A6", "H6");
	cout << '\n';

	cb.submitMove("A5", "C7");
	cb.submitMove("F7", "F6");
	cout << '\n';

	cb.submitMove("C7", "D7");
	cb.submitMove("E8", "F7");
    	cout << '\n';

	cb.submitMove("D7", "B7");
	cb.submitMove("D8", "D3");
	cout << '\n';

	cb.submitMove("B7", "B8");
	cb.submitMove("D3", "H7");
	cout << '\n';

	cb.submitMove("B8", "C8");
	cb.submitMove("F7", "F6");
	cout << '\n';

	cb.submitMove("F7", "G6");
	cb.submitMove("C8", "E6");
		      
	cout << '\n';
				      
	return 0;
}
