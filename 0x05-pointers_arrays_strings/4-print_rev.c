#include "main.h"
#include "string.h"

/**
 * print_rev - Function
 * @s: pointer variable
 * print string in reverse
 */
void print_rev(char *s)
{
	int x;
	int size = strlen(s);

	for (x = size; x >= 0; x--)
	{
		_putchar(s[x]);
	}
}
