#include <stdio.h>
#include <stdlib.h>
#include "tictactoe.h"
/*
 * Generic TICTACTOE -- human vs. computer
 * Author: Quentin Copley 300106194
 * Date: 3 June 2015
 */

// Declared TicTacToe struct up top so all methods have acces to the data.
// Declared memory for this inside the init_game() function.
typedef struct TicTacToe {
    int size;
    int **board;
    int winner;
} TicTacToe;
//Declaration of methods outside main.
int check();
void init_game();
int player_move();
void computer_move();
void send_board();
char tokenstr(int);
void send_result();
int check_move(int, int);


TicTacToe game;  /* TicTacToe game. Variable name to reference this here. */

/**
 * TicTacToe generic game. 
 * Implementing generic type allows the user to specify the table sizze for the game.
 */
int main(void) 
{
    int done;
    int i;
    
    printf("This is the game of Tic Tac Toe.\n");
    printf("You will be playing against the computer.\n");
    printf("How big do you want the Tic Tac Toe board?\n");
    //initialises the addess of game to store value passed in by scan.
    scanf("%d", &game.size);
    printf("Generating new board size : %dx%d\n", game.size, game.size);
    
    init_game(); /* initialise the board */
    
    do {
        send_board();
        do {
            done = player_move();
        } while (!done); /* loop until valid move */
        if (check() != FALSE)
            break; /* was a winner or a draw */
        computer_move();
        if (check() != FALSE)
            break;
    } while (TRUE);
    
    send_result();
    send_board(); /* show final positions */
    
    for (i=0; i<game.size; i++){
        free(game.board[i]);
    }
    // free method used to free memory of game.
    free(game.board);
    
    return 0;
}

/* Initialize the matrix. */
void init_game() 
{
    int i, j;
    /* initialise the 2D array for the board, first allocate mem for colums, then allocate memory for each row */
    game.board = malloc(sizeof(int *)*game.size);
    int x = 0;
    for (; x < game.size; x++){
        game.board[x] = malloc(sizeof(int)*game.size);
    }
    
    /* now initialise it */
    for (i = 0; i < game.size; i++) {
        for (j = 0; j < game.size; j++) {
            game.board[i][j] = NONE;
        }
    }
}

/* Get a player's move. */
int player_move() 
{
    int x, y;
    int valid = FALSE;
    printf("Enter coordinates (row,column) for your move: ");
    scanf("%d%*c%d", &y, &x);
    if (check_move(x,y)){
    	x--;
    	y--;
    	if (game.board[x][y] != NONE) {
    		printf("Invalid move, try again.\n");
    		valid = FALSE;
    	} else {
    		game.board[x][y] = HUMAN;
    		valid = TRUE;
    	}
    }
    return valid;
}

/*Checks if move is valid or invalid*/
int check_move(int x, int y) 
{    
	if (x < 0 || x > game.size || y < 0 || y > game.size){
		printf("Invalid move, try again.\n");
		return FALSE;
	} else {
		return TRUE;
	}
}

/* Get a move from the computer. */
void computer_move() 
{
    int i, j, cx, cy;
    cx = cy = -1;
    for (i = 0; i < game.size; i++) {
        for (j = 0; j < game.size; j++)
            if (game.board[i][j] == NONE) {
                cx = i;
                cy = j;
                break;
            }
        if (cx != -1) {
            game.board[cx][cy] = COMPUTER;
            break;
        }
    }
}

/* Maps the board token ID to a character. */
char tokenstr(int t) 
{
    if (t == HUMAN)
        return 'X';
    else if (t == COMPUTER)
        return 'O';
    return '.';
}

/* Display the game board. */
void send_board() 
{
    int x,y;
    /* read and print the board one character at a time */
    for (y = 0; y < game.size; y++) {
        for (x = 0; x < game.size; x++) {
            printf(" %c ", tokenstr(game.board[x][y]));
        }
        printf("\n");
    }
    printf("\n");
}

/* See if there is a winner. */
/* return true (0) if so otherwise false */
/* method ammended here to check out side bounds, other than tictactoe which uses set size 3X3*/
int check() {
    //initialises int variables.
    //makes counts for finding X and Y to check rows and columns.

    int x, y;
    int count;
    int countX;
    int countO;
    
    /* checks the columns */
    for (x = 0; x < game.size; x++) {
        countX = 0;
        countO = 0;
        for (y = 0; y < game.size; y++){
            if (game.board[x][y] == -1) countX++;
            else if (game.board[x][y] == 1) countO++;
        }
        if (countX == game.size) {
        	game.winner = -1;
            return TRUE;
        } else if (countO == game.size) {
        	game.winner = 1;
            return TRUE;
        }
    }

     /* checks the rows */
    for (y = 0; y < game.size; y++) {
        countX = 0;
        countO = 0;
        for (x = 0; x < game.size; x++){
            if (game.board[x][y] == -1) countX++;
            else if (game.board[x][y] == 1) countO++;
        }
        if (countX == game.size) {
            game.winner = -1;
            return TRUE;
        } else if (countO == game.size) {
            game.winner = 1;
            return TRUE;
        }
    }
    
    
    /* test diagonals */
    countX = 0;
    countO = 0;
    for (x = 0; x < game.size; x++){
        if (game.board[x][x] == -1) countX++;
        else if (game.board[x][x] == 1) countO++;
    }
    if (countX == game.size) {
    	game.winner = -1;
        return TRUE;
    } else if (countO == game.size) {
    	game.winner = 1;
        return TRUE;
    }
    
    /* checks the reverse diagonal */
    countX = 0;
    countO = 0;
    for (x = 0; x < game.size; x++){
        if (game.board[game.size-1-x][x] == -1) countX++;
        else if (game.board[game.size-1-x][x] == 1) countO++;
    }
    if (countX == game.size) 
    {
    	game.winner = -1;
        return TRUE;
    } else if (countO == game.size) 
    {
    	game.winner = 1;
        return TRUE;
    }
    
    /* tests if out of space on the board */
    count = 0;
    for (x = 0; x < game.size; x++) 
    {
        for (y = 0; y < game.size; y++) 
        {
            if (game.board[x][y] == NONE)
                count++;
        }
    }
    if (count == 0) 
    {
    	game.winner = DRAW;
        return TRUE;
    }
    
    /* no-one and nor was there a draw */
    return FALSE;
}

/* Print the result */
void send_result() 
    {
    if (game.winner == HUMAN)
        printf("You won!\n");
    else if (game.winner == COMPUTER)
        printf("I won!!!!\n");
    else
        printf("Draw :(\n");
    }

