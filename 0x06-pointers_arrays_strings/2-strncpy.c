#include "main.h"
#include <string.h>

/**
 * _strncpy - function
 * @dest: parameter variable
 * @src: parameter variable
 * @n: parameter variable
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	strncpy(dest, src, n);

	return (dest);
}
