#include "main.h"

/**
 * reverse_array - function
 * @a: parameter variable
 * @n: parameter variable
 * Return: nothing
 */

void reverse_array(int *a, int n)
{
	int i, x;
	int temp = 0;

	x = n - 1;

	for (i = 0; i < n / 2; i++)
	{
		temp = a[i];
		a[i] = a[x];
		a[x--] = temp;
	}
}
