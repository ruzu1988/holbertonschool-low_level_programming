#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i = 0;
	char c = 'a';

	while (i< 26)
	{

    for (ch = 'a'; ch <= 'z'; ch++)
    {
        putchar(ch);
    }
	 for (ch = 'A'; ch <= 'Z'; ch++)
    {
        putchar(ch);
    }

    putchar('\n');

    return 0;
}

