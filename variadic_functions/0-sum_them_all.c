#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - suma todos los argumentos pasados a la funcion
 * @n: numero de argumentos
 *
 * Return: 0
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list argumentos;
	unsigned int ind;
	int sum = 0;

	va_start(argumentos, n);

	if (n == 0)
		return (0);

	for (ind = 0; ind < n; ind++)
		sum += va_arg(argumentos, int);

	va_end(argumentos);

	return (sum);
}
