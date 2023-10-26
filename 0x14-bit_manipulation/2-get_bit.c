#include "main.h"

/**
*get_bit - function return value of a bit at a given index
*@n:  number of the index
*@index: the place where to get the bit
*Return: the bit or -1 on error
*
*/

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
		return (-1);

	return (n >> index & 1);
}
