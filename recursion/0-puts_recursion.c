#include "main.h"
#include <stdio.h>

/**
 * _puts_recursion - function that prints a string, followed by new line.
 * @s: string
 * Return: return 0
 */

void _puts_recursion(char *s)
{
	if (*s <= '\0')
	{
		putchar('\n');
		return;
	}

	_putchar(*s);
	s++;
	_puts_recursion(s);
}
