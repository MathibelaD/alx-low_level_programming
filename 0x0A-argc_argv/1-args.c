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
	do {
		printf("%d", argc - 1);
	} while (argv[argc]);
	putchar('\n');
	return (0);
}
