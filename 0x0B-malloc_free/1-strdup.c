#include "main.h"
#include <stdlib.h>
#include "string.h"

/**
 * _strdup - function
 * @str: parameter
 * Return: pointer or NULL
 */
char *_strdup(char *str)
{
	char *s = malloc(str * sizeof(char));

	if (str == NULL)
		return (NULL);
	return (strdup(str));
}
