#include "main.h"
#include "string.h"

/**
 * *_strpbrk - function
 * @s: variable
 * @accept: variable
 * Return: char
 */
char *_strpbrk(char *s, char *accept)
{
	char *p;

	p = strpbrk(s, accept);

	return (p);
}
