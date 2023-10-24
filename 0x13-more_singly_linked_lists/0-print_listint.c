#include "lists.h"

/**
*print_listint - function
*@h: pointer the head node
*
*Return: int
*/

size_t print_listint(const listint_t *h)
{
	size_t ele_num = 0;

	while (h)
	{
		printf("%d\n", h->n);
		ele_num++;
		h = h->next;
	}
	return (ele_num);
}
