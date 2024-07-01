#include "main.h"

/**
 * int_strlen_recursion - function that returns the length os a string.
 * @s - string
 * Return:
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return(0);
	}

	return (1 + _strlen_recursion(s + 1));
}
