#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_char - print char
 * @argumentos: arguments pointer
 */
void print_char(va_list argumentos)
{
	printf("%c", va_arg(argumentos, int));
}
/**
 * print_integer - print integer
 * @argumentos: argument pointer
 */
void print_integer(va_list argumentos)
{
	printf("%d", va_arg(argumentos, int));
}
/**
 * print_float - print float
 * @argumentos: arguments pointers
 */
void print_float(va_list argumentos)
{
	printf("%f", va_arg(argumentos, double));
}
/**
 * print_string - print string
 * @args: argument pointers
 */
void print_string(va_list args)
{
	char *z = va_arg(args, char *);

	if (z == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", z);
}

/**
 * print_all - prints anything
 * @format: types of arguments passed to the function
 */

void print_all(const char * const format, ...)
{
	types_t types[] = {
		{'c', print_char},
		{'i', print_integer},
		{'f', print_float},
		{'s', print_string},
		{'\0', NULL}
	};
	va_list args;
	char *sep1 = " ", *sep2 = ", ";
	int i = 0, j = 0;

	va_start(args, format);
	while (format != NULL && format[i] != '\0')
	{
		j = 0;
		while (types[j].z != '\0')
		{
			if (format[i] == types[j].z)
			{
				printf("%s", sep1);
				types[j].f(args);
				sep1 = sep2;
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(args);
}
