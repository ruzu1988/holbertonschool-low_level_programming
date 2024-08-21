#include "main.h"
#include <stdio.h>

/**
 * _strchr - locates a character in a string
 *
 * @c: character
 * @s: string
 *
 * Return: NULL
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s != c)
			s++;
		else
			return (s);
	}
	if (c == '\0')
	{
		return (s);
	}
	return (NULL);
}
