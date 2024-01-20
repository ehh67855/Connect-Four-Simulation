# Connect Four Game
## Description
Welcome to the Connect Four game repository, a classic two-player connection board game implemented in C++. In this game, players alternate turns dropping colored discs into a seven-column, six-row vertically suspended grid. The goal is to be the first to form a horizontal, vertical, or diagonal line of four discs.

## Features
- **Interactive Human Player:** Players can input their names and select columns to drop their discs.
- **Simple AI Player:** Includes an AI opponent for single-player gameplay.
- **Board State Checking:** The game checks for wins or draws after each move.
- **Console-Based Interface:** The game runs in the console, offering a straightforward user experience.

## Key Components
- **Board Class:** This class manages the game board. It initializes a 6x7 grid, represented as a vector of vectors, with each cell initially set to '_'. It provides functions to print the board, initialize it, and check for wins (horizontally, vertically, and diagonally) and ties.
- **HumanPlayer Class:** This class represents a human player in the game. It prompts the player to enter their name and updates the game board based on the player's input.
- **Player Class:** This is a base class for players (human or computer). It stores the player's name and ID (either 'X' or 'O').
- **SimpleComputerPlayer Class:** This class represents a simple AI player. It automatically selects columns to place its disc, prioritizing columns that aren't full.
  
### How to Compile and Run
Clone this repository to your local machine and navigate to the directory containing the cloned files.
```bash
git clone https://github.com/ehh67855/Connect-Four-Simulation.git
cd Connect-Four-Simulation
```
Use the provided Makefile to compile the project:
```bash
make compile
```
Run the game using:
```bash
make run
```
```bash
./proj3.out
```
To clean up the compiled files, run:
```bash
make clean
```
Follow the on-screen instructions to play the game.

## Game Rules
- The game starts by asking for player names. Player One uses 'X', and Player Two (or the computer) uses 'O'.
- Players alternate turns to choose a column to drop their disc.
- The game ends when a player forms a line of four discs horizontally, vertically, or diagonally, or when the board fills up, resulting in a tie.

## Requirements
- A C++ compiler
- Basic knowledge of using terminal or command line interfaces
