#include "main.h"

/**
 * times_table - prints 9 times table
 * Returns: nothing
 */

void times_table(void)
{
	for (int i = 0; i < 9; i++)
	{
		for (int j = 0; j < 1; j++)
		{
			_putchar('0');
			_putchar(',');
		}
		_putchar('\n');

		for (int k = 0; k < 1; k = k + 1; k++)
		{
			_putchar(' ');
			_putchar(k + '0');
			_putchar(',');
		}

