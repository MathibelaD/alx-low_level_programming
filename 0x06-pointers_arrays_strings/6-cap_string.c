#include <string.h>
#include <ctype.h>
#include "main.h"

/**
 * cap_string - function
 * @str: parameter variable
 * Return: char
 */

char *cap_string(char *str)
{
	int i;
	
	for (i = 0; str[i] != '\0'; i++)
	{
		if (i == 0)
		{
			if ((str[i] >= 'a' && str[i] <= 'z'))
				str[i] = toupper(str[i]);
			continue;
		}
		
		if (str[i] == ' ' || str[i] == '\t')
		{
			++i;
			if (str[i] >= 'a' && str[i] <= 'z')
			{
				str[i] = toupper(str[i]);
				continue;
			}
		}
		else
		{
			if (str[i] >= 'A' && str[i] <= 'Z')
				str[i] = tolower(str[i]);
		}

	return (str);
}
