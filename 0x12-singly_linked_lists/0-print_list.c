#include "lists.h"

/**
 *_strlen - function
 *@s: pointer to the string to be checked
 *
 *Return: the length of the string
*/

int _strlen(char *t)
{
	int l = 0;

	while (!t)
		return (0);
	while (*t++)
		l++;
	return (l);
}

/**
 *print_list - print all elements
 *@h: pointer to header node
 *
 * Return: size of the list
*/

size_t print_list(const list_t *h)
{
	size_t n = 0;

	while (h)
	{
		printf("[%d] %s\n", _strlen(h->str), h->str ? h->str : "(nil)");
		h = h->next;
		z++;
	}
	return (n);
}
