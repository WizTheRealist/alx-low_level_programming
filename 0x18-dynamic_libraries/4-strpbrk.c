#include "main.h"

/**
 * _strpbrk - empty
 * @s: var
 * @accept: var
 * Return: char
 */

char *_strpbrk(char *s, char *accept)
{
	int m, n;

	for (m = 0; *s != '\0'; m++)
	{
		for (n = 0; accept[n] != '\0'; n++)
		{
			if (*s == accept[n])
			{
				return (s);
			}
		}
		s++;
	}

	return (NULL);
}
