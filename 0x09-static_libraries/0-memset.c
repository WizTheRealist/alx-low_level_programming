#include "main.h"

/**
 * _memset - empty
 * @s: var
 * @b: var
 * @n:
 * Return: char
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int index;

	for (index = 0; index < n; index++)
	{
		s[index] = b;
	}

	return (s);
}
