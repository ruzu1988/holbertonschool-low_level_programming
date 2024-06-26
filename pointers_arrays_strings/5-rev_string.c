#include "main.h"

/**
 *rev_string - Reverse a string
 *@s: String
 *Return: void
 */
void rev_string(char *s)
{

	int size = 0;
	int limit;
	char x;
	char *pointer = s;

	while (s[size] != '\0')
		size++;

	limit = size / 2;

	while (size != limit)
	{
		x = s[size - 1];
		s[size - 1] = *pointer;
		*pointer = x;
		size--;
		pointer++;
	}
}
