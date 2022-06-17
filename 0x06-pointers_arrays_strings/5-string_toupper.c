#include "main.h"
#include <ctype.h>

/**
 * string_toupper - function
 * @a: parameter variable
 * Return: upper string
 */
char *string_toupper(char *a)
{
	int i = 0;

	for (i = 0; i < EOF; i++)
	{
		a[i] = toupper(a[i]);
	}
}
