#include<stdio.h>
/**
 * prime - Makes possible to evaluate from 1 to n
 * @a: same number as n
 * @b: number that iterates from 1 to n
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int prime(int a, int b)
{
	if (a <= 0 || a == 1)
		return (0);
	if (b < a / 2)
	{
		if (a % b != 0)
		{
			prime(a, b + 1);
		}
		else
		{
			return (0);
		}
	}
	else
		return (2);
}
/**
 * is_prime_number - returns 1 if n is a prime number.
 * @n: Number Integer
 *
 * Return: On success 1.
 * On error, 0 is returned, and errno is set appropriately.
 */
int is_prime_number(int n)
{
		return (prime(n, 2));
}
