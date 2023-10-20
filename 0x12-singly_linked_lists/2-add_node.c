#include "lists.h"

/**
 *add_node - function to add a new node at begining
 *@head: pointer to the head node
 *@str: str pointer of the node
 *
 *Return: s
*/

list_t *add_node(list_t **head, const char *str)
{
	list_t *nhead = malloc(sizeof(list_t));

	if (!head || !nhead)
		return (NULL);
	else if (str)
	{
		nhead->str = strdup(str);
		if (!nhead->str)
		{
			free(nhead);
			return (NULL);
		}
		nhead->len = _strlen(nhead->str);
	}

	nhead->next = *head;
	*head = nhead;
	return (nhead);
}
