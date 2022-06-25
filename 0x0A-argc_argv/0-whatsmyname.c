#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - entry point
 * @argc: parameter
 * @argv: parameter
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i;

	char *file_name = argv[0];
	int len = strlen(file_name);
	
	for (i = 0; i < len; i++)
	{
		_putchar(file_name[i]);
	}
	_putchar('\n');
	
	return (0);
}
