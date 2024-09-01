#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * is_number - checks if a string is a valid positive number
 * @s: string to check
 * Return: 1 if the string is a valid positive number, 0 otherwise
 */

int is_number(char *s)
{
	int idx = 0;

	while (s[idx] != '\0')
	{
		if (!isdigit(s[idx]))
			return (0);
		idx++;
	}
	return (1);
}

/**
 * main - adds positive numbers
 * @argc: numbers of arguments
 * @argv: array
 * Return: 0, 1 if any argument is not a positve number
 *
 */

int main(int argc, char *argv[])
{
	int sum = 0;
	int idx;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (idx = 1; idx < argc; idx++)
	{
		if (!is_number(argv[idx]))
		{
			printf("Error\n");
			return (1);
		}

		sum += atoi(argv[idx]);
	}

	printf("%d\n", sum);
	return (0);
}


