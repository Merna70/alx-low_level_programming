#include "main.h"

/**
*binary_to_unit - Converts a binary string to an unsigned integer.
*@b: string refers to binary number
*Return: int
*
*/

unsigned int binary_to_uint(const char *b)
{
	/*declaring vars*/
	unsigned int number = 0;

	/*converting binary to int*/

	if (b == NULL)
		return (0);
	while (*b)
	{
		if (*b != '0' && *b != '1')
			return (0);
		number = number * 2 + (*b++ - '0');
	}
	return (number);
}
