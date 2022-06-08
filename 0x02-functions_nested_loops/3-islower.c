#include <ctype.h>
#include "main.h"

/**
 * _islower - function
 *
 * @c: The character to evaluate
 * Return: 1 if c is in lowercase
 * else return 0
 */
int _islower(int c)
{
	if (islower(c))
		return (1);
	else
		return (0);
}
