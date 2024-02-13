#include "main.h"

/**
 * create_array - a function that initializes array with a
 * character
 *
 * @size: size of array
 * @c: char to initialize array
 * Return: null or pointer
 */

char *create_array(unsigned int size, char c)
{
	unsigned int n;
	char *ptr;

	if (size == 0)
		return (NULL);

	ptr = (char *)malloc(sizeof(char) * size);

	if (ptr == 0)
		return (NULL);

	for (n = 0; n < size; n++)
		ptr[n] = c;

	ptr = '\0';

	return (ptr);
}
