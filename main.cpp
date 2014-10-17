#include <iostream>
#include "sudoku.h"
#include <string>
using namespace std;

bool choice(){
	string x;
	cout << "Enter y for yes, anything else for no: ";
	cin >> x;
	return x == "y" ? true : false;
}

int main(){
	cout << "Welcome to the Sudoku Solver!\n\n" << endl;
	Sudoku puzzle;
	char cont = 'y';
	do{
		puzzle.initialize();
		cout << "\n\nIs this your puzzle?\n\n";
		puzzle.display();
		cout << endl << endl;
		if (!(choice()))
			continue;
		puzzle.solve();
		cout << "\n\nSolved Puzzle: \n\n";
		puzzle.display();
		cout << "\n\n\nEnter y to enter another puzzle, anything else to exit: ";
		cin >> cont;
	} while (cont == 'y');
}