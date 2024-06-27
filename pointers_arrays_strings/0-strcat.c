#include "main.h"

/**
 * _strcat - function that concatenates two string
 * @dest: pointer destination
 * @src: source string
 *
 * Return: concatenated dest string
 */

char *_strcat(char *dest, char *src)
{
	int i;
	int j;

	for (i = 0; dest[i]; != '\0'; i++)

		for (j = 0; src[j]; != '\0'; j++)
		{
			dest[i] = src[j];
			src++;
		}
	dest[i] = '\0';

	return (dest);
}


