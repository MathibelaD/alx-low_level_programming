#include "main.h"
#include <string.h>

/**
 * _strncat - function
 * @dest: parameter variable
 * @src: parameter variable
 * @n: parameter variable
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	strncat(dest, src, n);

	return (dest);
}
