#include <stdio.h>

/**
 * main - prints sum of even fibonacci below 4 million
 * Return: 0
 */

int main(void)
{
	long int a = 1, b = 2;
	long int next;
	long int sum = 0;
	while (a <= 4000000)
	{
		if (a % 2 == 0)
		{
			sum += a;
		}
		a = b;
		b = next;
		next = a + b;
	}
	printf("%lu\n", sum);
	return (0);
}
