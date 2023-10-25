#include "lists.h"

/**
*insert_nodeint_at_index - function to ins new node at giv index
*@head: pointer to the header of the node
*@idx: index of the list
*@n: val of new node
*Return: add of new nod
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	/*declaring var*/
	listint_t *node;
	listint_t *new_node = malloc(sizeof(listint_t));
	unsigned int i = 0;

	/*code*/
	if (!head || !new_node)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (!idx)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	node = *head;

	while (node)
	{
		if (i == idx - 1)
		{
			new_node->next = node->next;
			node->next = new_node;
			return (new_node);
		}
		i++;
		node = node->next;
	}

	free(new_node);
	return (NULL);
}
