#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <stdio.h>
#include <sys/stat.h>
#include <unistd.h>
#include "tictactoe.h"

/* Methods for implementation. Not all working. */
int init_game(int serverfd);
int check_server(int clientfd);
int player_move(int clientfd, int serverfd);
void display_board(int clientfd, int size);
void print_winner(int clientfd);

/*
 * t3client
 * Author: Quentin Copley 300106194
 * Date: 3 June 2015
 * implement a very simple client that sends and receives
 * all other logic, just send and receive strings
 * extension is to add extra clients
 */
int main(void) {

    //initialise pipes 
	int clientfd, serverfd, size;
	char *clientpipe = "clientpipe";
	char *serverpipe = "serverpipe";
	int done;

	/* create the FIFO (named pipe) and open for reading */
	mkfifo(clientpipe, 0666);
	mkfifo(serverpipe, 0666);
	serverfd = open(serverpipe, O_WRONLY);
	clientfd = open(clientpipe, O_RDONLY);

	printf("This is the game of Tic Tac Toe.\n");
	printf("You will be playing against the computer.\n");

	/* Get the board size form the user and send info to server */
	size = init_game(serverfd);

	do {
		display_board(clientfd, size);
		do {
			done = player_move(clientfd, serverfd);
        } while (!done);
        if (check_server(clientfd) != FALSE)
            break; /* was a winner or a draw */
        if (check_server(clientfd) != FALSE)
            break; /* was a winner or a draw */
    } while (TRUE);

	/* Display final board. */
	display_board(clientfd, size);
	/* Display winner. */
	print_winner(clientfd);

	/* Close and Unlink. */
	close(clientfd);
	unlink(clientpipe);

	return 0;
}

/* Reads the board form server and print it to screen*/
void display_board(int clientfd, int size) {
	int x, y;
	char value;

	for (y = 0; y < size; y++) {
		for (x = 0; x < size; x++) {
			read(clientfd, &value, sizeof(value));
			printf(" %c ", value);
		}
		printf("\n");
	}
	printf("\n");
}

int init_game(int serverfd) {
	int size;
	printf("How big is your board?\n");
	scanf("%d", &size);
	write(serverfd, &size, sizeof(size));
  return size;
}

/* Send player's move to the server and check if was valid. */
int player_move(int clientfd, int serverfd) {
    int x, y;
    int valid;

    printf("Enter coordinates (row,column) for your move: ");
    scanf("%d%*c%d", &y, &x);

	/* send the details X,Y to server */
    write(serverfd, &x, sizeof(x));
    write(serverfd, &y, sizeof(y));

	/* check from server if is a valid move */
    read(clientfd, &valid, sizeof(valid));
    if (valid == FALSE) {
    	printf("Invalid move, try again.\n");
    }
    return valid;
}

/* Check if game has ended or computer is waiting for the next move. */
int check_server(int clientfd) {
	int check;
	read(clientfd, &check, sizeof(check));
	return check;
}

/* Receive final results from the server. */
void print_winner(int clientfd) {
	int check;
	read(clientfd, &check, sizeof(check));
	if (check == HUMAN)
		printf("You won!\n");
	else if (check == COMPUTER)
		printf("I won!!!!\n");
	else if (check == DRAW)
		printf("Draw\n");
}
