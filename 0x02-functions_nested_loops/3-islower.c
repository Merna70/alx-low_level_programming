#include "main.h"
/**
*_islower - function to return if it is lower case or not
*Return: On success 1 (lowercase)
*	otherwise 0 (not lowercase)
*@c : checks the charachter input
*/

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}
