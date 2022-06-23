#include "main.h"
#include <math.h>

/**
 * _sqrt_recursion - function
 * @n: parameter
 * Return: int
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	n = (n / _sqrt_recursion(n - 1));
	return (n);
}
