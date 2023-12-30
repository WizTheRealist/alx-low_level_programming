#include <stdio.h>
#include "main.h"

void print_to_98(int n)
{
	for (int k = n; k <= 98; k++)
	{
		if (k != 98)
		{
			if (k  >= -9 && k <= 9)
			{
				if (k < 0)
				{
					-putchar('-');
					_putchar(-k + '0');
				}
				else
				{
					_putchar(k + '0');
				}
				_putchar(',');
				_putchar(' ');
			}
			else (k >= 10 || k <= -10)
			{
				if (k < 0)
				{
					k = -k;
					_putchar('-');
				}
				_putchar((k / 10) + '0');
				_putchar((k % 10) + '0');
				_putchar(',');
				_putchar(' ');
			}
		}
		else
		{
			_putchar((k / 10) + '0');
			_putchar((k % 10) + '0');
			_putchar('\n');
		}
	}
}
