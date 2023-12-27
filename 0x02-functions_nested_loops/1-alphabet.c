#include "main.h"

/**
 * print_alphabet - a program that prints the alphabets
 * in lowercase
 *
 * Return: 0
 */

void print_alphabet(void)
{
	int i = 'a';

	for (; i <= 'z'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
