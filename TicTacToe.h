#ifndef TicTacToe_H
#define TicTacToe_H

/**
 * @brief Prompts the player to make a move and places the mark on the board.
 *
 * This function prompts the player to enter a position to place their mark on the board.
 * If the position is invalid, it will continue to prompt the player until a valid move is made
 * or the player enters 0 to exit.
 *
 * @param array The array representing the Tic-Tac-Toe board.
 * @param n The size of the board.
 * @param Mark The character representing the player's mark (e.g., 'X' or 'O').
 * @param turn The current player's turn (e.g., 1 or 2).
 * @return true if a valid move is made, false if the player chooses to exit.
 */
bool makeMove(char array[], int n, char Mark, int turn);

/**
 * @brief Checks if a player has won the Tic-Tac-Toe game.
 * 
 * This function checks if the given player, represented by the character 'c',
 * has won the game by having a complete row, column, or diagonal filled with
 * their character in the Tic-Tac-Toe board.
 * 
 * @param array array 1D array representing the Tic-Tac-Toe board.
 * @param n The size of the Tic-Tac-Toe board (n x n).
 * @param c The character representing the player (e.g., 'X' or 'O').
 * @return true If the player has won the game.
 * @return false If the player has not won the game.
 */
bool checkWin(char array[], int n, char c);

#endif
