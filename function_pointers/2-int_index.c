#include <stdio.h>
#include <stdlib>
#include "function_pointers.h"


/*
 * int_index - returns the index of the first element for wich
 * @cmp: is a pointer to the function to be used to compare values
 * @size: is the number
 * @array: elemnts in the array
 * Return: -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int indpal;

	if (array == NULL || cmp == NULL || size <= 0)
		return (-1);

	for (indpal = 0; indpal < size; indpal++)
	{
		if (cmp(array[indpal]))
			return (indpal);
	}
	return (-1);
}
