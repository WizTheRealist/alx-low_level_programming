#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - prints n to 98
 * @n: integer
 * Return: 0
 */

void print_to_98(int n)
{
	if (n <= 98)
	{
		for (int k = n; k <= 98; k++)
		{
			if (k != 98)
			{
				printf("%d\n, ", k);
			}
			else if (k == 98)
			{
				printf("%d\n", k);
			}
		}
	}
	else if (n >= 98)
	{
		for (k = n; k >= 98; k++)
		{
			if (k != 98)
			{
				printf("%d, ", k);
			}
			else if (k == 98)
			{
				printf("%d", k);
			}
		}
	}
}
