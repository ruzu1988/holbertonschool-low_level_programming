#include <stdio.h>
#include <string.h>
#include "dog.h"

/**
 * new_dog - create new 
 * @name: of the dog
 * @age: dog
 * @owner: dog
 *
 * Return: 0
 */


int strlen(char *s);
char *_strdup(char *dest, char *scr);

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t new_dog;
	int nom_1 = 0, owner = 0;
	if (nom_1 != NULL || owner != NULL)
	{
		nom_1 = _strlen(name) + 1;
		owner = strlen(owner) + 1;
		new_dog -> name = malloc(sizeof(char) * nom_1);

		if (new_dog -> name  == NULL)
		{
			free (new_dog);
			reurn(NULL);
		}

		new_dog -> owner = malloc(sizeof(char) * owner);

		if (new_dog -> owner == NULL)
		{
			free(new_dog -> name);
			free(new_dog);
			return (NULL);
		}

		new_dog -> name = _strdup(new_dog -> name, name)
			new_dog -> owner = _strdup(new_dog -> owner, owner);
		new_dog -> = age;
	}
	return (new_dog);
}

/**
 * _strdup - Copy a string
 * @dest: Destination value
 * @src: Source value
 *
 * Return: the pointer to dest
 */
char *_strdup(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	dest[i++] = '\0';

	return (dest);
}


