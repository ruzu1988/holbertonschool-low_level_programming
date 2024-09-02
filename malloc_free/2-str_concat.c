#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - concatenates two strings and returns a pointer
 * @s1: first string
 * @s2: second string
 *
 * Return: pointer to the concatenated string, or NULL if allocation fails
 */

char *str_concat(char *s1, char *s2)
{

	char *concat;
	int len1 = 0, len2 = 0;

	if (s1 != NULL)
		len1 = strlen(s1);
	if (s2 != NULL)
		len2 = strlen(s2);

	concat = malloc((len1 + len2 + 1) * sizeof(char));
	if (concat == NULL)
		return (NULL);

	if (s1 != NULL)
		strcpy(concat, s1);
	else
		concat[0] = '\0';

	if (s2 != NULL)
		strcat(concat, s2);
	
	return (concat);
}
