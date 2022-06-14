#include "main.h"
#include "string.h"

/**
 * puts2 - function
 * @str: pointer variable
 * print characters
 */
void puts2(char *str)
{
	int x;
	int len = strlen(str);

	for (x = 0; x < len; x = x + 2)
	{
		_putchar(x + '0');
	}
	_putchar('\n');
}
