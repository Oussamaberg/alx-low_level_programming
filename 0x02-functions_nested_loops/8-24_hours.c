#include "main.h"

/**
 * jack_bauer - every minute of the day of Jack Bauer,
 * starting from 00:00 to 23:59.
 *
 * Return: void.
 */
void jack_bauer(void)
{
	int min1  = 0;
	int min2  = 0;
	int hour1 = 0;
	int hour2 = 0;

	while (1)
	{
		_putchar(hour2 + '0');
		_putchar(hour1 + '0');
		_putchar(':');
		_putchar(min2 + '0');
		_putchar(min1 + '0');
		_putchar('\n');
		min1++;
		if (min1 > 9)
		{
			min1 = 0;
			min2++;
		}
		if (min2 > 5)
		{
			min2 = 0;
			hour1++;
		}
		if (hour1 > 9)
		{
			hour1 = 0;
			hour2++;
		}
		if (hour2 == 2)
		{
			if (hour1 > 3)
				break;
		}
	}

}
