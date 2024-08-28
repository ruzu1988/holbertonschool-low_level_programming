#include "main.h"

/**
 * puts2 - prints every other character of a string
 * @str: given string to be printed
 * Return: void
 */
void puts2(char *str)
{
	int idx, len;

	len = 0;

	while (str[len] != '\0')
		len++;
	for (idx = 0; idx < len; idx += 2)
		_putchar(str[idx]);

	_putchar('\n');
}
