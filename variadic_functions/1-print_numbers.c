#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - prints number followed by a separator and a new line
 * @n: numero de argumentos
 * @separator: string to be printed
 *
 * Description: This function takes a variable number of arguments, prints eachnumber,
 *				and separates them with the provided separator string. If the separator
 *				is NULL, it is not printed. a new line is printed at the of the function.
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg (args, int));
		if (separator != NULL || i < n - 1)
		{
		printf("%s", separator);
		}
	}
	va_end(args);

	printf("\n");
}
