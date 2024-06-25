#include "main.h"
#include <stdio.h>

/**
 * swap - values of two integers.
 * @a: pointer first value
 * @b: pointer second value
 * Return: return 0
 */

void swap_int(int *a, int *b);
{

	int c;

	c = *a;
	*a = *b;
	*b = c;

}
