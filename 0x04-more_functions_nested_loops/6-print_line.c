#include "main.h"

/**
 * print_line - print a straight line.
 * @n: number of time to print the '_' character.
 * Return: Void.
 */
void print_line(int n)
{
	if (n <= 0)
		_putchar('\n');
	else
	{
		while (n > 0)
		{
			_putchar('_');
			n--;
		}
		_putchar('\n');
	}
}
