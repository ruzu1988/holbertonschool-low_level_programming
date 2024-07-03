#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - create array char
 * @z: pointer array
 * @size: memory to print
 * @c: char
 * Return: array
 */

char *create_array(unsigned int size, char c)
{
	int i;

	char *z;

	if (size == 0)
	{
		return (NULL);
	}

	z = malloc(sizeof(char) * size);
	if (z == NULL)
	{
		return (NULL);
	}

	for (i = 0; z[i] == '\0'; i++)
	{
		z[i] = c;
	}
	return (z);
}
