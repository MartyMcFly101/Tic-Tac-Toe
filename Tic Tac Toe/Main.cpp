#include "holder.h"


//The Main Funktion
int main() {
	//Manu to Select Game or Exit Game.
	system("color a");

	std::cout << "                                         WELCOME TO 'TicTacToe' o(^.^)o \n";
	std::cout << "                                         --------------------------------\n";
	std::cout << "                                         | 1. New game                  |\n";
	std::cout << "                                         --------------------------------\n";
	std::cout << "                                         | 2. Exit                      |\n";
	std::cout << "                                         --------------------------------\n";

	std::cin >> choice;

	switch (choice) {

	case '1': 
		Game();
		break;

	case '2':
		std::cout << "                                             Not even gonna try??\n";
		std::cout << "                                                 Okey....\n";
		std::cout << "                                                Baii then o_O\n";
		std::exit(0);
		break;

	default:
		break;
	}

		

	return 0;
}

//The Game
void Game() {
	 t = 0;
		system("color a");
		drawBoard();

		for (int r{}; r < 9; r++)
		{
			t++;
			if (r % 2 == 0) {
				PlayerNrONE();
				drawBoard();
				WinCheck();
				
			}
			else {
				PlayerNrTWO();
				drawBoard();
				WinCheck();
				
			}
		}
	
		GameOver();

}



//Let's draw the board in a void
void drawBoard() {

	system("cls");
	std::cout << "                                               TicTacToe \n";
	std::cout << "                                              ------------- \n"; 
	std::cout << "                                              | " << board[0][0] << " | " << board[0][1] << " | " << board[0][2] << " | " << std::endl;
	std::cout << "                                              ------------- \n";
	std::cout << "                                              | " << board[1][0] << " | " << board[1][1] << " | " << board[1][2] << " | " << std::endl;
	std::cout << "                                              ------------- \n";
	std::cout << "                                              | " << board[2][0] << " | " << board[2][1] << " | " << board[2][2] << " | " << std::endl;
	std::cout << "                                              -------------\n";
}

// Lets the player place a mark and checks if there allready marked.
void PlayerNrONE() {

	player = 'X';

	int a;
	
	std::cout << "                                        PlayerNrONE select the number you want to mark: \n";
	std::cout << "                                        "; std::cin >> a;
	std::cout << "                                        Selected Number :  " << a << std::endl;



	if (a == 1)

	{
		if (board[0][0] == '1')
			board[0][0] = player;
		
		
	}
	else if (a == 2) {
		if (board[0][1] == '2')
			board[0][1] = player;
		else
			PlayerNrONE();
	}
	else if (a == 3) {
		if (board[0][2] == '3')
			board[0][2] = player;
		else
			PlayerNrONE();
	}

	else if (a == 4) {
		if (board[1][0] == '4')
			board[1][0] = player;
		else
			PlayerNrONE();
	}
	else if (a == 5) {
		if (board[1][1] == '5')
			board[1][1] = player;
		else
			PlayerNrONE();
	}
	else if (a == 6) {
		if (board[1][2] == '6')
			board[1][2] = player;
		else
			PlayerNrONE();
	}

	else if (a == 7) {
		if (board[2][0] == '7')
			board[2][0] = player;
		else
			PlayerNrONE();
	}
	else if (a == 8) {
		if (board[2][1] == '8')
			board[2][1] = player;
		else
			PlayerNrONE();
	}
	else {
		if (board[2][2] == '9')
			board[2][2] = player;
		else
			PlayerNrONE();
	}


}
void PlayerNrTWO() {

	playerExtra = 'O';

	int b;
	std::cout << "                                        PlayerNrTWO select the number you want to mark: \n";
	std::cout << "                                        "; std::cin >> b;
	std::cout << "                                        Selected Number :  " << b << std::endl;


	if (b == 1)

	{
		if (board[0][0] == '1')
			board[0][0] = playerExtra;
		else
			PlayerNrTWO();
	}
	else if (b == 2) {
		if (board[0][1] == '2')
			board[0][1] = playerExtra;
		else
			PlayerNrTWO();

	}
	else if (b == 3) {
		if (board[0][2] == '3')
			board[0][2] = playerExtra;
		else
			PlayerNrTWO();
	}

	else if (b == 4) {
		if (board[1][0] == '4')
			board[1][0] = playerExtra;
		else
			PlayerNrTWO();
	}
	else if (b == 5) {
		if (board[1][1] == '5')
			board[1][1] = playerExtra;
		else
			PlayerNrTWO();
	}
	else if (b == 6) {
		if (board[1][2] == '6')
			board[1][2] = playerExtra;
		else
			PlayerNrTWO();
	}

	else if (b == 7) {
		if (board[2][0] == '7')
			board[2][0] = playerExtra;
		else
			PlayerNrTWO();
	}
	else if (b == 8) {
		if (board[2][1] == '8')
			board[2][1] = playerExtra;
		else
			PlayerNrTWO();
	}
	else {
		if (board[2][2] == '9')
			board[2][2] = playerExtra;
		else
			PlayerNrTWO();
	}


}


//Checks if anyone has won.
char win() {

	// For X to win.

	if (board[0][0] == 'X' && board[0][1] == 'X' && board[0][2] == 'X') {
		return 'X';
	}
	if (board[1][0] == 'X' && board[1][1] == 'X' && board[1][2] == 'X') {
		return 'X';
	}
	if (board[2][0] == 'X' && board[2][1] == 'X' && board[2][2] == 'X') {
		return 'X';
	}


	if (board[0][0] == 'X' && board[1][0] == 'X' && board[2][0] == 'X') {
		return 'X';
	}
	if (board[0][1] == 'X' && board[1][1] == 'X' && board[2][1] == 'X') {
		return 'X';
	}
	if (board[0][2] == 'X' && board[1][2] == 'X' && board[2][2] == 'X') {
		return 'X';
	}


	if (board[0][0] == 'X' && board[1][1] == 'X' && board[2][2] == 'X') {
		return 'X';
	}
	if (board[2][0] == 'X' && board[1][1] == 'X' && board[0][2] == 'X') {
		return 'X';
	}

	// For O to win.

	if (board[0][0] == 'O' && board[0][1] == 'O' && board[0][2] == 'O') {
		return 'O';
	}
	if (board[1][0] == 'O' && board[1][1] == 'O' && board[1][2] == 'O') {
		return 'O';
	}
	if (board[2][0] == 'O' && board[2][1] == 'O' && board[2][2] == 'O') {
		return 'O';
	}


	if (board[0][0] == 'O' && board[1][0] == 'O' && board[2][0] == 'O') {
		return 'O';
	}
	if (board[0][1] == 'O' && board[1][1] == 'O' && board[2][1] == 'O') {
		return 'O';
	}
	if (board[0][2] == 'O' && board[1][2] == 'O' && board[2][2] == 'O') {
		return 'O';
	}


	if (board[0][0] == 'O' && board[1][1] == 'O' && board[2][2] == 'O') {
		return 'O';
	}
	if (board[2][0] == 'O' && board[1][1] == 'O' && board[0][2] == 'O') {
		return 'O';
	}
	else {
		return '/';
	}
}
void WinCheck() {

	 
		if (win() == 'X') {
			std::cout << " \n";
			std::cout << "                                           Yey X Wins o(^.^)o!! \n";
			std::cout << " \n";
			return GameOver();
		}
		else if (win() == 'O') {
			std::cout << " \n";
			std::cout << "                                           Yey O Wins o(^.^)o!! \n";
			std::cout << " \n";
			return GameOver();
		}
		else if (t == 9) {
			std::cout << " \n";
			std::cout << "                                           No One Wins (;-;)\n";
			std::cout << " \n";
	       return GameOver();
		}
	}

//Cleans The Board
void NewBoard() {

	board[0][0] = '1';
	board[0][1] = '2';
	board[0][2] = '3';
	board[1][0] = '4';
	board[1][1] = '5';
	board[1][2] = '6';
	board[2][0] = '7';
	board[2][1] = '8';
	board[2][2] = '9';
}

//New Manu
void GameOver() {

	std::cout << " \n";
	std::cout << "                                          ---------MANU---------\n";
	std::cout << "                                          |  1. New Game       |\n";
	std::cout << "                                          ----------------------\n";
	std::cout << "                                          |  2. Exit           |\n";
	std::cout << "                                          ----------------------\n";

	std::cin >> NewChoice;

	switch(NewChoice)
	{
	case '1' :
		NewBoard();
		Game();
		break;
	case '2' :
		std::cout << "                                     Boiiiiiiiiiiiiiiiiiiiiiiiiiiiiii\n";
		std::exit(0);
		break;

	default :
		break;

	}

}