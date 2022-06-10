#include "main.h"
#include <ctype.h>

/**
 * _isupper - function
 * @c: character variable
 * Return: 1 if c is uppercase or 0 if not
 */

int _isupper(int c)
{
	if (isupper(c))
		return (1);
	else
		return (0);
}
