#include "main.h"

/**
*print_binary - function prints the binary represent of a number
*
*@n: number to  be convert
*/

void print_binary(unsigned long int n)
{
	/*declaring vars*/
	int bit = sizeof(n) * 8;
	int printd = 0;

	/*printing binary*/

	while (bit)
	{
		if (n & 1L << --bit)
		{
			_putchar('1');
			printd++;
		}
		else if (printd)
			_putchar('0');
	}
	if (!printd)
		_putchar('0');
}
