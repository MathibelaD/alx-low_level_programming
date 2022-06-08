#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - function
 *
 * @n: variable character
 * Return: prints natural numbers n - 98
 */
void print_to_98(int n)
{
	while (n <= 98)
	{
		if (n > 9)
		{
			if (n == 98)
			{
				printf("%d", n);
				break;
			}
			printf("%d, ", n);
		} else
		{
			printf("%d, ", n);
		}
		n++;
	}

	while (n > 98)
	{
		if (n == 98)
		{
			printf("%d", n);
			break;
		}
		printf("%d, ", n);
		n--;
	}
	putchar('\n');
}
