#include <stdio.h>
#include <unistd.h>
/**
*main - main function
*
*Return: 0 for success and 1 for failure
*/

int main(void)
{
	char q[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

		write(1, q, 59);

	return (1);
}
