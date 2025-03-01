# Tic-Tac-Toe (Terminal-Based Game)

A simple yet fun implementation of the classic Tic-Tac-Toe game that runs in the terminal. This project is perfect for learning basic game logic, user input handling, and terminal-based interfaces.

---

## Features

- **Two-player mode:** Play against a friend, alternating turns as Player X and Player O.
- **Simple UI:** Display the board directly in the terminal.
- **Win, draw, or ongoing detection:** The game detects when a player wins or if the game ends in a draw.
- **Input validation:** Ensures players only choose valid moves.
- **Replay option:** Start a new game after finishing.

---

## How to Play

- Players take turns placing their mark (X or O) on the grid.
- The first player to align three marks horizontally, vertically, or diagonally wins the game.
- If the grid is full and no player has aligned three marks, the game ends in a draw.

---

## Getting Started

### Prerequisites

To play the game, you need:
- A Windows terminal.
- The appropriate runtime environment:
  - G++ (C++ compiler).
  - Make
  - Git

### Installation

1. Clone this repository:
   ```bash
   git clone https://github.com/abdallahyac06/Tic-Tac-Toe
   cd Tic-Tac-Toe
2. Build the project:
   ```bash
   make
3. Run the main program:
   ```bash
   ./main
4. When you're done, you can remove all the generated files:
   ```bash
   make clean

---

## Example Gameplay

```bash
Tic-Tac-Toe rules :
1- Players take turns placing their symbol (X or O) in an empty square.
2- A player cannot place their symbol in an already occupied square.
3- The game continues until:
        * A player wins by forming a winning pattern (horizontal, vertical or diagonal).
        * All squares are filled (resulting in a tie).

-------------
| 1 | 2 | 3 |
-------------
| 4 | 5 | 6 |
-------------
| 7 | 8 | 9 |
-------------
Player 1: 1

-------------
| X | 2 | 3 |
-------------
| 4 | 5 | 6 |
-------------
| 7 | 8 | 9 |
-------------
Player 2: 2

-------------
| X | O | 3 |
-------------
| 4 | 5 | 6 |
-------------
| 7 | 8 | 9 |
-------------
Player 1: 7

-------------
| X | O | 3 |
-------------
| 4 | 5 | 6 |
-------------
| X | 8 | 9 |
-------------
Player 2: 4

-------------
| X | O | 3 |
-------------
| O | 5 | 6 |
-------------
| X | 8 | 9 |
-------------
Player 1: 9

-------------
| X | O | 3 |
-------------
| O | 5 | 6 |
-------------
| X | 8 | X |
-------------
Player 2: 5

-------------
| X | O | 3 |
-------------
| O | O | 6 |
-------------
| X | 8 | X |
-------------
Player 1: 8

-------------
| X | O | 3 |
-------------
| O | O | 6 |
-------------
| X | X | X |
-------------
Player 1 WON !!
Do you want to replay?
Enter 1 for Yes or 0 for No: 0
