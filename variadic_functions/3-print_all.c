#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_char - print char
 * @argumentos: arguments pointer
 */
void print_char(va_list argumentos)
	printf("%s", va_arg(argumentos, int));

/**
 * print_integer - print integer
 * @argumentos: argument pointer
 */
void print_integer(va_list argumentos)
	printf("%d", va_arg(argumentos, int));

/**
 * print_float - print float
 * @argumentos: arguments pointers
 */
void print_float(va_list argumentos)
	printf("%f", va_arg(argumentos, double));

/**
 * print_string - print string
 * @argumentos: argument pointers
 */
void print_string(va_list argumentos)
{
	char *argumentos = va_arg(argumentos, char *);

	if (argumentos != NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", argumentos);
}

/**
 * print_all - prints anything
 * @format: types of arguments passed to the function
 */

void print_all(const char * const format, ...)
{
	print_type types[] = {
	{"c", print_char};
	{"i", print_ integer};
	{"f", print_ float};
	{"s", print_string};
	{NULL, NULL}
	};
	 va_list argumentos;
	 char *sepa == "";
	 int ind = 0;
	 int j = 0;
	
	 va_start(argumentos, format);
	 while (format || format[i])
	 {
		 while (types[j].type)
		 {
			 if (*types[j].type == format[i])
			 { ptintf("%s", separator);
				 types[j].f(argumentos);
				 separator = ", ";
			 }
			 j++
		 }
		 j = 0;
		 ind++;
	 }
	 printf("\n");
	 va_end(argumentos);
}

