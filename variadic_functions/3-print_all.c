#include <stdlib.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_char - print char
 * @list: va_list passed to function
 */
void print_char(va_list list)
{
	printf("%c", va_arg(list, int));
}

/**
 * print_integer - print integer
 * @list: va_list passed to function
 */
void print_integer(va_list list)
{
	printf("%d", va_arg(list, int));
}

/**
 * print_float - print float
 * @list: va_list passed to function
 */
void print_float(va_list list)
{
	printf("%f", va_arg(list, double));
}

/**
 * print_string - print string
 * @list: va_list passed to function
 */
void print_string(va_list list)
{
	char *z = va_arg(list, char *);

	if (z == NULL)
		z = "(nil)";
	printf("%s", z);
}

/**
 * print_all - prints anything
 * @format: types of arguments passed to the function
 */
void print_all(const char * const format, ...)
{
	unsigned int i, j;
	va_list argumentos;
	char *sep;

	types_t type[] = {
		{'c', print_char},
		{'i', print_integer},
		{'f', print_float},
		{'s', print_string},
		{'\0', NULL}
	};

	i = 0;
	sep = "";
	va_start(argumentos, format);
	while (format != NULL && format[i] != '\0')
	{
		j = 0;
		while (type[j].z != '\0')
		{
			if (format[i] == type[j].z)
			{
				printf("%s", sep);
				type[j].f(argumentos);
				sep = ", ";
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(argumentos);
}
