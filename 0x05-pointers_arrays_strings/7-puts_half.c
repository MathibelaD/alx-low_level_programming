#include "main.h"
#include "string.h"

/**
 * puts_half - function
 * @str: pointer variable
 * Return half the string
 */
void puts_half(char *str)
{
	int len = strlen(str);
	int n, i, x;

	if (len % 2 != 0)
	{
		n = len / 2;
		_putchar(str[n]);
	}
	else
	{
		x = len / 2;
		for (i = x; i < len; i++)
		{
			_putchar(str[i]);
		}
	}

	_putchar('\n');
}
