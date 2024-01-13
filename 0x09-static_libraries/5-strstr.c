#include "main.h"

/**
 * _strstr - empty
 * @haystack: var
 * @needle: var
 * Return: char
 */

char *_strstr(char *haystack, char *needle)
{
	int m, n;

	for (m = 0; haystack[m] != '\0'; m++)
	{
		for (n = 0; needle[n] != '\0'; n++)
		{
			if (haystack[m + n] != needle[n])
				break;
		}
		if (!needle[n])
			return (&haystack[m]);
	}
	return (NULL);
}
