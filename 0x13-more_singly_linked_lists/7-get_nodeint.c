#include "lists.h"

/**
*get_nodeint_at_index - function
*@head: pointer to the header node
*@index: index of the node starting at 0
*Return: returns ptr to node
*/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	/* declaring variables*/
	listint_t *node;
	unsigned int n;

	/* using for loop for iteration through the list*/
	for (node = head, n = 0; node && n < index; node = node->next, n++)
		;

	return (node);
}
