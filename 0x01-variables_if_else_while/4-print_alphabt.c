#include <stdio.h>

/**
 * main - entry point for the program
 * Return: Always 0 (success)
*/

int main(void)
{
	char ch = 'a';

	/*lower case*/
	while (ch <= 'z')
	{
	if (ch == 'e' || ch == 'q')
	{
	ch++;
	}
	putchar(ch);
	ch++;
	}
	putchar('\n');
	return (0);
}
