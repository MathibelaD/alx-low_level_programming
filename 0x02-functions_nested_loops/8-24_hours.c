#include "main.h"

/**
 * jack_bauer - function
 *
 * Return: void
 */
void jack_bauer(void)
{
	int hour = 0, hour1, hour2, minute, minute1, minute2;

	while (hour < 23)
	{
		hour1 = hour / 10;
		hour2 = hour % 10;
		minute = 0;

		while (minute < 60)
		{
			minute1 = minute / 10;
			minute2 = minute % 10;

			_putchar(hour1 + '0');
			_putchar(hour2 + '0');
			_putchar(':');
			_putchar(minute1 + '0');
			_putchar(minute2 + '0');
			_putchar('\n');

			minute++;
		}
		hour++;
	}
}
