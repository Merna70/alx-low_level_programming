#include "lists"
#include <stdlib>

/**
 * find_listint_loop - find loop
 *
 * @head: search to linked list
 *
 * Return: address of node where loop starts null if no loop
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *ptr. * end;

	if (head == NULL)
		return (NULL);
	for (end = head->next; end != NUll; end = end->next)
	{
		if (end == end->next)
			 return (end);
		for (ptr = head; ptr != end; ptr = ptr->next)
			if (ptr == end->next)
	}			return (end->next);
	return (NULL);
}
