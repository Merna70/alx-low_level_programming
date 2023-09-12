#include "main.h"
/**
 * print_last_digit - function to print last digit
 * @n: integer numer input
 * Return: return the last digit
*/

int print_last_digit(int n)
{
	int digit;

	if (n < 0)
		digit = -1 * (n % 10);
	else
		digit = n % 10;
	_putchar(digit + '0');
	return (digit);
}
