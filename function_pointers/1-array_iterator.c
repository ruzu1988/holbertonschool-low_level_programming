#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - executes a function on each element of an array
 * @size: size of the array
 * @array: array of  integer
 * @action: a pointer to the function you need to use
 * Return: nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t ite;

	for  (ite = 0; ite < size ; ite++)
		action(array[ite]);
}
