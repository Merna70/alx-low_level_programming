#include <stdio.h>

/**
 * main - entry point for the program
 * Return: Always 0 (success)
*/

int main(void)
{
	char ch = 'a';
	char CH = 'A';

	/*lower case*/
	while (ch <= 'z')
	{
	putchar(ch);
	ch++;
	}
	/*upper case*/
	while (CH <= 'Z')
	{
	putchar(CH);
	CH++;
	}
	putchar('\n');
	return (0);
}
