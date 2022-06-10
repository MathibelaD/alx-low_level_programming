#include <ctype.h>
#include "main.h"

/**
 * _isdigit - function
 * @c: variable character
 * Return: get 1 if is a number or 0
 */

int _isdigit(int c)
{
	if (isdigit(c))
		return (1);
	else
		return (0);
}
