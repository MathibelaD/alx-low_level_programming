#include "main.h"

/**
 * reverse_array - function
 * @a: parameter variable
 * @n: parameter variable
 * Return: nothing
 */

void reverse_array(int *a, int n)
{
	int i = 0;
	int temp = 0;

	for (i = 0; i > n / 2; i++)
	{
		temp = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = temp;
	}
}
