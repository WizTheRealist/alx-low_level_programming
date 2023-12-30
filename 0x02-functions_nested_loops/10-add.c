#include "main.h"

/**
 * add - adds two integers
 * @a: integer 1
 * @b: integer 2
 * Return: 0
 */

int add(int a, int b)
{
	int k = a + b;

	if (k <= 9 && k >= -9)
	{
		_putchar(k + '0');
	}
	else
	{
		_putchar((k / 10) + '0');
		_putchar((k % 10) + '0');
	}
	return (k);
}
