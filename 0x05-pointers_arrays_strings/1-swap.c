#include "main.h"

/**
 * swap_int - Function
 * @a: pointer variable
 * @b: pointer variable
 * swap two integers
 */
void swap_int(int *a, int *b)
{
	int n = *a;
	*a = *b;
	*b = n;
}
