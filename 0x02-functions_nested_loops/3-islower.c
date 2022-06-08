#include <ctype.h>
#include "main.h"

/**
 * _islower - function
 * Return: int
 */
/**
 * parameter variable c takes in an integer
 *
 */
int _islower(int c)
{
	if (islower(c))
		return (1);
	else
		return (0);
}
