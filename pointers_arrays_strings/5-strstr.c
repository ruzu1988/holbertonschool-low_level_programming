#include <string.h>
#include "main.h"

/**
 * _strstr - locates a substring within a string
 * @haystack: the string to be searched
 * @needle: the substring to look for
 *
 * Return: pointer to the beginnig of the located substring, or NULL
 */

char *_strstr(char *haystack, char *needle)
{
	if (*needle == '\0')
	{
		return (haystack);
	}

	while (*haystack)
	{
		char *start = haystack;
		char *sub = needle;

		while (*haystack && *sub && (*haystack == *sub))
		{
			haystack++;
			sub++;
		}

		if (*sub == '\0')
			return (start);

		haystack = start + 1;
	}

	return (NULL);
}
