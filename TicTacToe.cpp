#include "TicTacToe.h"
#include "arrays.h"
#include "iostream"

bool makeMove(char array[], int n, char Mark, int turn) {
    int position;
    std::cout << "Player " << turn << " : ";
    std::cin >> position;
    while (!placeMark(array, n, Mark, position - 1)) {
        std::cout << "Invalid move (Enter 0 to exit) : ";
        std::cin >> position;
        if (position == 0) {
            return false;
        }
    }
    return true;
}

bool checkWin(char array[], int n, char c) {
    bool win;

    //check rows;
    for (int row = 0; row < n; row++) {
        win = true;
        for (int col = 0; col < n; col++) {
            if (array[row * n + col] != c) {
                win = false;
                break;
            }
        }
        if (win) {
            return true;
        }
    }

    // check columns 
    for (int col = 0; col < n; col++) {
        win = true;
        for (int row = 0; row < n; row++) {
            if (array[row * n + col] != c) {
                win = false;
                break;
            }
        }
        if (win) {
            return true;
        }
    }

    //check diagonals
    win = true;
    for (int i = 0; i < n; i++) {
        if (array[i * n + i] != c) {
            win = false;
            break;
        }
    }
    if (win) {
        return true;
    }

    win = true;
    for (int i = 0; i < n; i++) {
        if (array[(i + 1) * (n - 1)] != c) {
            win = false;
            break;
        }
    }
    return win;
}
