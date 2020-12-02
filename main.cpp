#include <iostream>
#include "Game.h"
#include "IO.h"

using namespace std;

int main() {
    system("chcp 65001");

    const int SIZE = 3;

    char board[SIZE][SIZE] = { {' ', ' ', ' '},
                               {' ', ' ', ' '},
                               {' ', ' ', ' '} };

    bool winX, winO, draw;
    int row, col;

    PrintBoard(board, SIZE);

    do {
        cout << "Ход Крестика" << endl;
        do { //TODO Перенести в функцию
            row = InputCoordinate();
            col = InputCoordinate();
        } while(board[row][col] != ' ');
        board[row][col] = 'X';
        PrintBoard(board, SIZE);
        winX = WinX(board);
        if (winX) break;

        cout << "Ход Нолика" << endl;
        do { //TODO Перенести в функцию
            row = InputCoordinate();
            col = InputCoordinate();
        } while(board[row][col] != ' ');
        board[row][col] = 'O';
        PrintBoard(board, SIZE);
        winO = WinO(board);
        if (winO) break;

        draw = Draw(board, SIZE);
    } while (!draw);

    if (winX) {
        cout << "Победа Крестика" << endl;
    } else if (winO) {
        cout << "Победа Нолика" << endl;
    } else {
        cout << "Ничья!" << endl;
    }
}



