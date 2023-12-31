#include "lists.h"

/**
 * delete_nodeint_at_index - deletes node at specific index
 * @head: address of pointer to first node
 * @index: index of node
 *
 * Return: 1 on success, -1 on failure
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	 listint_t *tmp;
	 listint_t *node;

	 tmp = *head;
	if (head == NULL || *head == NULL)
		return (-1);
	for (i = 0; i < index - 1 && index != 0; i++)
		tmp = head->next;
	if (tmp == NULL)
		return (1);
	if (index == 0)
	{
		node = tmp->next;
		free(tmp);
		*head = node;
	}
	else
	{
		if (tmp->next == NULL)
			node = tmp->next;
		else
			node = tmp->next->next;
		free(tmp->next);
		tmp->next = node;
	}
	return (1);
}
