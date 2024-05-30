#include <stdlib.h>
#include "main.h"

/**
 * **strtow - splits a string into words
 * @str: string
 * Return: pointer to an array of strings (Success)
 */


char **strtow(char *str)
{
	char **pointer, word_found[100], buffer, previousWord;
	int i, j, end, k, letter_found, *position;

	for (i = 0, letter_found = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 'A' && str[i] <= 'Z' ||
			str[i] >= 'a' && str[i] <= 'z')
		{
			previousWord = str[i-1];
			if (!(previousWord >= 'a' && previousWord <= 'z' || previousWord >= 'A' && previousWord <= 'Z'))
				letter_found++;
			i++;
		}
	}

	pointer = (char **)malloc(sizeof(char) * letter_found);
	if (!pointer)
		return (NULL);

	for (i = 0, j = 0; str[i] != '\0'; i++)
	{
		if (str[i] == ' ' || str[i] == '\0')
			continue;
		
		for (end = 0; str[end+i] != ' '; end++)
		{	
			continue;
		}
		pointer[j] = (char *)malloc(sizeof(char) * (end +1));
		if (!pointer[j])
		{
			free(pointer);
			return (NULL);
		}
		for(k = 0; k < end; k++)
		{
			pointer[j][k] = str[k+i];
			word_found[k] = str[k+i];
		}
		pointer[j][k] = '\0';
		i += end;
		j++;

	}
	
	
	return (pointer);
}

void print_tab(char **tab)
{
	int i;

	for (i = 0; tab[i] != NULL; ++i)
	{
		printf("%s\n", tab[i]);
	}
}

/**
 * main - check the code for ALX School students.
 *
 * Return: 1 if an error occurred, 0 otherwise
 */
int main(void)
{
	char **tab;

	tab = strtow("      ALX School         #cisfun      ");
	if (tab == NULL)
	{
		printf("Failed\n");
		return (1);
	}
	print_tab(tab);
	return (0);
}
