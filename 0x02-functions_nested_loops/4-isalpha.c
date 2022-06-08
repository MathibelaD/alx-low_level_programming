#include <ctype.h>
#include "main.h"

/**
 * _isalpha - function
 *
 * @c: parameter
 * Return: get 1 if c is an alphabet
 * otherwise get 0
 */
int _isalpha(int c)
{
	if (isalpha(c))
		return (1);
	else
		return (0);
}
