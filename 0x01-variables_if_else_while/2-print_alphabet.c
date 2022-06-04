#include <stdio.h>

/**
 * main -Entry point
 *
 * Return:Always 0 (Success)
 */
int main(void)
{
	char alphabet = 'a';

	for (int x = 1; x <= 26; x++)
	{
		putchar(alphabet);
		alphabet++;
	}

	putchar('\n');

	return (0);
}
