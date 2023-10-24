#include "lists.h"
/**
 *_strlen - function
 *@s: pointer to the string to be checked
 *
 *Return: the length of the string
*/

int _strlen(char *s)
{
	int len = 0;

	if (!s)
		return (0);
	while (*s++)
		len++;
	return (len);
}

/**
 *print_list - print
 *@h: pointer to header node
 *
 * Return: size of the list
*/

size_t print_list(const list_t *h)
{
	size_t z = 0;

	if (h)
	{
		printf("[%d] %s\n", _strlen(h->str), h->str ? h->str : "(nil)");
		h = h->next;
		z++;
	}
	return (z);
}
