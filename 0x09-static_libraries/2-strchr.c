#include "main.h"
#include "string.h"

/**
 * *_strchr - Function
 * @s: variable
 * @c: variable
 * Return: char
 */
char *_strchr(char *s, char c)
{
	char *ptr;

	ptr = strchr(s, c);

	return (ptr);
}
