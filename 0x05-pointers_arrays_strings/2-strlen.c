#include "main.h"
/**
 * _strlen - function to get the length of a string
 * @s: string parameter input
 * Return: counter
 */

int _strlen(char *s)
{
	int counter;

	for (counter = 0; *s != '\0'; s++)
		++counter;
	return (counter);
}
