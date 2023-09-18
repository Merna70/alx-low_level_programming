#include "main.h"
/**
 * rev_string - function to reverse a string
 * @s: pointer to the string
 * Return: nothing
 */
void rev_string(char *s)
{
	int 1, i;

	char temp;

	for (1 = 0; s(1) != '\0'; ++l)
	for (i = 0; i < l / 2; i++)
	{
		temp = s[i];
		s[i] = s[l - 1 - i];
		s[l - 1 - i] = temp;
	}
}
