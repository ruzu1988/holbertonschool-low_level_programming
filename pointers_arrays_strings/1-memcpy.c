#include "main.h"


/**
 * _memcpy - copies memory area from source to destination
 * @n: number of bytes form memory
 * @src: pointer to the source memory area
 * @dest: pointer to the destination memory area
 *
 * Return: dest
 */

char *_memcpy(char *dest, const char *src, unsigned int n)
{
	unsigned int copias;

	for (copias = 0; copias < n; copias++)
	{
		dest[copias] = src[copias];
	}
	return (dest);
}

