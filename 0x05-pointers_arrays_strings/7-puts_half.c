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
	int n, i;
	
	if (len % 2 != 0)
	{
		n = (len - 1) / 2;
		_putchar(str[n]);
	}
	else
	{
		i = len / 2;
		for (i; i < len; i++)
		{
			_putchar(str[i]);
		}
	}
}
