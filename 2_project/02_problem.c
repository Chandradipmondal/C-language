#include <stdio.h>

// Global 3x3 array for the game board
char board[3][3];

// Function to initialize the board with blank spaces
void resetBoard() {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            board[i][j] = ' ';
        }
    }
}

// Function to draw the board in the terminal
void printBoard() {
    printf("\n");
    printf(" %c | %c | %c \n", board[0][0], board[0][1], board[0][2]);
    printf("---|---|---\n");
    printf(" %c | %c | %c \n", board[1][0], board[1][1], board[1][2]);
    printf("---|---|---\n");
    printf(" %c | %c | %c \n", board[2][0], board[2][1], board[2][2]);
    printf("\n");
}

// Function to check if the board is full (tie game)
int checkFreeSpaces() {
    int freeSpaces = 9;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (board[i][j] != ' ') {
                freeSpaces--;
            }
        }
    }
    return freeSpaces;
}

// Function to handle player input
void playerMove(char player) {
    int x, y;
    do {
        printf("Player %c, enter row (1-3): ", player);
        scanf("%d", &x);
        x--; // Adjust for 0-indexed array
        
        printf("Player %c, enter column (1-3): ", player);
        scanf("%d", &y);
        y--; // Adjust for 0-indexed array

        // Validate the move
        if (x >= 0 && x < 3 && y >= 0 && y < 3 && board[x][y] == ' ') {
            board[x][y] = player;
            break;
        } else {
            printf("Invalid move! The spot is taken or out of bounds. Try again.\n\n");
        }
    } while (1);
}

// Function to check for a win condition
char checkWinner() {
    // Check rows
    for (int i = 0; i < 3; i++) {
        if (board[i][0] == board[i][1] && board[i][0] == board[i][2] && board[i][0] != ' ') {
            return board[i][0];
        }
    }
    // Check columns
    for (int i = 0; i < 3; i++) {
        if (board[0][i] == board[1][i] && board[0][i] == board[2][i] && board[0][i] != ' ') {
            return board[0][i];
        }
    }
    // Check diagonals
    if (board[0][0] == board[1][1] && board[0][0] == board[2][2] && board[0][0] != ' ') {
        return board[0][0];
    }
    if (board[0][2] == board[1][1] && board[0][2] == board[2][0] && board[0][2] != ' ') {
        return board[0][2];
    }
    
    // No winner yet
    return ' '; 
}

int main() {
    char winner = ' ';
    char currentPlayer = 'X';

    resetBoard();
    printf("========================\n");
    printf(" Welcome to Tic-Tac-Toe \n");
    printf("========================\n");

    // Main game loop
    while (winner == ' ' && checkFreeSpaces() != 0) {
        printBoard();
        playerMove(currentPlayer);
        winner = checkWinner();

        // Check if the game has ended after the move
        if (winner != ' ' || checkFreeSpaces() == 0) {
            break;
        }

        // Swap players
        if (currentPlayer == 'X') {
            currentPlayer = 'O';
        } else {
            currentPlayer = 'X';
        }
    }

    printBoard();

    // Announce the result
    if (winner != ' ') {
        printf("🏆 Player %c wins!\n", winner);
    } else {
        printf("🤝 It's a tie!\n");
    }

    return 0;
}