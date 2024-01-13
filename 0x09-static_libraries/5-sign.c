#include "main.h"

/**
 * print_sign - prints sign of output
 * @n: integer value
 * Return: 1 or 0 or -1
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (n > 0);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (n != 0);
	}
	else
	{
		_putchar('-');
		return (n < 0);
	}
}

