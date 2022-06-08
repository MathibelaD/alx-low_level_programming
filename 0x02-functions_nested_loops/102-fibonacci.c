#include <stdio.h>
/**
 * main - main function
 *
 * Return: end program
 */
int main(void)
{
	long int n, num1 = 1, num2 = 1, res;

	printf("%ld", num1);
	for (n = 1; n < 50; ++n)
	{
		res = num1 + num2;
		printf(", %ld", res);
		num1 = num2;
		num2 = res;
	}
	putchar(10);

	return (0);
}
