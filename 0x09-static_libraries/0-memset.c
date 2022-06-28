#include "main.h"
#include <stdio.h>
#include "string.h"

/**
 * *_memset - function
 * @s: variable
 * @b: variable
 * @n: variable
 * Return: char
 */
char *_memset(char *s, char b, unsigned int n)
{
	memset(s, b, n);

	return (s);
}
