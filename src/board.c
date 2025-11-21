#include "board.h"

#include <stdio.h>

void init_board() {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            board[i][j] = ' ';
        }
    }
}

void display_board() {
    printf("\n");
    for (int i = 0; i < 3; i++) {
        printf(" %c | %c | %c \n", board[i][0], board[i][1], board[i][2]);
        if (i < 2) printf("---|---|---\n");
    }
}

int is_valid_move(int row, int col) {
    if (board[row][col] == ' ') {
        return 1;
    } else {
        return 0;
    }
}

void make_move(int row, int col, char player) {
    if (is_valid_move(row, col) == 1) {
        board[row][col] = player;
    }
}

int check_winner() {
    // check row
    for (int i = 0; i < 3; i++) {
        if (board[i][0] != ' ' && board[i][0] == board[i][1] &&
            board[i][1] == board[i][2]) {
            return board[i][0];
        }
    }

    // check column
    for (int i = 0; i < 3; i++) {
        if (board[0][i] != ' ' && board[0][i] == board[1][i] &&
            board[1][i] == board[2][i]) {
            return board[0][i];
        }
    }

    // check main diagonal
    if (board[0][0] != ' ' && board[0][0] == board[1][1] &&
        board[1][1] == board[2][2]) {
        return board[0][0];
    }

    // check anti diagonal
    if (board[2][0] != ' ' && board[2][0] == board[1][1] &&
        board[1][1] == board[0][2]) {
        return board[2][0];
    }

    return ' ';
}

int board_full() {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (board[i][j] == ' ') {
                return 0;
            }
        }
    }
    return 1;  // board is full
}
