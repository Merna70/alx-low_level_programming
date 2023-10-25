#include "lists.h"

/**
*free_listint2 - free list of ints
*@head: pointer to the head of the list
*Return: void
*/
void free_listint2(listint_t **head)
{
	/* variables declaration */
	listint_t *node;
	listint_t *temp;

	/* return NULL if head */
	if (!head)
		return;
	node = *head;

	/* freeing the node*/
	while (node)
	{
		temp = node;
		node = node->next;
		free(temp);
	}
	*head = NULL;
}
