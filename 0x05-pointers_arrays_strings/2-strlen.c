#include "main.h"

/**
 * _strlen - returns string length
 * @s: char
 * Return: strlen
 */

int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}
