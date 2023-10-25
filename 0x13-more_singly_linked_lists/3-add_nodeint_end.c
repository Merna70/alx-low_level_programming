#include "lists.h"

/**
*add_nodeint_end - function to add node to the end
*@head: pointer to the head node
*@n: data to be entered
*
*Return: new node at the end
*/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_end;
	listint_t *temp = *head;

	new_end = malloc(sizeof(listint_t));

	if (!new_end)
		return (NULL);

	new_end->n = n;
	new_end->next = NULL;

	if (*head == NULL)
	{
		*head = new_end;
		return (new_end);
	}

	while (temp->next)
		temp = temp->next;
	temp->next = new_end;

	return (new_end);
}
