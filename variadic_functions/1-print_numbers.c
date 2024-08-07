#include "variadic_functions.h"
#include <stdio.h>
#include <stddef.h>
/**
 * print_numbers - prints number followed by a separator and a new line
 * @n: numero de argumentos
 * @separator: string to be printed
 *
 * Return: Void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;

	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(args, int));

		if (separator != NULL && i < n - 1)
		{
		printf("%s", separator);
		}
	}
	printf("\n");
	va_end(args);
}
