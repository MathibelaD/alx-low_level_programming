#include <stdio.h>
#include <math.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - Entry Point
 * Return: 0 Always (Success)
 */
int main(void)
{
	int i = 0;
	int randomizer = 0;
	int passLength = 8;

	srand((unsigned int)(time(NULL)));

	char num[] = "0123456789";
	char c_letter[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char letter[] = "abcdefghijklmnopqrstuvwxyz";
	char symbols[] = "!@#$^&*?";
	char password[passLength];

	randomizer = rand() % 4;

	for (i = 0; i < passLength; i++)
	{
		if (randomizer == 1)
		{
			password[i] = num[rand() % 10];
			randomizer = rand() % 4;
			printf("%c", password[i]);
		}
		else if (randomizer == 2)
		{
			password[i] = symbols[rand() % 8];
                        randomizer = rand() % 4;
                        printf("%c", password[i]);
		}
		else if (randomizer == 3)
                {
                        password[i] = c_letter[rand() % 8];
                        randomizer = rand() % 4;
                        printf("%c", password[i]);
		}
		else
		{
			password[i] = letter[rand() % 26];
			randomizer = rand() % 4;
			printf("%c", password[i]);
		}
	}
		
	return (0);
}
