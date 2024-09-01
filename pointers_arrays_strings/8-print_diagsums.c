#include <stdio.h>
#include "main.h"

/**
 * print_diagsums - prints the sum of the two diagonals of a square
 *
 * @a: pointer to the first element
 * @size: size the square matrix
 */

void print_diagsums(int *a, int size)
{
	int idx;
	int sum1 = 0;
	int sum2 = 0;

	for (idx = 0; idx < size; idx++)
	{
		sum1 += a[idx * size + idx];
		sum2 += a[idx * size + (size - 1 - idx)];
	}

	printf("%d, %d\n", sum1, sum2);
}

