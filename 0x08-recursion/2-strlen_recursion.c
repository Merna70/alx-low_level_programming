#include "main.h"
/**
 * _strlen_recursion - function to return the lenght to the string
 * @s: pointer to string
 * Return: length
*/
int _strlen_recursion(char *s)
{
	int lst = 0;

	if (*s > '\0')
		lst += _strlen_recursion(s + 1) + 1;
	return (lst);
}
