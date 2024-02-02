#include "lists.h"

/**
 * list_len - prints content list
 *
 * @h: the list
 * Return: size_t iteration the number of element in the list
 */
size_t list_len(const list_t *h)
{
	size_t iter = 0;


	while (h)
	{
		h = h->next;
		iter++;
	}

	return (iter);
}
