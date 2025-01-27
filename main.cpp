#include <iostream>
#include "arrays.h"
#include "TicTacToe.h"

const int ROWS_COLUMNS = 3;
const int BOARD_SIZE = ROWS_COLUMNS * ROWS_COLUMNS;
const char PLAYER1 = 'X';
const char PLAYER2 = 'O';

int main() {
    char board[BOARD_SIZE];
    bool winner1, winner2, replay;
    int position;

    std::cout << "Tic-Tac-Toe rules :" << std::endl;
    std::cout << "1- Players take turns placing their symbol (X or O) in an empty square." << std::endl;
    std::cout << "2- A player cannot place their symbol in an already occupied square." << std::endl;
    std::cout << "3- The game continues until:" << std::endl;
    std::cout << "\t* A player wins by forming a winning pattern (horizontal, vertical or diagonal)." << std::endl;
    std::cout << "\t* All squares are filled (resulting in a tie)." << std::endl;

    do {
        initialize(board, BOARD_SIZE);
        winner1 = false;
        winner2 = false;

        while (true) {
            printArrayIn2D(board, BOARD_SIZE, ROWS_COLUMNS, ROWS_COLUMNS);
            std::cout << "Player 1: ";
            std::cin >> position;
            while (!placeMark(board, BOARD_SIZE, PLAYER1, position - 1)) {
                std::cout << "Invalid move (Enter 0 to exit) : ";
                std::cin >> position;
                if (position == 0) {
                    return 0;
                }
            }

            winner1 = checkWin(board, ROWS_COLUMNS, PLAYER1);
            if (winner1 || fullArray(board, ROWS_COLUMNS * ROWS_COLUMNS)) {
                break;
            }

            printArrayIn2D(board, BOARD_SIZE, ROWS_COLUMNS, ROWS_COLUMNS);
            std::cout << "Player 2: ";
            std::cin >> position;
            while (!placeMark(board, BOARD_SIZE, PLAYER2, position - 1)) {
                std::cout << "Invalid move (Enter 0 to exit) : ";
                std::cin >> position;
                if (position == 0) {
                    return 0;
                }
            }

            winner2 = checkWin(board, ROWS_COLUMNS, PLAYER2);
            if (winner2 || fullArray(board, ROWS_COLUMNS * ROWS_COLUMNS)) {
                break;
            }
        }

        printArrayIn2D(board, BOARD_SIZE, ROWS_COLUMNS, ROWS_COLUMNS);
        if (winner1) {
            std::cout << "Player 1 WON !!" << std::endl;
        } else if (winner2)  {
            std::cout << "Player 2 WON !!" << std::endl;
        } else {
            std::cout << "It's a TIE !!" << std::endl;
        }

        std::cout << "Do you want to replay?\nEnter 1 for Yes or 0 for No: ";
        std::cin >> replay;
    } while (replay);

    return 0;
}
