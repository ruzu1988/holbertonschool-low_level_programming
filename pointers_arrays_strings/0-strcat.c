#include "main.h"
#include <stdio.h>

/*
 * _strcat - function that concatenates two string
 * @dest: pointer destination
 * @src: source string
 * Return: concatenated dest string
 */

char *_strcat(char *dest, char *src)
{
	int i;
	int j;

	for (i = 0; dest[i]; != '\0'; i++)
	{}

	if (dest[src] != '\0')
	{
		dest[src] = ' ';
	}

	for (j = 0; src[j]; != '\0'; j++)
	{
		dest[i] = src[j];
		scr++;
	}
	dest[src++] = '\0';
	return (dest);
}


