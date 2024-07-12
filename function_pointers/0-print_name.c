#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - print name
 * @name: name of the person
 * @f: fuction
 *
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	(*f)(name);
}
