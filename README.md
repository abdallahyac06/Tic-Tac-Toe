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
- A terminal (Linux or WSL).
- The appropriate runtime environment:
  - G++ (C++ compiler).
  - Make
  - Git

### Installation

1. Clone this repository:
   ```bash
   git clone https://github.com/abdallahyac06/Tic-Tac-Toe
   cd tic-tac-toe-terminal
2. Build the project:
   ```bash
   make
3. Run the main program:
   ```bash
   .\main.out
4. When you're done, you can remove all the generated files:
   ```bash
   make clean
