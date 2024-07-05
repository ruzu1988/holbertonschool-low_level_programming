#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _calloc - function allocates memory for an array
 * @nmemb: numero de lementos en el array
 * @size: tama~o de cada elemento en bytes
 * Return: pointer to the allocated mmemory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *calloc;
	unsigned int total_size;

	if (nmemb == 0 || size == 0)
		return (NULL);

	total_size = nmemb * size;

	calloc = malloc(total_size);

	if (calloc == NULL)
		return (NULL);

	memset(calloc, 0, total_size);

	return (calloc);
}
