#include "main.h"

/**
 * reverse_array - reverses content of int array
 * @a: array to be reversed
 * @n: number of elements in array
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int limit;
	int rev;
	int *pointer = a;

	limit = n / 2;

	while (n > limit)
	{
		rev = a[n - 1];
		a[n - 1] = *pointer;
		*pointer = rev;
		n--;
		pointer++;
	}
}
