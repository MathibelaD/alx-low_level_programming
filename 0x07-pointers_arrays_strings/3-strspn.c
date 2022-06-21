#include "string.h"
#include "main.h"

/**
 * _strspn - Function
 * @s: variable
 * @accept: variable
 * Return: int
 */
unsigned int _strspn(char *s, char *accept)
{
	int r;

	r = strspn(s, accept);

	return (r);
}
