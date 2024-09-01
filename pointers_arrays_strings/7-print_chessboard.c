#include "main.h"
#include <stdio.h>

/**
 * print_chessboard - function that prints the chessboard.
 *
 *@a: 2D array representing the chessboard.
 */

void print_chessboard(char (*a)[8])
{
	int blancos, negros;

	for (blancos = 0; blancos < 8; blancos++)
	{
		for (negros = 0; negros < 8; negros++)
		{
			printf("%c ", a[blancos][negros]);
		}
		printf("\n");
	}
}
