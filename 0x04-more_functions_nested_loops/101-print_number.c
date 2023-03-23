#include "main.h"
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
		n = -n;
	}
	while (MAX > 1)
	{
		if ((n / MAX) >= 1)
			_putchar((n / MAX) % 10 + '0');
		MAX = MAX / 10;
	}
	_putchar((n % 10) + '0');
}
