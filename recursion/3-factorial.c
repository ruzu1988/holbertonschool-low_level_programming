#include <stdio.h>

/**
 * factorial - factorial of a given number
 * @n: the number to calculate the factorial of
 *
 * Return: factorial of n or 1 if n is lower than 1
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	
	if (n == 0 || n == 1)
		return (1);
	
	return (factorial(n - 1)) * n;
}

