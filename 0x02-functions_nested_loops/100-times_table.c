#include "main.h"

/**
 * print_times_table - prints the n times table, starting with 0.
 * @n: the number to calculate times table causes an infinite loop
 *
 * Return: void.
 */
void print_times_table(int n)
{
	int times = 0;
	int i;
	int num;

	while (times <= n)
	{
		if (n > 15 || n < 0)
			break;
		i = 0;
		num = 0;
		_putchar('0');
		_putchar(',');
		while (i < n)
		{
			num = num + times;
			if (num <= 9)
			{
				_putchar(' ');
				_putchar(' ');
				_putchar(' ');
				_putchar(num + '0');
			}
			else
			{
				_putchar(' ');
				if (num >= 100)
					_putchar((num / 100) % 10 + '0');
				else
					_putchar(' ');
				_putchar((num / 10) % 10 + '0');
				_putchar(num % 10 + '0');
			}
			if (i == n - 1 || n == 0)
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
