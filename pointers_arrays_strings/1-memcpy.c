#include <stdio.h>
#include "main.h"


/**
 * memcpy - function that copies
 * @n: bytes form memory
 * @src: pointer memory area
 * @ dest: pointer
 *
 * Return - dest
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

