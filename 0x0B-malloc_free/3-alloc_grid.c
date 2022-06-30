#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - function
 * @width: parameter
 * @height: parameter
 * Return: int
 */
int **alloc_grid(int width, int height)
{
	width = 0;
	height = 0;

	char *p = malloc(sizeof(int) * 2);

	if (p == NULL)
		return (NULL);
	if (width <= 0 || height <= 0)
		return (NULL);
}
