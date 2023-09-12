#include "main.h"
/**
*_isalpha - function to check if the charachter is alpha or not
*@c: charachter to be checked
*Return: Always 1 (alphabet)
*	otherwise 0 (not alphabet)
*/







int _isalpha(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	if (c >= 65 && c <= 90)
		return (1);
	return (0);
}
