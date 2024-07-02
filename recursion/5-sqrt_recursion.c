#include "main.h"

/**
 * num - number is squared and compares against base
 * @base: base number
 * @n: integer
 * Return: the square root or -1 n does not have a natural square root
 */

int num(int n, int base)
{
	if (n * n == base)
		return (n);
	if (n * n > base)
		return (-1);
	return (num(n + 1, base));
}

/**
 * _sqrt_recursion -  return the natural square root of a number
 * @n: base number
 * Return: the natural square root of number n
 */

int _sqrt_recursion(int n)
{
	return (num(1, n));
}
