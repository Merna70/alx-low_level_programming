#include <stdio.h>
/**
 * main - print the number
 * @argc: number of line arguments
 * @argv: number
 * Return: 0
*/

int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
