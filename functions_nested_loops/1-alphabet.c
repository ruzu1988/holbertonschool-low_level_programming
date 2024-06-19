#include "main.h"

/**
* print_alphabet - imprime abcdario
*
* Return: void
*/

void print_alphabet(void)
{
	char letra = 'a';

	while (letra <= 'z')
	{
		_putchar(letra);
		letra++;
	}
	_putchar('\n');
}

