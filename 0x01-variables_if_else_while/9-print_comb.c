#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0(Success)
 */

int main(void)
{
	int i = '0';

	for (; i <= '9'; i++)
	{
		if (i < '10' && i > '0')
		{
			putchar(',');
			putchar(' ');
		}
		putchar(i);
	}
	putchar('\n');
	return (0);
}
