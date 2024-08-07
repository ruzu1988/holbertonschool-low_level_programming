#include "main.h"
#include <stdio.h>

/**
 * @n - function fills the first n
 * @s - bytes of the memory area pointed to by s
 * @b - the constant byte b
 * Return: returns a pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;

	return (s);
}
