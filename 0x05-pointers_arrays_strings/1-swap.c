#include "main.h"
/**
 * swap_int - function for swaping the values
 * @a: imput 1
 * @b: input 2
*/
void swap_int(int *a, int *b)
{
	int mid;

	mid = *a;
	*a = *b;
	*b = mid;
}
