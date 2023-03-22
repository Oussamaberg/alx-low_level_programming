#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0.
 *
 * Return: void.
 */
void times_table(void)
{
	int times = 0;
	int i;
	int n;

	while (times <= 9)
	{
		i = 0;
		n = 0;
		_putchar('0');
		_putchar(',');
		while (i < 9)
		{
			n = n + times;
			if (n <= 9)
			{
				_putchar(' ');
				_putchar(' ');
				_putchar(n + '0');
			}
			else
			{
				_putchar(' ');
				_putchar(n / 10 + '0');
				_putchar(n % 10 + '0');
			}
			if (i == 8)
				_putchar('\n');
			else
			{
				_putchar(',');
			}
			i++;
		}
		times++;
	}

}
