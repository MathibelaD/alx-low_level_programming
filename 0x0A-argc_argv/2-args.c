#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * @argc: parameter
 * @argv: parameter
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int num = 0;

	while (num < argc)
	{
		printf("%s\n", argv[num]);
		num++;
	}
	return (0);
}
