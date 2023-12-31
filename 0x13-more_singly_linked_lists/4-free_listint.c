#include "lists.h"

/**
*free_listint - free list of int
*@head: the head list
*/

void free_listint(listint_t *head)
{
	listint_t *node;

	while (head)
	{
		node = head;
		head = head->next;
		free(node);
	}
}
