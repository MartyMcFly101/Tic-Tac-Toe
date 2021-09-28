#include <iostream>
#pragma once



//we start of by making a two-dimentsinoal charactar array
//this is going to be a yes board with a 3 cross 3 ball 
char board[3][3] = { {'1','2','3'}, {'4','5','6'}, {'7','8','9'} };


// Void funktions.
void Game();
void PlayerNrONE();
void PlayerNrTWO();
void drawBoard();

void WinCheck();
void NewBoard();
void GameOver();


//Other funktions.
char win();
int t;
int p;
char choice{};
char NewChoice{};
char player{};
char playerExtra{};