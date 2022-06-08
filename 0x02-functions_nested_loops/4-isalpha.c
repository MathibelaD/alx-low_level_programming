#include <ctype.h>
#include "main.h"

/**
 * _isalpha - function
 * Return: int
 */
/**
 * c - parameter
 * Return: int
 */
int _isalpha(int c)
{
	if (isalpha(c))
		return (1);
	else
		return (0);
}
