#include "lists.h"

/**
*listint_len - function
*@h: pointer to head
*
*Return: number of nodes
*/

size_t listint_len(const listint_t *h)
{
	size_t link_len = 0;

	while (h)
	{
		link_len++;
		h = h->next;
	}
	return (link_len);
}
