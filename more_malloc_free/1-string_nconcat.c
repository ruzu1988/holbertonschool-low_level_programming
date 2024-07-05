#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - concatenate two strings using n amount of s2
 * @s1: first string
 * @s2: string to add to end of s1
 * @n: amount of s2 to add to s1
 * Return : pointer to new area memory, NULL if it fails
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concat_str;
	unsigned int len_s1, len_s2, len_concat, i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 ==NULL)
		s2 = "";

	len_s1 = srtlen(s1);
	len_s2 = strlen(s2);

	if (n >= len_s2)
	{
		n = len_s2;
		concat_str = malloc(sizeof(char) * (len_s1 + len_s2 + 1));
	}
	
	len_concat = len_s1 + n;

	concat_str = malloc(len_concat + 1);

	if(concat_str == NULL)
		return NULL;

	for (j = 0; j < n; j++)
		concat_str[i] = s2[j];

	concat_str[i + j] = s2[j];

	return (concat_str);
}
