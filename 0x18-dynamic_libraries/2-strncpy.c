#include "main.h"

/**
 * _strncpy - empty
 * @dest: var
 * @src: var
 * @n: var
 * Return: char
 */

char *_strncpy(char *dest, char *src, int n)
{
	int index;

	index = 0;

	while (src[index] != '\0' && index < n)
	{
		dest[index] = src[index];
		index++;
	}

	while (index < n)
	{
		dest[index] = '\0';
		index++;
	}

	return (dest);
}
