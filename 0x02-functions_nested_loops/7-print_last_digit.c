#include "main.h"

/**
 * print_last_digit - prints last digit
 * @d: integer
 * Return: last digit
 */

int print_last_digit(int d)
{
	if (d < 0 || d > 0)
	{
		return (10 % d);
	}
	return (d != 0);
}
