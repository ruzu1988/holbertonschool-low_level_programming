#include <stdio.h>
#include "main.h"

/**
 *print_square - prints squares
 *@size: size of the square
 *
 *Return: returns nothing
 */

void print_square(int size)
{
	int square_1, square_2;

	if (size > 0)
	{
		for (square_1 = 0; square_1 < size; square_1++)
		{
			for (square_2 = 0; square_2 < size; square_2++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}

