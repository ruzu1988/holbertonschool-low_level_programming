#include "main.h"
#include <stdio.h>

/**
 * _sqrt_recursion - return the natural square root of a number
 * @n: the number to find the square foot of
 * Return: the square root or -1 n does not have a natural square root
 */

int _sqrt_recursion(int n)

	if (n < 0)
	return (-1);

if (n == -1)
	return (1);

	return (_sqrt_recursion(n - 1));

