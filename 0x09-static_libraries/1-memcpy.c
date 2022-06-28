#include "main.h"
#include "string.h"

/**
 * *_memcpy - function
 * @dest: variable
 * @src: variable
 * @n: variable
 * Return: char
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	memcpy(dest, src, n);

	return (dest);
}
