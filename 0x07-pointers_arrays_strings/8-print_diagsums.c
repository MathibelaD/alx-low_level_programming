#include <stdio.h>
#include "main.h"

/**
 * print_diagsums - function
 * @a: vraible
 * @size: variable
 * Return: nothing
 */

void print_diagsums(int *a, int size)
{
	int x, i;
	int sum1, sum2;
	int *ptr;
	
	ptr = a;
	
	for (x = 0; x < size; x++)
	{
		for (i = 0; i < size; i++)
		{
			if (x == i)
			{
				sum1 += *(ptr + i);
			}
			
			if ((x + i) == size - 1)
			{
				sum2 += *(ptr + i);
			}
		}
	}
	printf("%d, %d\n", sum1, sum2);
}
