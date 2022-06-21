#include "main.h"
#include "string.h"

/**
 * _strstr - function
 * @haystack: variable
 * @needle: variable
 * Return: char
 */
char *_strstr(char *haystack, char *needle)
{
	char *ptr;

	ptr = strstr(haystack, needle);

	return (ptr);
}
