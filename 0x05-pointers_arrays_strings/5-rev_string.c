#include "main.h"
#include "string.h"

/**
 * rev_string - Function
 * @s: pointer variable
 * reverse a string
 */
void rev_string(char *s)
{
	int x, tmp;
	int str_length = strlen(s);

	for (x = 0; x < str_length / 2; x++)
	{
		tmp = s[x];
		s[x] = s[str_length - x - 1];
		s[str_length - x - 1] = tmp;
	}
}
