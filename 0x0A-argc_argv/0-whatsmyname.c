#include <stdio.h>
#include "main.h"

/**
 * main - entry point
 * @argc: parameter
 * @argv: parameter
 * Return: 0
 */
int main(int argc, char *argv[])
{
	if (argc == 1)
	{
		printf("%s", argv[0]);
	}

	putchar('\n');
	return (0);
}
