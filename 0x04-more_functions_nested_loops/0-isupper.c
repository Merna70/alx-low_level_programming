#include "main.h"

/**
 * _isupper - ckeck if the c is upper
 * @c: input for alphabet
 * Return: 1 if uppercase
 * 0 if lower
*/
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
