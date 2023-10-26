#include "main.h"

/**
*set_bit - function that sets the value of a bit
*@n: the number index
*
*@index: the bit set
*
*Return: 1 for succes and -1 for error
*/

int set_bit(unsigned long int *n, unsigned int index)

{
	/*setting bit*/
	if (index >= sizeof(n) * 8)
		return (-1);

	return (!!(*n |= 1L << index));
}
