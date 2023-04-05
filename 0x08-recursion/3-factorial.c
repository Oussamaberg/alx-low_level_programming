#include<stdio.h>

/**
 *  factorial - returns the length of a string.
 * @n: an int.
 * Return: fact(n).
 */

int factorial(int n)
{
	if (n == 1 || n == 0)
		return (1);
	else if (n < 0)
		return (-1);
	return (n * factorial(n - 1));
}
