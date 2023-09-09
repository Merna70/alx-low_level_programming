#include <stdio.h>
/**
 * main - entry for the program
 * Return: Always 0 (success)
*/
int main(void)
{
	int digit = 0;

	while (digit <= 9)
	{
	putchar(digit + '0');
	digit++;
	}
	putchar('\n');
	return (0);
}
