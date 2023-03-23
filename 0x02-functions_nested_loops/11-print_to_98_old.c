#include "main.h"

/**
 * print_to_98 - prints all natural numbers from n to 98,
 * followed by a new line.
 * @n: starting number.
 * Return: Void.
 */
void print_to_98(int n)
{
	while (n >= 98)
	{
		if (n >= 100)
			_putchar(n / 100 + '0');
		_putchar((n / 10) % 10 + '0');
		_putchar(n % 10 + '0');
		if (n == 98)
		{
			_putchar('\n');
			n = 100;
			break;
		}
		_putchar(',');
		_putchar(' ');
		n--;
	}
	while (n <= 98)
	{
		if (n < 10)
			if (n < 0)
			{
				_putchar('-');
				if (n <= -10)
				{
					_putchar(-n / 10 + '0');
					_putchar(-n % 10 + '0');
				}
				else
				{
					_putchar(-n + '0');
				}
			}
			else
				_putchar(n + '0');
		else
		{
		_putchar(n / 10 + '0');
		_putchar(n % 10 + '0');
		}
		if (n == 98)
			_putchar('\n');
		else
		{
			_putchar(',');
			_putchar(' ');
		}
		n++;
	}
}
