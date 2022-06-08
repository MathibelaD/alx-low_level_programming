#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	long int max = 50, num1 = 1, num2 = 2, num3 = 0, i = 0;

	printf("%ld", num1);
	while (i < max)
	{
		num3 = num1 + num2;
		printf(", %ld", num3);
		num1 = num2;
		num2 = num3;

		i++;
	}
	putchar(10);

	return (0);
}
