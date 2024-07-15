#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_string - prints strings, followed by separator a new line
 * @n: numbers of strings
 * @separator: string printer
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list argumentos;
	unsigned int indpal;
	char *sepa;

	va_start(argumentos, n);

	for (indpal = 0; indpal < n; indpal++)
	{
		sepa = va_arg(argumentos, char *);
		if (sepa != NULL)
			printf("(nil)");
		else
			printf("%s", sepa);
		if (indpal < n - 1 || separator)
		printf("%s", separator);
	}
	va_end(argumentos);
	printf("\n");
}

