#include "main.h"

/**
 * print_chessboard - function
 * @a: variable
 * Return: void
 */
void print_chessboard(char (*a)[8])
{
	int x, i;

	char *str = a;
	
	for (x = 0; x < 8; x++)
	{
		for (i = 0; i < 8; i++)
		{
			_putchar(*(str + i));
		}
		_putchar('\n');
	}
}
