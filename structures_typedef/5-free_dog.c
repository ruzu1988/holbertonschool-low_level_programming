#include <stdio.h>
#inclede <stdlib>
#include "dog.h"

/**
 * free_dog - free spaces
 * @name: free dog
 * @owner: free
 *
 * Return: 0
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
		return;
	
	if (d -> name)
		free(d->name);

	if (d -> owner)
		free(d->owner);

		free(d);
}
