#include "lists.h"

/**
* pop_listint - function
*@head: pointer to the head of the nod
*Return: int for popped node
*/

int pop_listint(listint_t **head)
{
	/*vaiables declaration*/
	listint_t *node;
	int n;

	/*popping the node*/

	if (!head || !*head)
		return (0);

	node = (*head)->next;
	n = (*head)->n;
	free(*head);
	*head = node;
	return (n);
}
