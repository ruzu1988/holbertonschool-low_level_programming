#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - create an  array of char
 * @c: char to initialize the array
 * @size: the size of the array to create
 *
 * Return: array
 */

char *create_array(unsigned int size, char c)
{
	char *z;
	unsigned int i;

	if (size == 0)
		return (NULL);

	z = (char *)malloc(sizeof(char) * size);
	if (z == NULL)
		return (NULL);

	for (i = 0; z[i] == '\0'; i++)
		z[i] = c;

	return (z);
}
