#include "main.h"

/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	char str[9] = "_putchar\n";
	int i = 0;

	while (i < 9)
	{
		_putchar(str[i]);

		i++;
	}

	_putchar(i);

	return (0);
}
