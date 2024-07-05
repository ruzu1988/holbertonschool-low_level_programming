#include <stdio.h>
#include <stdlib>

/**
 * malloc_chcked - function that allocates memory using malloc
 * @b: the size of memory to allocate
 *
 * Return: pointer to the allocated mameory, or terminate with status 98
 */

void *malloc_checked(unsigned int b);
{

	void *puntero;

	puntero = malloc(b);

	if (puntero == NULL)
	{
		exit(98);
	}
	return puntero;
}
