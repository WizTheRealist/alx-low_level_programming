#include "main.h"

/**
 * puts2 - prints everyother character of a string
 * @str: string
 * Return: nothing
 */

void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (i % 2 == 0 || i == 0)
		{
			_putchar(str[i]);
		}
		i++;
	}
	_putchar('\n');
}

