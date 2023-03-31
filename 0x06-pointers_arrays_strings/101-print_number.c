#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_number - print an integer n.
 * @n: The integer to print
 *
 * Return: void.
 */
void print_number(int n)
{
	int MAX = 1000000000;

	if (n < 0)
	{
		_putchar('-');
		MAX = -MAX;
	}
	while (abs(MAX) > 1)
	{
		if ((n / MAX) >= 1)
		{
			_putchar((n / MAX) % 10 + '0');

		}
		MAX = MAX / 10;
	}
	_putchar(abs(n % 10) + '0');
}
