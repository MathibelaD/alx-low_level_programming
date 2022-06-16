#include <string.h>
#include "main.h"

/**
 * _strcat - function
 * @dest: parameter variable
 * @src: parameter variable
 * Return: pointer to dest
 */

char *_strcat(char *dest, char *src)
{
	strcat(dest, src);

	return (dest);
}
