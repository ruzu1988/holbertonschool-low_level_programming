#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - prints strings, followed by separator and a new line
 * @n: numbers of strings
 * @separator: string printer
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list argumentos;
	unsigned int indpal;
	char *x;

	va_start(argumentos, n);

	for (indpal = 0; indpal < n; indpal++)
	{
		x = va_arg(argumentos, char *);
		if (x != NULL)
			printf("%s", x);
		else
			printf("(nil)");

		if (separator != NULL && indpal < n - 1)
			printf("%s", separator);
	}

	va_end(argumentos);
	printf("\n");
}

