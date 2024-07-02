#include <stdio.h>

/**
 * factorial - return the factorial of a given number
 * @n: given number
 *
 * Return: factorial of given number
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	
	if (n == 0 || n == 1)
		return (1);
	
	return (factorial(n - 1)) * n;
}

