#include "main.h"

/**
 * swap_int - swap values of two integers
 * @a: integer
 * @b: integer
 * Return: nothing
 */

void swap_int(int *a, int *b)
{
	int n = *a;

	*a = *b;

	*b = n;
}
