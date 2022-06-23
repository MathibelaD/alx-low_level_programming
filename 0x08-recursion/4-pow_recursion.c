#include <stdio.h>
#include "main.h"
#include <math.h>

/**
 * _pow_recursion - functions
 * @x: varaible
 * @y: variable
 * Return: int
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	y--;
	x = x * _pow_recursion(x, y);
	return (x);
}
