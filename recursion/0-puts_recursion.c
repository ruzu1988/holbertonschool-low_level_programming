#include "main.h"
#include <stdio.h>

/**
 * function that prints a string, followed by new line.
 *
 * Return: return 0
 */

void _puts_recursion(char *s)
{
	if (*s <= '\0')
		_putchar('\n');

	_putchar(*s);
	s++
		_puts_recursion(s);

	return (0);
}
