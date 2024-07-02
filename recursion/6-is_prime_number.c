#include "main.h"

/**
 * is_prime_number - checks if a number is a prime number
 * @n: number to check
 *
 * Return: 1 if n is a prime, 0 otherwise
 */

int is_prime_number(int n)
{
	return (helper_prime(n, 2, n / 2));
}

/**
 * helper_prime - check if a number is prime
 * @n: the number to check
 * @i: for current divisor being tested
 * @limit: stop
 * Return: 1 if n is prime, 0 otherwise
 */

int helper_prime(int n, int i, int limit)

	if ((n % i == 0 && i <= limit) || n < 0 || n == 1)
	return (0);
	if (i > limit)
	return (1);
	return (helper_prime(n, i + 1, limit));
