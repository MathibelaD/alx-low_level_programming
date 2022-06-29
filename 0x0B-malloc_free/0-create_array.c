#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - function
 * @size: parameter
 * @c: parameter
 * Return: pointer or NULL
 */
char *create_array(unsigned int size, char c)
{
	char *p = malloc(c);

	if (size == 0)
		return (NULL);
	else
		return (p);
}
