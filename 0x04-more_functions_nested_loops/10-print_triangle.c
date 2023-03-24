#include "main.h"

/**
 * print_triangle - draw a triangle with '#'.
 * @size: the size of the triangle.
 * Return: Void.
 */
void print_triangle(int size)
{
	int i;
	int j;

	if (size > 0)
	{
		for (i = 1; i <= size ; i++)
		{
			for (j = 0; j < size; j++)
			{
				if (j < (size - i))
					_putchar(' ');
				else
					_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
