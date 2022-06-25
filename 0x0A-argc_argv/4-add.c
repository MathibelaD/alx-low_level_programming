#include <stdio.h>
#include "ctype.h"
#include <stdlib.h>

/**
 * main - entry point
 * @argc: parameter
 * @argv: parameter
 * Return: 1 if erro else 0
 */
int main(int argc, char *argv[])
{
	int i, sum = 0;

	if (argc < 1)
		puts("0");

	for (i = 1; i < argc; i++)
	{
		if (!isdigit(*argv[i]))
		{
			puts("Error");
			return (1);
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
