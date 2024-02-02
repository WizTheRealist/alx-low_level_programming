#include "lists.h"

/**
 * free_list - frees content of the list
 *
 * @head: pointer of the head
 */

void free_list(list_t *head)
{
	list_t *buffer;


	while (head)
	{
		buffer = head->next;
		free(head->str);
		free(head);
		head = buffer;
	}
}
