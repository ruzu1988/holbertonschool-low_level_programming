#include "main.h"
#include <stdio.h>

/**
 * _memset - fills memory with a constant byte
 * @n: the number of bytes to be filled
 * @s: pointer to the memory area to be filled
 * @b: the constant byte to fill the memory with
 *
 * Return: returns a pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int ballena;

	for (ballena = 0; ballena < n; ballena++)
	{
		s[ballena] = b;
	}
	return (s);
}
