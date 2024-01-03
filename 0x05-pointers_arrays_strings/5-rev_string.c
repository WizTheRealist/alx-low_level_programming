#include "main.h"

/**
 * rev_string - prints a string then reverses it
 * @s: char
 * Return: nothing
 */

void rev_string(char *s)
{
	int length = 0;

	int i = 0;

	while (*(s + length) != '\0')
	{
		length++;
	}
	for (i = 0; i < length; i++)
	{
		_putchar(*(s + i));
	}
	_putchar('\n');

	for (i = length - i; i >= 0; i--)
	{
		_putchar(*(s + i));
	}
	_putchar('\n');
}
