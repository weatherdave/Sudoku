#include<iostream>

class Board{
public:
	void createBoard();
	void solutionCheck();
	void displaySolution();
};

void Board::createBoard(){
	//possibly to be done using QT. If not, see below:
	/*
	sample 1st row of sudoku board (when completed). each letter will initially be a nubmer or a space. There are 9! different positions of the top-left square, and therefore 9!
	configurations of the square when all #s filled in.
		___________________
		|a b c|d e f|g h i|
		|d e f|g h i|a b c|
		|g_h_i|a_b_c|d_e_f|
		*/
}