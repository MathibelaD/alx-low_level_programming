#include "main.h"
#include "1-alphabet.c"

/**
 * print_alphabet_x10 - function
 * Return: void
 */
void print_alphabet_x10(void)
{
	int i = 0;

	while (i < 10)
	{
		print_alphabet();
		i++;
	}
}
