#include "main.h"

/**
 * _strcpy - function that copies the string pointed 
 * @dest: char type string
 * @src: char type string
 *
 * Return: Pointer to (dest)
*/

char *_strcpy(char *dest, char *src)
{
	int i = -1;

	do {
		i++;
		dest[i] = src[i];
	} while (src[i] != '\0');
	return (dest);
}