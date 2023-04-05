#include<stdio.h>

/**
 * _pow_recursion - the value of x raised to the power of y.
 * @x: an int.
 * @y: qn int
 * Return: x**y.
 */

int _pow_recursion(int x, int y)
{
	if (y == 0)
		return (1);
	else if (y < 0)
		return (-1);
	return (x * _pow_recursion(x, y - 1));
}
