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
	char *p;
	unsigned int i;

	p = malloc((size + 1) * sizeof(char));
	if (p == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (i < size)
	{
		p[i] = c;
		i++;
	}
	p[i] = '\0';
	return (p);
}
