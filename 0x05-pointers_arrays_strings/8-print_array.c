#include <stdio.h>
#include "main.h"

/**
 * print_array - function
 * @a: pointer variable
 * @n: array length
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);

		if (i == (n - 1))
			break;

		putchar(',');
		putchar(' ');
	}
	putchar('\n');
}
