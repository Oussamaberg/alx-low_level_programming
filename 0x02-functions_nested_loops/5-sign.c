#include "main.h"

/**
 * print_sign - print the sign of a number.
 * @n: the number to check.
 * Return: 1 and print + if the number is positive,
 * 0 is returned and print 0 if n is zero,
 *-1 and print - if the number is negative.
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else
	{
		if (n < 0)
		{
			_putchar('-');
			return (-1);
		}
		else
		{
			_putchar('0');
			return (0);
		}
	}

}
