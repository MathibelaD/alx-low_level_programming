#include "main.h"

/**
 * print_square - function
 * @size: variable
 * Return: #
 */

void print_square(int size)
{
	int i = 1, x = 0;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		while (i <= size)
		{
			for (x = 1; x <= size; x++)
			{
				_putchar('#');
			}
			_putchar('\n');
			i++;
		}
	}
}
