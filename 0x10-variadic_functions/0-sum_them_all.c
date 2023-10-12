#include "variadic_functions.h"

/**
 * sum_them_all - function return the sum of all its parameters
 *@n: the number of arguments
 *@...: the integers
 *Return: total
*/
int sum_them_all(const unsigned int n, ...)
{
	int t = 0;
	int i = n;
	va_list ap;

	if (!n)
		return (0);
	va_start(ap, n);
	while (i--)
		t += va_arg(ap, int);
	va_end(ap);
	return (t);
}
