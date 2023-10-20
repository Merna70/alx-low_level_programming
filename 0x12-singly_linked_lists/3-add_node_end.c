#include "lists.h"

/**
 *add_node_end - function 
 *@head: add of a pointer to the head node
 *@str: string field of the node
  *Return: s
*/

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *end_node = malloc(sizeof(list_t));
	list_t *node = *head;

	if (!head || !end_node)
		return (NULL);
	if (str)
	{
		end_node->str = strdup(str);
		if (!end_node->str)
		{
			free(end_node);
			return (NULL);
		}
		end_node->len = _strlen(end_node->str);
	}
	if (node)
	{
		while (node->next)
			node = node->next;
		node->next = end_node;
	}
	
		*head = end_node;
		 (end_node);

}
