#include <stdio.h>

/**
 * main - prints fibonacci 1 to 98
 * Return: 0
 */

int main(void)
{
	long int count = 3;

	long int a = 1, b = 2, next = a + b;

	printf("%lu, ", a);
	printf("%lu, ", b);

	while (count <= 98)
	{
		if (count == 98)
		{
			printf("%lu", next);
		}
		else
		{
			printf("%lu, ", next);
		}
		next = a + b;
		a = b;
		b = next;
		count++;
	}
	printf("\n");
	return (0);
}
