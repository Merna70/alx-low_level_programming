#include <stdio.h>
/**
 * main - print all arguments
 * @argc: int
 * @argv: int
 * Return: return 0
*/

int main(int argc, char const *argv[])
{
	int y = 0;

	while (argc--)
	{
		printf("%s\n", argv[y]);
		y++;
	}
	return (0);
}
