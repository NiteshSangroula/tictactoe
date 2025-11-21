#ifndef GAME_H
#define GAME_H

// Initialize the game loop
void game_start();

// Print current player (X or O)
void print_current_player(char player);

// Handle a turn
void game_take_turn(char* currentPlayer);

// Switch O -> X & X -> O
char game_switch_player(char currentPlayer);

// Check if the game is over
/*
 * Returns:
 * 1 -> X wins
 * 2 -> O wins
 * 3 -> Draw
 * 0 -> Game continues
 */
int game_check_state();

#endif
