#include "main.h"

/**
 * _strchr - empty
 * @s: var
 * @c: var
 * Return: char
 */

char *_strchr(char *s, char c)
{
	int n;

		while (1)
		{
			n = *s++;
			if (n == c)
			{
				return (s - 1);
			}
			if (n == 0)
			{
				return (NULL);
			}
		}
}
