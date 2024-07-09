#include <stdio.h>
#include "dog.h"

/**
 * init_dog - initialize a variable
 * @d: struct dog
 * @name: of dog
 * @age: age the dog
 * @owner: dog
 *
 * Return: 0
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;
	d->name = name;
	d->age = age;
	d->owner = owner;
}
