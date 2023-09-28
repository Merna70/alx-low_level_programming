#include "main.h"
/**
 * is_prime_number - function to check if input integer is prime number
 * @o: int
 * @n: int
 * Return: 0 or 1
*/
int c_prime(int n, int o);

int is_prime_number(int n)
{
	return (c_prime(n, 2));
}

/**
 * c_prime - function to check numbers < n if they divide by it
 * @n: int
 * @o: int
 * Return: int
*/
int c_prime(int n, int o)
{
	if (o >= n && n > 1)
		return (1);
	else if (n % o == 0 || n <= 1)
		return (0);
	else
		return (c_prime(n, o + 1));
}
