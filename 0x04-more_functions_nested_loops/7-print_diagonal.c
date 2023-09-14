#include "main.h"
/**
 * print_diagonal - function to print diagnoal
 * @n: for input
*/
void print_diagonal(int n)
{
	int slash, space;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (slash = 1; slash <= n; slash++)
		{
			for (space = 1; space < slash; space++)
		{
			_putchar(' ');
		}
			_putchar(92);
			_putchar('\n');
		}

	}
}
