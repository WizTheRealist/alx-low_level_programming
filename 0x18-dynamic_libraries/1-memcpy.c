#include "main.h"

/**
 * _memcpy - empty
 * @dest: var
 * @src: var
 * @n: var
 * Return: char
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int index;

	for (index = 0; index < n; index++)
	{
		dest[index] = src[index];
	}

	return (dest);
}
