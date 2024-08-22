#include <stdio.h>
#include "main.h"

/**
 * _strpbrk - locates the first occurrence of any byte from accept
 *
 * @s: the string to be scanned
 * @accept: the string containing the character to match
 *
 * Return: s
 */

char *_strpbrk(char *s, char *accept)
{
        char *ptr;

        while (*s)
        {
                for (ptr = accept; *ptr; ptr++)
                {
                        if (*s == *ptr)
                        {
                                return (s);
                        }
				}

                s++;
        }

        return (NULL);
}