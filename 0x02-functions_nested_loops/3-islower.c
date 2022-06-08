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
	if (isupper(c))
		return (0);
	else
		return (1);
}
