#ifndef TICTACTOE_IO_H
#define TICTACTOE_IO_H

#include <iostream>
#include "Game.h"

using namespace std;

void PrintBoard(char board[][3], int size)
{
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            cout << board[i][j] << " | ";
        }
        cout << endl << "---------" << endl;
    }
}

int InputCoordinate()
{
    int coordinate;
    do {
        cout << "Введите координату (от 0 до 2) - ";
        cin >> coordinate;
    } while (!Check(coordinate));
    return coordinate;
}

#endif //TICTACTOE_IO_H



















