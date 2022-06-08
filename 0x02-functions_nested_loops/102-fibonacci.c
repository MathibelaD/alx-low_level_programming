#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int max = 50, num1 = 1, num2 = 2, num3 = 0;

	printf("%d, %d, ", num1, num2);
	for (int i = 0; i < max; i++)
	{
		num3 = num1 + num2;
		num1 = num2;
		num2 = num3;
		printf("%d, ", num3);
	}

	return (0);
}
