#include <stdio.h>
#inclede <stdlib>
#include "dog.h"

/**
 * free - liberar el espacio
 * @name: free
 * @owner: free
 *
 * Return: 0
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
