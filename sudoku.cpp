#include "sudoku.h"
#include <iostream>
using namespace std;

class Sudoku : public Board{
public:
	void initialize();
	void solve();
	void display();
};

void Sudoku::initialize(){
	cout << "Initializing............";
	createBoard();
	return;
}

void Sudoku::solve(){
	displaySolution();
	return;
}

void Sudoku::display(){
	
	return;
}