#include "main.h"

/**
 * _strncat - concatenates two strings, it will use at most n  bytes from src
 * @src: this is input src
 * @dest: target string
 * @n: this is the number bytes fro src
 *
 * Return: resulting dest string
 */
char *_strncat(char *dest, char *src, int n)
{
	int size;
	int limit;

	for (limit = 0; dest[size] != '\0'; size++)

		for (limit = 0; limit < n && src[count] != '\0'; limit++)
		{
			dest[size] = src[limit];
			size++;
		}
	if (count < n)
	{
		dest[size] = '\0';
	}
	return (dest);
}
