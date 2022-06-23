#include "main.h"

/**
 * is_prime_number - function
 * @n: variable
 * Return: int
 */
int is_prime_number(int n)
{
	if (n % 2 != 0)
		return (1);
	else
		return (0);

	return (is_prime_number(n));
}
