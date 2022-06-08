#include "main.h"

/**
 * print_last_digit - functiom
 *
 * @n: parameter
 * Return: remainder
 */
int print_last_digit(int n)
{
	int result = n % 10;

	if (n < 0)
	{
		_putchar(-result + '0');
		return (-result);
	}
	else
	{
		_putchar(result + '0');
		return (result);
	}

}
