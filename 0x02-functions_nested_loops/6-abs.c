#include "main.h"
/**
 * _abs - function that computes the absolute number of an integer
 * @n: represent the input integer
 * Return: Always 0 (success)
*/

int _abs(int n)
{
	if (n < 0)
		n = (-1) * n;
	return (n);
}
