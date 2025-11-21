#ifndef BOARD_H
#define BOARD_H

static char board[3][3];

void init_board();
void display_board();
int is_valid_move(int row, int col);
void make_move(int row, int col, char player);
int check_winner();
int board_full();

#endif  // !DEBUG
