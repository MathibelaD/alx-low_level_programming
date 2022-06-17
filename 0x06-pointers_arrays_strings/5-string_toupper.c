#include "main.h"
#include <ctype.h>
#include <string.h>

/**
 * string_toupper - function
 * @a: parameter variable
 * Return: upper string
 */
char *string_toupper(char *a)
{
	int i = 0;
	int len = strlen(a);

	for (i = 0; i < len; i++)
	{
		a[i] = toupper(a[i]);
	}

	return (a);
}
