#include "main.h"
/**
 * print_triangle - print triangle
 * @size: integer size
*/
void print_triangle(int size)
{
	int row, ht;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (ht = 1; ht <= size; ht++)
		{
			for (row = 1; row <= size; row++)
			{
				if ((ht + row) <= size)
					_putchar(' ');
				else
					_putchar('#');
	}
			_putchar('\n');
		}
}
}
