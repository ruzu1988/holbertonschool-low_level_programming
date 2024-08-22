#include <stdio.h>
#include "main.h"

/**
 * _strspn - function that gets the length
 * @s: the string to be scanned
 * @accept: the string containing the characters to match
 *
 * Return: s
 */

unsigned int _strspn(char *s, char *accept)
{
	char *longi;
	unsigned int count = 0;

	while (*s)
	{
		for (longi = accept; *longi; longi++)
		{
			if (*s == *longi)
			{
				count++;
				break;
			}
		}

		if (*longi == '\0')
		{
			break;
		}

		s++;
	}

	return (count);
}
