#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num = 0;
	char alphabet = 'a';

	while (num < 10)
	{
		putchar(num + '0');
		num++;
	}

	while (alphabet <= 'f')
	{
		putchar(alphabet);
		alphabet++;
	}

	putchar('\n');

	return (0);
}
