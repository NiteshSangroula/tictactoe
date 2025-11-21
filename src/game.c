#include "game.h"

#include <stdio.h>

#include "board.h"

void game_start() {
    char current = 'X';
    int state = 0;

    init_board();

    while (1) {
        display_board();
        print_current_player(current);

        game_take_turn(&current);

        state = game_check_state();
        if (state != 0) break;

        current = game_switch_player(current);
    }

    display_board();

    if (state == 1) {
        printf("X wins!\n");
    } else if (state == 2) {
        printf("O wins!\n");
    } else if (state == 3) {
        printf("It's a draw\n");
    }
}

void print_current_player(char player) { printf("%c's turn\n", player); }

char game_switch_player(char currentPlayer) {
    if (currentPlayer == 'X') {
        return 'O';
    } else {
        return 'X';
    }
}

void game_take_turn(char* currentPlayer) {
    int row;
    int col;

    while (1) {
        printf("Enter row and column (0-2 0-2): ");
        scanf("%d %d", &row, &col);

        if (row < 0 || row > 2 || col < 0 || col > 2) {
            printf("Invalid position! Try again.\n");
            continue;
        }

        if (!is_valid_move(row, col)) {
            printf("Cell already taken! Try again.\n");
            continue;
        }

        make_move(row, col, *currentPlayer);
        break;
    }
}

int game_check_state() {
    char winner = check_winner();

    if (winner == 'X') return 1;
    if (winner == 'O') return 2;
    if (board_full()) return 3;

    return 0;  // continue
}
