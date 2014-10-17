class Sudoku{
	char board[9][9];	//Unknowns are spaces, knowns are 1 - 9
public:
	void initialize();	//Accept input puzzle from the user(keyboard) and populate the board (Shan?)
	void solve();		//Fill in blanks with the computed solution (Jabez?)
	void display();		//Display the board to the screen in user-friendly format using the <iomanip> library (David?)
};