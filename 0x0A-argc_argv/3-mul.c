#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * @argc: parameter
 * @argv: parameter
 * Return: 1 if an error else 0
 */
int main(int argc, char *argv[])
{
	int res = 0;

	if (argc != 3)
	{
		puts("Error");
		return (1);
	}
	res = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", res);
	return (0);
}
