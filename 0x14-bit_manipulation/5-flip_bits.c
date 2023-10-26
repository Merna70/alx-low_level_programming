#include "main.h"

/**
*flip_bits - function return number of bits you need to flip
*
*@n: first number
*
*@m: second number
*
*Return: num of bits to flip
*/

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	/*declaing*/
	unsigned long int x = n ^ m;
	unsigned int count = 0;

	/*code*/
	while (x)
	{
		if (x & 1ul)
			count++;
		x = x >> 1;
	}
	return (count);
}
